#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), selectedRect(nullptr), point1(nullptr), isImageLoaded(false), isPointed(false),
      isMovingRect(false),rHeihgt(1.0),rWidth(1.0),currentScaleFactor(1.0), isPanning(false),isRectTool(false), isRulerTool(false),
      selectedLine(nullptr),point2(nullptr),textItem(nullptr)

{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    scene->installEventFilter(this);

    ui->graphicsView->installEventFilter(this);

    logTextEdit = ui->logTextEd;
    logFolderPath = "logs";

    QDir().mkpath(logFolderPath);

    logFileName = logFolderPath + "/log_" + QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss") + ".log";

    logFile.setFileName(logFileName);
    if (logFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream logStream(&logFile);
        QString logMessage = getCurrentDateTime()+ " " + "Лог начат:";
        logStream << logMessage << "\n";
    }
    else
    {
        qWarning() << "Не удалось открыть файл лога для записи.";
    }

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setMouseTracking(true);

    connect(ui->loadImageMenu, SIGNAL(triggered()), this, SLOT(onLoadImageButtonClicked()));
    connect(ui->openLogFile, SIGNAL(triggered()), this, SLOT(onOpenFileButtonClicked()));
    connect(ui->loadImageButton, SIGNAL(clicked()), this, SLOT(onLoadImageButtonClicked()));
    connect(ui->zoomButton, SIGNAL(clicked()), this, SLOT(zoomIn()));
    connect(ui->unZoomButton, SIGNAL(clicked()), this, SLOT(zoomOut()));
    connect(ui->rulerButton, SIGNAL(clicked()), this, SLOT(chooseRuler()));
    connect(ui->rectButton, SIGNAL(clicked()), this, SLOT(chooseRect()));
    connect(ui->delRuler, SIGNAL(clicked()), this, SLOT(delToolRuler()));
    connect(ui->delRect, SIGNAL(clicked()), this, SLOT(delToolRect()));
}
MainWindow::~MainWindow()
{
    logFile.close();
    delete ui;
}

void MainWindow::onLoadImageButtonClicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Открыть изображение", "", "Изображения (*.png *.jpg *.bmp);;Все файлы (*)");
    filePathFS = filePath;

    if (!filePath.isEmpty())
    {
        debugEvent(1);
        if (point1)
        {
            scene->removeItem(point1);
            delete point1;
            point1 = nullptr;
        }

        if (selectedRect)
        {
            scene->removeItem(selectedRect);
            delete selectedRect;
            selectedRect = nullptr;
        }

        displayImage(filePath);
    }
}

void MainWindow::chooseRect()
{
    if (isImageLoaded == true)
    {
        if(isRectTool)
        {
            isRectTool = false;
            isRulerTool = false;
        }
        else
        {
            isRectTool = true;
            isRulerTool = false;
        }
    }
    else
    {
        return;
    }
}

void MainWindow::chooseRuler()
{
    if (isImageLoaded)
    {
        if(isRulerTool)
        {
            isRectTool = false;
            isRulerTool = false;
        }
        else
        {
            isRulerTool = true;
            isRectTool = false;
        }
    }
    else
    {
        return;
    }
}

