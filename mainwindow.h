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
#include <QPainter>
#include <QMouseEvent>
#include <QGraphicsEllipseItem>
#include <QDebug>
#include <QGraphicsView>
#include <QEvent>
#include <QGraphicsPixmapItem>
#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QImage>
#include <QColor>
#include <QPainter>
#include <QIcon>
#include <QTabWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QScreen>
#include <QStatusBar>
#include <cmath>
#include <QMouseEvent>
#include <QGraphicsScene>
#include <QGraphicsWidget>
#include <QGraphicsView>
#include <QLabel>
#include <QRect>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsEllipseItem>
#include <QTextEdit>
#include <QTextStream>
#include <QFile>

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
    QGraphicsPathItem *selectedPath;
    QGraphicsEllipseItem *point2;




    void calculateIntens(QGraphicsRectItem *);
    bool eventFilter(QObject *, QEvent *) override;
    void displayImage(const QString &);
    void debugEvent(int);
    void setScaleFactor(qreal scaleFactor);
};

#endif // MAINWINDOW_H
