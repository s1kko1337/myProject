#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QObject>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <QRectF>
#include <QFileDialog>
#include <QMessageBox>
#include <QGraphicsRectItem>
#include <QMouseEvent>
#include <QGraphicsEllipseItem>
#include <QDebug>
#include <QGraphicsView>
#include <QEvent>
#include <QGraphicsPixmapItem>
#include <QFileDialog>
#include <QMessageBox>
#include <QImage>
#include <QColor>
#include <QTabWidget>
#include <QLabel>
#include <QWidget>
#include <QFile>
#include <QTextEdit>
#include <QDate>
#include <QDesktopServices>
#include <QUrl>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onLoadImageButtonClicked();
    void zoomIn();
    void zoomOut();
    void chooseRect();
    void chooseRuler();
    void delToolRect();
    void delToolRuler();
    void onOpenFileButtonClicked();
    void realTimeScaler();
    void onInfoLabelClicked();
private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsRectItem *selectedRect;
    QImage image;
    QGraphicsEllipseItem *point1;
    QTextEdit *logTextEdit;
    QFile logFile;
    QPointF secPoint;
    bool isImageLoaded;
    bool isPointed;
    bool isMovingRect;
    QPointF prevMousePos;
    qreal rHeihgt;
    qreal rWidth;
    qreal currentScaleFactor;
    QString filePathFS;
    bool isPanning;
    QPointF lastPanPos;
    bool isRectTool;
    bool isRulerTool;
    QGraphicsLineItem *selectedLine;
    QGraphicsEllipseItem *point2;
    QGraphicsTextItem *textItem;
    QString logFileName;
    QString logFolderPath;

    void closeEvent(QCloseEvent *event) override;
    void calculateIntens(QGraphicsRectItem *);
    bool eventFilter(QObject *, QEvent *) override;
    void displayImage(const QString &);
    void debugEvent(int);
    void setScaleFactor(qreal);
    void setScale(qreal);
    QString getCurrentDateTime();
};

#endif // MAINWINDOW_H