void MainWindow::displayImage(const QString &filePath)
{
    image.load(filePath);
    scene->clear();
    scene->addPixmap(QPixmap::fromImage(image));

    QRectF sceneRect = ui->graphicsView->sceneRect();

    while (sceneRect.width() < image.width() && sceneRect.height() < image.height()) {
        zoomOut();
        sceneRect = ui->graphicsView->sceneRect();
    }

    isImageLoaded = true;
    sceneRect = ui->graphicsView->sceneRect();

    /*QSize rect = ui->graphicsView->size();
    qreal rectH = 800;
    qreal rectW = 600;    rect.width() = rectW;*/

    //QSize size(800,600);
    //ui->centralwidget->resize(size);
    realTimeScaler();

    int totalPixels = image.width() * image.height();
    int totalIntensity = 0;
    int minIntensity = 255;
    int maxIntensity = 0;
    for (int y = 0; y < image.height(); ++y)
    {
        for ( int x = 0; x < image.width(); ++x)
        {
            QRgb pixelValue = image.pixel(x, y);
            int intensity = qGray(pixelValue);

            totalIntensity += intensity;

            if (intensity < minIntensity)
            {
                minIntensity = intensity;
            }
            if (intensity > maxIntensity)
            {
                maxIntensity = intensity;
            }
        }
    }

    int avgIntensity = totalIntensity / totalPixels;
    ui->minLabel->setText("Мин. инт. : 0");
    ui->maxLabel->setText("Макс. инт. : 0");
    ui->avgLabel->setText("Средн. инт. : 0");
    ui->minAllLabel->setText("П мин. инт. : " + QString::number(minIntensity));
    ui->maxAllLabel->setText("П макс. инт. : " + QString::number(maxIntensity));
    ui->avgAllLabel->setText("П средн. инт. : " + QString::number(avgIntensity));
}



void MainWindow::realTimeScaler()
{
    QSize rect = ui->graphicsView->size();
    qreal rectH = rect.height()-25;
    qreal imgH = image.height();
    qreal rectW = rect.width()-25;
    qreal imgW = image.width();
    qreal factorH = rectH/imgH;
    qreal factorW = rectW/imgW;
    if(factorH>0&&factorW>0)
    {
    if(image.height()>rect.height())
    {
        setScale(factorH);
    }
    if(image.width()>rect.width())
    {
        setScale(factorW);
    }
    }
}

void MainWindow::setScale(qreal scaleFactor)
{
    if (isImageLoaded)
    {
        QTransform transform;

        transform.scale(scaleFactor, scaleFactor);

        ui->graphicsView->setTransform(transform);

        ui->graphicsView->setSceneRect(scene->sceneRect());
    }
}

void MainWindow::setScaleFactor(qreal scaleFactor)
{
    if (isImageLoaded)
    {
        if(scaleFactor == 1.2)
        {
            debugEvent(10);
        }
        if(scaleFactor == 0.8)
        {
            debugEvent(11);
        }
        currentScaleFactor *= scaleFactor;

        QTransform transform;

        transform.scale(currentScaleFactor, currentScaleFactor);

        ui->graphicsView->setTransform(transform);

        ui->graphicsView->setSceneRect(scene->sceneRect());
    }
}

void MainWindow::zoomIn()
{
    qreal scaleFactor = 1.2;
    setScaleFactor(scaleFactor);

}

void MainWindow::zoomOut()
{
    qreal scaleFactor = 0.8;
    setScaleFactor(scaleFactor);
}


bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    Q_UNUSED(obj)

    if (event->type() == QEvent::Resize)
    {
        realTimeScaler();
    }

    if (event->type() == QEvent::GraphicsSceneMousePress)
    {
        QGraphicsSceneMouseEvent *sceneEvent = static_cast<QGraphicsSceneMouseEvent*>(event);

        if (sceneEvent->button() == Qt::RightButton)
        {
            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Выход", "Вы уверены, что хотите выйти?", QMessageBox::Yes|QMessageBox::No);

            if (reply == QMessageBox::Yes)
            {
                debugEvent(0);
                QApplication::quit();
            }
            return false;
        }
    }
    if(isRulerTool)
    {
        {
            if (event->type() == QEvent::GraphicsSceneMousePress)
            {
                QGraphicsSceneMouseEvent *sceneEvent = static_cast<QGraphicsSceneMouseEvent*>(event);

                if(selectedLine)
                {
                    delete selectedLine;
                    selectedLine = nullptr;

                    delete point1;
                    point1 = nullptr;

                    delete point2;
                    point2 = nullptr;

                    delete textItem;
                    textItem = nullptr;
                }
                if (sceneEvent->button() == Qt::LeftButton)
                {
                    if (!isImageLoaded)
                    {
                        QMessageBox::warning(this, "Ошибка", "Пожалуйста, загрузите изображение.");

                        debugEvent(7);
                        return false;
                    }
                    if (!point1)
                    {
                        QPointF currPos = sceneEvent->scenePos();
                        qreal x = qBound<qreal>(0, currPos.x(), image.width());
                        qreal y = qBound<qreal>(0, currPos.y(), image.height());
                        point1 = new QGraphicsEllipseItem(-1.5, -1.5, 3, 3);
                        point1->setBrush(Qt::red);
                        scene->addItem(point1);
                        point1->setPos(x, y);

                        debugEvent(4);
                    }
                }
            }
            else if (event->type() == QEvent::GraphicsSceneMouseMove)
            {
                if (isImageLoaded && point1)
                {
                    if (!point2)
                    {
                        point2 = new QGraphicsEllipseItem(-1.5, -1.5, 3, 3);
                        scene->addItem(point2);
                    }
                }
            }

            else if (event->type() == QEvent::GraphicsSceneMouseRelease)
            {
                QGraphicsSceneMouseEvent *sceneEvent = static_cast<QGraphicsSceneMouseEvent*>(event);
                QPointF currPos = sceneEvent->scenePos();

                if (point1->pos() == currPos)
                {
                    QMessageBox::warning(this, "Ошибка", "Пожалуйста, выберите две точки, не находящиеся в одном месте.");


                    scene->removeItem(point1);
                    delete point1;
                    point1 = nullptr;


                    scene->removeItem(point2);
                    delete point2;
                    point2 = nullptr;


                    return false;
                }

                qreal x = qBound<qreal>(0, currPos.x(), image.width());
                qreal y = qBound<qreal>(0, currPos.y(), image.height());

                point2->setBrush(Qt::red);
                point2->setPos(x,y);

                QPainterPath path;

                selectedLine = new QGraphicsLineItem();
                selectedLine->setLine(point1->pos().x(),point1->pos().y(),point2->pos().x(),point2->pos().y());
                QLineF line = selectedLine->line();


                int length = line.length();

                QPen pen;
                pen.setColor(QColor(158, 158, 158, 158));
                pen.setWidth(2);
                pen.setStyle(Qt::DashLine);

                selectedLine->setPen(pen);

                textItem = new QGraphicsTextItem();
                textItem->setPlainText(QString::number(length) + "px");

                QFont font;
                font.setPointSize(10);
                textItem->setFont(font);
                textItem->setDefaultTextColor(QColor(Qt::red));

                QPointF textPos = selectedLine->line().pointAt(0.5);
                textItem->setPos(textPos.x() - textItem->boundingRect().width()/2,
                                 textPos.y() - textItem->boundingRect().height()/2);

                scene->addItem(selectedLine);
                scene->addItem(textItem);


            }
        }
        return false;
    }
    if(isRectTool)
    {
        if(point1&&point2)
        {
            scene->removeItem(point1);
            delete point1;
            point1 = nullptr;

            scene->removeItem(point2);
            delete point2;
            point2 = nullptr;
        }
        if (event->type() == QEvent::GraphicsSceneMousePress)
        {
            QGraphicsSceneMouseEvent *sceneEvent = static_cast<QGraphicsSceneMouseEvent*>(event);


            if (sceneEvent->button() == Qt::LeftButton)
            {
                if (!isImageLoaded)
                {
                    QMessageBox::warning(this, "Ошибка", "Пожалуйста, загрузите изображение.");

                    debugEvent(7);
                    return false;
                }

                if (!point1)
                {
                    delete selectedRect;
                    selectedRect = nullptr;

                    QPointF currPos = sceneEvent->scenePos();
                    qreal x = qBound<qreal>(0, currPos.x(), image.width());
                    qreal y = qBound<qreal>(0, currPos.y(), image.height());
                    point1 = new QGraphicsEllipseItem(-1.5, -1.5, 3, 3);
                    point1->setBrush(Qt::red);
                    scene->addItem(point1);
                    point1->setPos(x, y);

                    debugEvent(4);
                }
            }
        }
        else if (event->type() == QEvent::GraphicsSceneMouseMove)
        {
            QGraphicsSceneMouseEvent *sceneEvent = static_cast<QGraphicsSceneMouseEvent*>(event);
            if (isImageLoaded && point1)
            {
                QPointF currPos = sceneEvent->scenePos();
                qreal x = qBound<qreal>(0, currPos.x(), image.width());
                qreal y = qBound<qreal>(0, currPos.y(), image.height());

                qreal width = qAbs(x - point1->x());
                qreal height = qAbs(y - point1->y());

                if (!selectedRect)
                {
                    if (!point1->scene())
                    {
                        return false;
                    }
                    selectedRect = new QGraphicsRectItem(0, 0, width, height);
                    selectedRect->setBrush(QBrush(QColor(255, 0, 0, 128)));
                    scene->addItem(selectedRect);
                }
                else
                {
                    qreal rectX = qMin(point1->x(), x);
                    qreal rectY = qMin(point1->y(), y);

                    if (rectX + width > image.width())
                        width = image.width() - rectX;

                    if (rectY + height > image.height())
                        height = image.height() - rectY;

                    selectedRect->setRect(rectX, rectY, width, height);
                    rHeihgt = height;
                    rWidth = width;

                }
            }
        }

        else if (event->type() == QEvent::GraphicsSceneMouseRelease)
        {
            QGraphicsSceneMouseEvent *sceneEvent = static_cast<QGraphicsSceneMouseEvent*>(event);
            QPointF currPos = sceneEvent->scenePos();

            if (point1 && (rHeihgt == 0 || rWidth == 0))
            {

                debugEvent(3);

                QMessageBox::warning(this, "Ошибка", "Пожалуйста, создайте прямоугольник не являющийся линией.");


                scene->removeItem(point1);
                delete point1;
                point1 = nullptr;

                return false;
            }

            else if (point1->x() == currPos.x() || point1->y() == currPos.y())
            {
                QMessageBox::warning(this, "Ошибка", "Пожалуйста, выберите две точки, не находящиеся на одной оси.");


                scene->removeItem(point1);
                delete point1;
                point1 = nullptr;


                scene->removeItem(selectedRect);
                delete selectedRect;
                selectedRect = nullptr;

                debugEvent(6);
                return false;
            }


            debugEvent(8);


            point2 = new QGraphicsEllipseItem(-1.5, -1.5, 3, 3);
            point2->setBrush(Qt::red);
            scene->addItem(point2);
            point2->setPos(currPos);

            selectedRect->setBrush(QBrush(QColor(128, 128, 128, 128)));
            calculateIntens(selectedRect);
        }
    }
    return false;
}


