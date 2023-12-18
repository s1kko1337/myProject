/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
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
    QAction *openLogFile;
    QAction *infoFilePass;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QFrame *ToolFrame;
    QVBoxLayout *tools;
    QPushButton *loadImageButton;
    QGridLayout *zoomLayout;
    QToolButton *unZoomButton;
    QLabel *zoomLabelOut;
    QLabel *zoomLabelUP;
    QToolButton *zoomButton;
    QVBoxLayout *mainInstruments;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *rulerButton;
    QPushButton *rectButton;
    QPushButton *delRuler;
    QPushButton *delRect;
    QFrame *BottomFrame;
    QGridLayout *mainIntens;
    QWidget *RectIntens;
    QVBoxLayout *verticalLayout_4;
    QLabel *intTypeRECT;
    QLabel *minLabel;
    QLabel *maxLabel;
    QLabel *avgLabel;
    QWidget *allPngIntens;
    QVBoxLayout *verticalLayout_5;
    QLabel *intTypeALL;
    QLabel *minAllLabel;
    QLabel *maxAllLabel;
    QLabel *avgAllLabel;
    QLabel *label_2;
    QTextEdit *logTextEd;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 633);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 633));
        MainWindow->setMouseTracking(true);
        MainWindow->setStyleSheet(QString::fromUtf8("background:rgb(220, 220, 220);\n"
"color: black;"));
        loadImageButton_2 = new QAction(MainWindow);
        loadImageButton_2->setObjectName(QString::fromUtf8("loadImageButton_2"));
        loadImageMenu = new QAction(MainWindow);
        loadImageMenu->setObjectName(QString::fromUtf8("loadImageMenu"));
        openLogFile = new QAction(MainWindow);
        openLogFile->setObjectName(QString::fromUtf8("openLogFile"));
        infoFilePass = new QAction(MainWindow);
        infoFilePass->setObjectName(QString::fromUtf8("infoFilePass"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setStyleSheet(QString::fromUtf8("background:rgb(205,205,205);\n"
"border-radius: 10px;\n"
""));

        horizontalLayout->addWidget(graphicsView);

        verticalFrame = new QFrame(centralwidget);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        sizePolicy1.setHeightForWidth(verticalFrame->sizePolicy().hasHeightForWidth());
        verticalFrame->setSizePolicy(sizePolicy1);
        verticalFrame->setMaximumSize(QSize(195, 16777215));
        verticalFrame->setStyleSheet(QString::fromUtf8("background: rgb(205, 205, 205);\n"
"font: 9pt \"Arial\";\n"
"border-radius:5px;"));
        verticalFrame->setFrameShape(QFrame::NoFrame);
        verticalFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ToolFrame = new QFrame(verticalFrame);
        ToolFrame->setObjectName(QString::fromUtf8("ToolFrame"));
        tools = new QVBoxLayout(ToolFrame);
        tools->setObjectName(QString::fromUtf8("tools"));
        loadImageButton = new QPushButton(ToolFrame);
        loadImageButton->setObjectName(QString::fromUtf8("loadImageButton"));
        sizePolicy1.setHeightForWidth(loadImageButton->sizePolicy().hasHeightForWidth());
        loadImageButton->setSizePolicy(sizePolicy1);
        loadImageButton->setMaximumSize(QSize(175, 28));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        loadImageButton->setFont(font);
        loadImageButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background: rgb(220, 220, 220);\n"
"border: 2px solid rgb(194, 194, 194);\n"
"border-radius: 5px;\n"
"padding: 3px;\n"
"\n"
""));

        tools->addWidget(loadImageButton, 0, Qt::AlignLeft);

        zoomLayout = new QGridLayout();
        zoomLayout->setObjectName(QString::fromUtf8("zoomLayout"));
        zoomLayout->setContentsMargins(-1, 0, -1, -1);
        unZoomButton = new QToolButton(ToolFrame);
        unZoomButton->setObjectName(QString::fromUtf8("unZoomButton"));
        unZoomButton->setMinimumSize(QSize(32, 30));
        unZoomButton->setStyleSheet(QString::fromUtf8("padding: 5px;\n"
"background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));

        zoomLayout->addWidget(unZoomButton, 1, 0, 1, 1);

        zoomLabelOut = new QLabel(ToolFrame);
        zoomLabelOut->setObjectName(QString::fromUtf8("zoomLabelOut"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        zoomLabelOut->setFont(font1);
        zoomLabelOut->setStyleSheet(QString::fromUtf8("font-size:8pt;"));

        zoomLayout->addWidget(zoomLabelOut, 1, 1, 1, 1);

        zoomLabelUP = new QLabel(ToolFrame);
        zoomLabelUP->setObjectName(QString::fromUtf8("zoomLabelUP"));
        sizePolicy1.setHeightForWidth(zoomLabelUP->sizePolicy().hasHeightForWidth());
        zoomLabelUP->setSizePolicy(sizePolicy1);
        zoomLabelUP->setFont(font1);
        zoomLabelUP->setStyleSheet(QString::fromUtf8("font-size:8pt;"));

        zoomLayout->addWidget(zoomLabelUP, 0, 1, 1, 1);

        zoomButton = new QToolButton(ToolFrame);
        zoomButton->setObjectName(QString::fromUtf8("zoomButton"));
        zoomButton->setMinimumSize(QSize(32, 30));
        zoomButton->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;\n"
""));

        zoomLayout->addWidget(zoomButton, 0, 0, 1, 1);


        tools->addLayout(zoomLayout);

        mainInstruments = new QVBoxLayout();
        mainInstruments->setObjectName(QString::fromUtf8("mainInstruments"));
        mainInstruments->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(ToolFrame);
        label->setObjectName(QString::fromUtf8("label"));

        mainInstruments->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        rulerButton = new QPushButton(ToolFrame);
        rulerButton->setObjectName(QString::fromUtf8("rulerButton"));
        rulerButton->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));

        gridLayout->addWidget(rulerButton, 1, 0, 1, 1);

        rectButton = new QPushButton(ToolFrame);
        rectButton->setObjectName(QString::fromUtf8("rectButton"));
        rectButton->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));

        gridLayout->addWidget(rectButton, 2, 0, 1, 1);

        delRuler = new QPushButton(ToolFrame);
        delRuler->setObjectName(QString::fromUtf8("delRuler"));
        delRuler->setMinimumSize(QSize(21, 21));
        delRuler->setMaximumSize(QSize(21, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        delRuler->setFont(font2);
        delRuler->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));

        gridLayout->addWidget(delRuler, 1, 1, 1, 1);

        delRect = new QPushButton(ToolFrame);
        delRect->setObjectName(QString::fromUtf8("delRect"));
        delRect->setMinimumSize(QSize(21, 21));
        delRect->setMaximumSize(QSize(21, 21));
        delRect->setFont(font2);
        delRect->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;\n"
