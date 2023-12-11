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
    QAction *openLogFile;
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
    QVBoxLayout *mainInstruments;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *rulerButton;
    QPushButton *rectButton;
    QPushButton *delRuler;
    QPushButton *delRect;
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
        MainWindow->resize(800, 600);
        MainWindow->setMouseTracking(true);
        MainWindow->setStyleSheet(QString::fromUtf8("background:rgb(220, 220, 220);\n"
"color: black;"));
        loadImageButton_2 = new QAction(MainWindow);
        loadImageButton_2->setObjectName(QString::fromUtf8("loadImageButton_2"));
        loadImageMenu = new QAction(MainWindow);
        loadImageMenu->setObjectName(QString::fromUtf8("loadImageMenu"));
        openLogFile = new QAction(MainWindow);
        openLogFile->setObjectName(QString::fromUtf8("openLogFile"));
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
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setLayoutDirection(Qt::LeftToRight);
        frame->setStyleSheet(QString::fromUtf8("font: 10pt \"Sans Serif\";\n"
"border-radius:10px;\n"
"background: rgb(205, 205, 205);\n"
""));
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        loadImageButton = new QPushButton(frame);
        loadImageButton->setObjectName(QString::fromUtf8("loadImageButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loadImageButton->sizePolicy().hasHeightForWidth());
        loadImageButton->setSizePolicy(sizePolicy2);
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

        mainInstruments = new QVBoxLayout();
        mainInstruments->setObjectName(QString::fromUtf8("mainInstruments"));
        mainInstruments->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        mainInstruments->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        rulerButton = new QPushButton(frame);
        rulerButton->setObjectName(QString::fromUtf8("rulerButton"));
        rulerButton->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));

        gridLayout->addWidget(rulerButton, 1, 0, 1, 1);

        rectButton = new QPushButton(frame);
        rectButton->setObjectName(QString::fromUtf8("rectButton"));
        rectButton->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));

        gridLayout->addWidget(rectButton, 2, 0, 1, 1);

        delRuler = new QPushButton(frame);
        delRuler->setObjectName(QString::fromUtf8("delRuler"));
        delRuler->setMinimumSize(QSize(21, 21));
        delRuler->setMaximumSize(QSize(21, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        delRuler->setFont(font2);
        delRuler->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));

        gridLayout->addWidget(delRuler, 1, 1, 1, 1);

        delRect = new QPushButton(frame);
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


        verticalLayout_2->addLayout(tools);

        mainIntens = new QGridLayout();
        mainIntens->setObjectName(QString::fromUtf8("mainIntens"));
        mainIntens->setContentsMargins(-1, 0, -1, 0);
        RectIntens = new QWidget(frame);
        RectIntens->setObjectName(QString::fromUtf8("RectIntens"));
        sizePolicy2.setHeightForWidth(RectIntens->sizePolicy().hasHeightForWidth());
        RectIntens->setSizePolicy(sizePolicy2);
        RectIntens->setMinimumSize(QSize(175, 90));
        RectIntens->setMaximumSize(QSize(150, 90));
        RectIntens->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));
        verticalLayout_4 = new QVBoxLayout(RectIntens);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        intTypeRECT = new QLabel(RectIntens);
        intTypeRECT->setObjectName(QString::fromUtf8("intTypeRECT"));
        intTypeRECT->setFont(font2);
        intTypeRECT->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_4->addWidget(intTypeRECT);

        minLabel = new QLabel(RectIntens);
        minLabel->setObjectName(QString::fromUtf8("minLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(minLabel->sizePolicy().hasHeightForWidth());
        minLabel->setSizePolicy(sizePolicy3);
        minLabel->setMinimumSize(QSize(0, 0));
        minLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_4->addWidget(minLabel);

        maxLabel = new QLabel(RectIntens);
        maxLabel->setObjectName(QString::fromUtf8("maxLabel"));
        sizePolicy3.setHeightForWidth(maxLabel->sizePolicy().hasHeightForWidth());
        maxLabel->setSizePolicy(sizePolicy3);
        maxLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_4->addWidget(maxLabel);

        avgLabel = new QLabel(RectIntens);
        avgLabel->setObjectName(QString::fromUtf8("avgLabel"));
        sizePolicy3.setHeightForWidth(avgLabel->sizePolicy().hasHeightForWidth());
        avgLabel->setSizePolicy(sizePolicy3);
        avgLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_4->addWidget(avgLabel);


        mainIntens->addWidget(RectIntens, 1, 0, 1, 1);

        allPngIntens = new QWidget(frame);
        allPngIntens->setObjectName(QString::fromUtf8("allPngIntens"));
        allPngIntens->setMinimumSize(QSize(175, 90));
        allPngIntens->setMaximumSize(QSize(175, 90));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Sans Serif"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        allPngIntens->setFont(font3);
        allPngIntens->setStyleSheet(QString::fromUtf8("background:rgb(220,220,220);\n"
"border:2px solid rgb(185,185,185);\n"
"border-radius: 4px;"));
        verticalLayout_5 = new QVBoxLayout(allPngIntens);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        intTypeALL = new QLabel(allPngIntens);
        intTypeALL->setObjectName(QString::fromUtf8("intTypeALL"));
        intTypeALL->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_5->addWidget(intTypeALL);

        minAllLabel = new QLabel(allPngIntens);
        minAllLabel->setObjectName(QString::fromUtf8("minAllLabel"));
        minAllLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_5->addWidget(minAllLabel);

        maxAllLabel = new QLabel(allPngIntens);
        maxAllLabel->setObjectName(QString::fromUtf8("maxAllLabel"));
        maxAllLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_5->addWidget(maxAllLabel);

        avgAllLabel = new QLabel(allPngIntens);
        avgAllLabel->setObjectName(QString::fromUtf8("avgAllLabel"));
        avgAllLabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius: none;"));

        verticalLayout_5->addWidget(avgAllLabel);


        mainIntens->addWidget(allPngIntens, 3, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        mainIntens->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout_2->addLayout(mainIntens);

        logTextEd = new QTextEdit(frame);
        logTextEd->setObjectName(QString::fromUtf8("logTextEd"));
        logTextEd->setMaximumSize(QSize(175, 150));
        logTextEd->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:0;\n"
"background:white;\n"
"color:black;\n"
"font: 6pt \"Sans Serif\";"));

        verticalLayout_2->addWidget(logTextEd);


        verticalLayout->addWidget(frame, 0, Qt::AlignRight|Qt::AlignTop);


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
        menu->addAction(openLogFile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \321\201\321\200\320\265\320\264\320\275\320\265\320\271 \320\270\320\275\321\202\320\265\320\275\321\201\320\270\320\262\320\275\320\276\321\201\321\202\320\270 \321\206\320\262\320\265\321\202\320\260", nullptr));
        loadImageButton_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        loadImageMenu->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        openLogFile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273 \320\273\320\276\320\263\320\260", nullptr));
        loadImageButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        unZoomButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        zoomButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        zoomLabelUP->setText(QCoreApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        zoomLabelOut->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\321\213:", nullptr));
        rulerButton->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\320\275\320\265\320\271\320\272\320\260", nullptr));
        rectButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        delRuler->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        delRect->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        intTypeRECT->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\277\321\200\321\217\320\274\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\265:", nullptr));
        minLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275. \320\270\320\275\321\202. : 0", nullptr));
        maxLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201. \320\270\320\275\321\202. : 0", nullptr));
        avgLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275. \320\270\320\275\321\202. : 0", nullptr));
        intTypeALL->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\262\321\201\320\265\320\274 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\270:", nullptr));
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