void MainWindow::calculateIntens(QGraphicsRectItem *rectItem)
{
    if (rectItem)
    {
        QRectF rect = rectItem->rect().normalized().toRect();
        int totalPixels = rect.width() * rect.height();
        int totalIntensity = 0;
        int minIntensity = 255;
        int maxIntensity = 0;
        for (int y = rect.top(); y < rect.bottom(); ++y)
        {
            for (int x = rect.left(); x < rect.right(); ++x)
            {
                QRgb pixelValue = image.pixel(x, y);
                int intensity = qGray(pixelValue);

                totalIntensity += intensity;
                minIntensity = qMin(minIntensity,intensity);
                maxIntensity = qMax(maxIntensity,intensity);

            }
        }

        int avgIntensity = totalIntensity / totalPixels;

        ui->minLabel->setText("Мин. инт. : " + QString::number(minIntensity));
        ui->maxLabel->setText("Макс. инт. : " + QString::number(maxIntensity));
        ui->avgLabel->setText("Средн. инт. : " + QString::number(avgIntensity));
        return;
    }
}



void MainWindow::debugEvent(int event)
{
    QTextStream logStream(&logFile);
    switch(event)
    {


    case 0:
    {
        QString logMessage = getCurrentDateTime()+ " " + "Действие: выход из приложения;";
        logStream << logMessage << "\n";
        logTextEdit->append(logMessage);
        logMessage = getCurrentDateTime()+ " " + "Лог завершен.";
        logStream << logMessage << "\n";
    }
        break;

    case 1:
        if(filePathFS != nullptr)
        {
            QString logMessage = getCurrentDateTime() + " " + "загружено изображение: " + filePathFS;
            logStream << logMessage << "\n";
            logTextEdit->append(logMessage);
        }
        break;


    case 2:
    {
        QString logMessage = getCurrentDateTime()+ " " + "Ошибка: нажата лкм при незагруженном изображении;";
        logStream << logMessage << "\n";
        logTextEdit->append(logMessage);
    }
        break;

    case 3:
    {
        QString logMessage = getCurrentDateTime() + " " + "Ошибка: прямоугольник задан линией;";
        logTextEdit->append(logMessage);
        logStream << logMessage << "\n";
    }
        break;
    case 4:
    {
        QString logMessage = getCurrentDateTime()+ " " + "Действие: использована линейка;";
        logStream << logMessage << "\n";
        logTextEdit->append(logMessage);
    }
        break;

    case 5:
    {
        QString logMessage = getCurrentDateTime()+ " " + "Действие: использован инструмент прямоугольник;";
        logStream << logMessage << "\n";
        logTextEdit->append(logMessage);
    }
        break;

    case 6:
    {
        QString logMessage = getCurrentDateTime() + " " + "Ошибка: точки на одной оси;";
        logTextEdit->append(logMessage);
        logStream << logMessage << "\n";
    }
        break;

    case 7:
    {
        QString logMessage = getCurrentDateTime()+ " " + "Ошибка: использован инструмент при незагруженном изображении;";
        logStream << logMessage << "\n";
        logTextEdit->append(logMessage);
    }
        break;

    case 8:
    {
        QString logMessage = getCurrentDateTime()+ " " + "Действие: использован инструмент удаления прямоугольника;";
        logStream << logMessage << "\n";
        logTextEdit->append(logMessage);
    }
        break;

    case 9:
    {
        QString logMessage = getCurrentDateTime()+ " " + "Действие: использован инструмент удаления линейки;";
        logStream << logMessage << "\n";
        logTextEdit->append(logMessage);
    }
        break;

    case 10:
    {
        QString logMessage = getCurrentDateTime()+ " " + "Действие: использован инструмент увеличения масштаба;";
        logStream << logMessage << "\n";
        logTextEdit->append(logMessage);
    }
        break;

    case 11:
    {
        QString logMessage = getCurrentDateTime()+ " " + "Действие: использован инструмент уменьшения масштаба;";
        logStream << logMessage << "\n";
        logTextEdit->append(logMessage);
    }
        break;
    }
}

