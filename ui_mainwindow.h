/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *loadImageButton_2;
    QAction *loadImageMenu;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *loadImageButton;
    QVBoxLayout *tools;
    QGridLayout *zoomLayout;
    QToolButton *unZoomButton;
    QToolButton *zoomButton;
    QLabel *zoomLabelUP;
    QLabel *zoomLabelOut;
    QLabel *label;
    QVBoxLayout *mainInstruments;
    QPushButton *rulerButton;
    QPushButton *rectButton;
    QWidget *RectIntens;
    QVBoxLayout *verticalLayout_4;
    QLabel *minLabel;
    QLabel *maxLabel;
    QLabel *avgLabel;
    QWidget *allPngIntens;
    QVBoxLayout *verticalLayout_5;
    QLabel *minAllLabel;
    QLabel *maxAllLabel;
    QLabel *avgAllLabel;
    QTextEdit *logTextEd;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMouseTracking(true);
        MainWindow->setStyleSheet(QString::fromUtf8("background:rgb(220, 220, 220);\n"
"color: black;"));
        loadImageButton_2 = new QAction(MainWindow);
        loadImageButton_2->setObjectName(QString::fromUtf8("loadImageButton_2"));
        loadImageMenu = new QAction(MainWindow);
        loadImageMenu->setObjectName(QString::fromUtf8("loadImageMenu"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setStyleSheet(QString::fromUtf8("background:rgb(205,205,205);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout->addWidget(graphicsView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("font: 10pt \"Sans Serif\";\n"
"border-radius:10px;\n"
"background: rgb(205, 205, 205);\n"
""));
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        loadImageButton = new QPushButton(frame);
        loadImageButton->setObjectName(QString::fromUtf8("loadImageButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loadImageButton->sizePolicy().hasHeightForWidth());
        loadImageButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        loadImageButton->setFont(font);
        loadImageButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background: rgb(220, 220, 220);\n"
"border: 2px solid rgb(194, 194, 194);\n"
"border-radius: 5px;\n"
"padding: 3px;\n"
"\n"
""));

        verticalLayout_2->addWidget(loadImageButton);

        tools = new QVBoxLayout();
        tools->setObjectName(QString::fromUtf8("tools"));
        zoomLayout = new QGridLayout();
        zoomLayout->setObjectName(QString::fromUtf8("zoomLayout"));
        zoomLayout->setContentsMargins(-1, 0, -1, -1);
        unZoomButton = new QToolButton(frame);
        unZoomButton->setObjectName(QString::fromUtf8("unZoomButton"));
        unZoomButton->setMinimumSize(QSize(32, 30));
        unZoomButton->setStyleSheet(QString::fromUtf8("padding: 5px;\n"
"background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));

        zoomLayout->addWidget(unZoomButton, 1, 0, 1, 1);

        zoomButton = new QToolButton(frame);
        zoomButton->setObjectName(QString::fromUtf8("zoomButton"));
        zoomButton->setMinimumSize(QSize(32, 30));
        zoomButton->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;\n"
""));

        zoomLayout->addWidget(zoomButton, 0, 0, 1, 1);

        zoomLabelUP = new QLabel(frame);
        zoomLabelUP->setObjectName(QString::fromUtf8("zoomLabelUP"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        zoomLabelUP->setFont(font1);
        zoomLabelUP->setStyleSheet(QString::fromUtf8("font-size:8pt;"));

        zoomLayout->addWidget(zoomLabelUP, 0, 1, 1, 1);

        zoomLabelOut = new QLabel(frame);
        zoomLabelOut->setObjectName(QString::fromUtf8("zoomLabelOut"));
        zoomLabelOut->setFont(font1);
        zoomLabelOut->setStyleSheet(QString::fromUtf8("font-size:8pt;"));

        zoomLayout->addWidget(zoomLabelOut, 1, 1, 1, 1);


        tools->addLayout(zoomLayout);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        tools->addWidget(label);

        mainInstruments = new QVBoxLayout();
        mainInstruments->setObjectName(QString::fromUtf8("mainInstruments"));
        mainInstruments->setContentsMargins(-1, 0, -1, -1);
        rulerButton = new QPushButton(frame);
        rulerButton->setObjectName(QString::fromUtf8("rulerButton"));
        rulerButton->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));

        mainInstruments->addWidget(rulerButton);

        rectButton = new QPushButton(frame);
        rectButton->setObjectName(QString::fromUtf8("rectButton"));
        rectButton->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));

        mainInstruments->addWidget(rectButton);


        tools->addLayout(mainInstruments);


        verticalLayout_2->addLayout(tools);

        RectIntens = new QWidget(frame);
        RectIntens->setObjectName(QString::fromUtf8("RectIntens"));
        RectIntens->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(RectIntens);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        minLabel = new QLabel(RectIntens);
        minLabel->setObjectName(QString::fromUtf8("minLabel"));

        verticalLayout_4->addWidget(minLabel);

        maxLabel = new QLabel(RectIntens);
        maxLabel->setObjectName(QString::fromUtf8("maxLabel"));

        verticalLayout_4->addWidget(maxLabel);

        avgLabel = new QLabel(RectIntens);
        avgLabel->setObjectName(QString::fromUtf8("avgLabel"));

        verticalLayout_4->addWidget(avgLabel);


        verticalLayout_2->addWidget(RectIntens);

        allPngIntens = new QWidget(frame);
        allPngIntens->setObjectName(QString::fromUtf8("allPngIntens"));
        verticalLayout_5 = new QVBoxLayout(allPngIntens);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        minAllLabel = new QLabel(allPngIntens);
        minAllLabel->setObjectName(QString::fromUtf8("minAllLabel"));

        verticalLayout_5->addWidget(minAllLabel);

        maxAllLabel = new QLabel(allPngIntens);
        maxAllLabel->setObjectName(QString::fromUtf8("maxAllLabel"));

        verticalLayout_5->addWidget(maxAllLabel);

        avgAllLabel = new QLabel(allPngIntens);
        avgAllLabel->setObjectName(QString::fromUtf8("avgAllLabel"));

        verticalLayout_5->addWidget(avgAllLabel);


        verticalLayout_2->addWidget(allPngIntens);

        logTextEd = new QTextEdit(frame);
        logTextEd->setObjectName(QString::fromUtf8("logTextEd"));
        logTextEd->setMaximumSize(QSize(175, 150));
        logTextEd->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:0;\n"