""));

        gridLayout->addWidget(delRect, 2, 1, 1, 1);


        mainInstruments->addLayout(gridLayout);


        tools->addLayout(mainInstruments);


        verticalLayout->addWidget(ToolFrame, 0, Qt::AlignTop);

        BottomFrame = new QFrame(verticalFrame);
        BottomFrame->setObjectName(QString::fromUtf8("BottomFrame"));
        mainIntens = new QGridLayout(BottomFrame);
        mainIntens->setObjectName(QString::fromUtf8("mainIntens"));
        mainIntens->setContentsMargins(-1, 1, -1, 1);
        RectIntens = new QWidget(BottomFrame);
        RectIntens->setObjectName(QString::fromUtf8("RectIntens"));
        sizePolicy1.setHeightForWidth(RectIntens->sizePolicy().hasHeightForWidth());
        RectIntens->setSizePolicy(sizePolicy1);
        RectIntens->setMinimumSize(QSize(175, 100));
        RectIntens->setMaximumSize(QSize(175, 100));
        RectIntens->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));
        verticalLayout_4 = new QVBoxLayout(RectIntens);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        intTypeRECT = new QLabel(RectIntens);
        intTypeRECT->setObjectName(QString::fromUtf8("intTypeRECT"));
        sizePolicy1.setHeightForWidth(intTypeRECT->sizePolicy().hasHeightForWidth());
        intTypeRECT->setSizePolicy(sizePolicy1);
        intTypeRECT->setFont(font2);
        intTypeRECT->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_4->addWidget(intTypeRECT);

        minLabel = new QLabel(RectIntens);
        minLabel->setObjectName(QString::fromUtf8("minLabel"));
        sizePolicy1.setHeightForWidth(minLabel->sizePolicy().hasHeightForWidth());
        minLabel->setSizePolicy(sizePolicy1);
        minLabel->setMinimumSize(QSize(0, 0));
        minLabel->setMaximumSize(QSize(16777215, 1677251));
        minLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_4->addWidget(minLabel, 0, Qt::AlignTop);

        maxLabel = new QLabel(RectIntens);
        maxLabel->setObjectName(QString::fromUtf8("maxLabel"));
        sizePolicy1.setHeightForWidth(maxLabel->sizePolicy().hasHeightForWidth());
        maxLabel->setSizePolicy(sizePolicy1);
        maxLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_4->addWidget(maxLabel);

        avgLabel = new QLabel(RectIntens);
        avgLabel->setObjectName(QString::fromUtf8("avgLabel"));
        sizePolicy1.setHeightForWidth(avgLabel->sizePolicy().hasHeightForWidth());
        avgLabel->setSizePolicy(sizePolicy1);
        avgLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_4->addWidget(avgLabel);


        mainIntens->addWidget(RectIntens, 1, 0, 1, 1, Qt::AlignTop);

        allPngIntens = new QWidget(BottomFrame);
        allPngIntens->setObjectName(QString::fromUtf8("allPngIntens"));
        sizePolicy1.setHeightForWidth(allPngIntens->sizePolicy().hasHeightForWidth());
        allPngIntens->setSizePolicy(sizePolicy1);
        allPngIntens->setMinimumSize(QSize(175, 100));
        allPngIntens->setMaximumSize(QSize(175, 100));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        allPngIntens->setFont(font3);
        allPngIntens->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));
        verticalLayout_5 = new QVBoxLayout(allPngIntens);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        intTypeALL = new QLabel(allPngIntens);
        intTypeALL->setObjectName(QString::fromUtf8("intTypeALL"));
        sizePolicy1.setHeightForWidth(intTypeALL->sizePolicy().hasHeightForWidth());
        intTypeALL->setSizePolicy(sizePolicy1);
        intTypeALL->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_5->addWidget(intTypeALL);

        minAllLabel = new QLabel(allPngIntens);
        minAllLabel->setObjectName(QString::fromUtf8("minAllLabel"));
        sizePolicy1.setHeightForWidth(minAllLabel->sizePolicy().hasHeightForWidth());
        minAllLabel->setSizePolicy(sizePolicy1);
        minAllLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_5->addWidget(minAllLabel);

        maxAllLabel = new QLabel(allPngIntens);
        maxAllLabel->setObjectName(QString::fromUtf8("maxAllLabel"));
        sizePolicy1.setHeightForWidth(maxAllLabel->sizePolicy().hasHeightForWidth());
        maxAllLabel->setSizePolicy(sizePolicy1);
        maxAllLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_5->addWidget(maxAllLabel);

        avgAllLabel = new QLabel(allPngIntens);
        avgAllLabel->setObjectName(QString::fromUtf8("avgAllLabel"));
        sizePolicy1.setHeightForWidth(avgAllLabel->sizePolicy().hasHeightForWidth());
        avgAllLabel->setSizePolicy(sizePolicy1);
        avgAllLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_5->addWidget(avgAllLabel);

        avgAllLabel->raise();
        maxAllLabel->raise();
        minAllLabel->raise();
        intTypeALL->raise();

        mainIntens->addWidget(allPngIntens, 3, 0, 1, 1, Qt::AlignTop);

        label_2 = new QLabel(BottomFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        mainIntens->addWidget(label_2, 0, 0, 1, 1);

        logTextEd = new QTextEdit(BottomFrame);
        logTextEd->setObjectName(QString::fromUtf8("logTextEd"));
        logTextEd->setMaximumSize(QSize(175, 150));
        logTextEd->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:0;\n"
"background:white;\n"
"color:black;\n"
"font: 6pt \"Sans Serif\";"));

        mainIntens->addWidget(logTextEd, 4, 0, 1, 1);


        verticalLayout->addWidget(BottomFrame, 0, Qt::AlignBottom);


        horizontalLayout->addWidget(verticalFrame, 0, Qt::AlignHCenter);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 27));
        menuBar->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(205,205,205);\n"