void MainWindow::delToolRect()
{
    if(selectedRect)
    {
        delete selectedRect;
        selectedRect = nullptr;

        ui->minLabel->setText("Мин. инт. : 0");
        ui->maxLabel->setText("Макс. инт. : 0");
        ui->avgLabel->setText("Средн. инт. : 0");

        debugEvent(8);
    }

}

void MainWindow::delToolRuler()
{    if(selectedLine)
    {
        delete point1;
        point1 = nullptr;

        delete point2;
        point2 = nullptr;

        delete selectedLine;
        selectedLine = nullptr;

        delete textItem;
        textItem = nullptr;

        debugEvent(9);
    }
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Выход", "Вы уверены, что хотите выйти?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes)
    {
        debugEvent(0);
        event->accept();
    }
    else
    {
        event->ignore();
    }
}


QString MainWindow::getCurrentDateTime()
{
    return QDateTime::currentDateTime().toString("dd.MM.yyyy hh:mm:ss");
}

void MainWindow::onOpenFileButtonClicked()
{
    QString filePath = logFileName;

    QUrl fileUrl = QUrl::fromLocalFile(filePath);

    if (!fileUrl.isEmpty()) {
        QDesktopServices::openUrl(fileUrl);
    } else {
        qDebug() << "Некорректный путь к файлу!";
    }
}