"background:white;\n"
"color:black;\n"
"font: 6pt \"Sans Serif\";"));

        verticalLayout_2->addWidget(logTextEd);


        verticalLayout->addWidget(frame, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuBar->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(205,205,205);\n"
"font: 10pt \"Sans Serif\";\n"
""));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(loadImageMenu);
        menu->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \321\201\321\200\320\265\320\264\320\275\320\265\320\271 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270 \321\206\320\262\320\265\321\202\320\260", nullptr));
        loadImageButton_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        loadImageMenu->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        loadImageButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        unZoomButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        zoomButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        zoomLabelUP->setText(QCoreApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        zoomLabelOut->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\321\213:", nullptr));
        rulerButton->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\320\275\320\265\320\271\320\272\320\260", nullptr));
        rectButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        minLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275. \320\270\320\275\321\202. : 0", nullptr));
        maxLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201. \320\270\320\275\321\202. : 0", nullptr));
        avgLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275. \320\270\320\275\321\202. : 0", nullptr));
        minAllLabel->setText(QCoreApplication::translate("MainWindow", "\320\237 \320\274\320\260\320\272\321\201. \320\270\320\275\321\202. : 0", nullptr));
        maxAllLabel->setText(QCoreApplication::translate("MainWindow", "\320\237 \320\274\320\270\320\275. \320\270\320\275\321\202. : 0", nullptr));
        avgAllLabel->setText(QCoreApplication::translate("MainWindow", "\320\237 \321\201\321\200\320\265\320\264. \320\270\320\275\321\202. : 0", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