"font: 10pt \"Sans Serif\";\n"
""));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(loadImageMenu);
        menu->addSeparator();
        menu->addAction(openLogFile);
        menu->addAction(infoFilePass);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \321\201\321\200\320\265\320\264\320\275\320\265\320\271 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270 \321\206\320\262\320\265\321\202\320\260", nullptr));
        loadImageButton_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        loadImageMenu->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        openLogFile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273 \320\273\320\276\320\263\320\260", nullptr));
        infoFilePass->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270", nullptr));
        loadImageButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        unZoomButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        zoomLabelOut->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        zoomLabelUP->setText(QCoreApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        zoomButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\321\213:", nullptr));
        rulerButton->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\321\200\320\260\320\275\320\275\320\260\321\217 \320\273\320\270\320\275\320\265\320\271\320\272\320\260", nullptr));
        rectButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        delRuler->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        delRect->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        intTypeRECT->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\277\321\200\321\217\320\274\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\265:", nullptr));
        minLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275. \320\270\320\275\321\202. : 0", nullptr));
        maxLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201. \320\270\320\275\321\202. : 0", nullptr));
        avgLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275. \320\270\320\275\321\202. : 0", nullptr));
        intTypeALL->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\270:", nullptr));
        minAllLabel->setText(QCoreApplication::translate("MainWindow", "\320\237 \320\274\320\260\320\272\321\201. \320\270\320\275\321\202. : 0", nullptr));
        maxAllLabel->setText(QCoreApplication::translate("MainWindow", "\320\237 \320\274\320\270\320\275. \320\270\320\275\321\202. : 0", nullptr));
        avgAllLabel->setText(QCoreApplication::translate("MainWindow", "\320\237 \321\201\321\200\320\265\320\264. \320\270\320\275\321\202. : 0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\321\214:", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
