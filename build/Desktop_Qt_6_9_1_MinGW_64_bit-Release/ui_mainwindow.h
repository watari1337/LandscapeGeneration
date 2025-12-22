/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "paintworld.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    PaintWorld *mainWorld;
    QGridLayout *gridLayout_2;
    QWidget *settingPalet;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *SettingList;
    QStackedWidget *SettingPageStack;
    QWidget *global;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_11;
    QSpinBox *SEED_sp;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *rightBorder_sp;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *leftBorder_sp_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_14;
    QSpinBox *topBorder_sp;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_15;
    QSpinBox *bottomBorder_sp;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_16;
    QSpinBox *maxSpeed_sp;
    QSpacerItem *verticalSpacer_2;
    QWidget *chunk;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *mediumGround_sp;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_18;
    QSpinBox *mediumWidth_sp;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_19;
    QSpinBox *groundScale_sp;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *stoneScale_sp;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton;
    QWidget *sound;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QSlider *volume_slide;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSetting;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(914, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainWorld = new PaintWorld(centralwidget);
        mainWorld->setObjectName("mainWorld");
        mainWorld->setEnabled(true);
        gridLayout_2 = new QGridLayout(mainWorld);
        gridLayout_2->setObjectName("gridLayout_2");
        settingPalet = new QWidget(mainWorld);
        settingPalet->setObjectName("settingPalet");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settingPalet->sizePolicy().hasHeightForWidth());
        settingPalet->setSizePolicy(sizePolicy);
        settingPalet->setMinimumSize(QSize(700, 0));
        settingPalet->setStyleSheet(QString::fromUtf8("background-color: rgba(50, 0, 70, 140);   \n"
"border-radius: 12px;                     \n"
"border: 1px solid rgba(200, 200, 255, 100);"));
        horizontalLayout_3 = new QHBoxLayout(settingPalet);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        SettingList = new QListWidget(settingPalet);
        new QListWidgetItem(SettingList);
        new QListWidgetItem(SettingList);
        new QListWidgetItem(SettingList);
        SettingList->setObjectName("SettingList");
        SettingList->setMaximumSize(QSize(200, 16777215));
        SettingList->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        SettingList->setStyleSheet(QString::fromUtf8("QListWidget::item {\n"
"    background-color: rgba(150, 50, 200, 200);\n"
"    border-radius: 20px;\n"
"    padding: 10px;\n"
"    margin: 5px;\n"
"    color: white;\n"
"}\n"
"    QListWidget::item:selected {\n"
"        background-color:  rgba(100, 0, 150, 180); /* \321\206\320\262\320\265\321\202 \320\277\321\200\320\270 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\270 */\n"
"    }"));

        horizontalLayout_3->addWidget(SettingList);

        SettingPageStack = new QStackedWidget(settingPalet);
        SettingPageStack->setObjectName("SettingPageStack");
        global = new QWidget();
        global->setObjectName("global");
        gridLayout_3 = new QGridLayout(global);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_8 = new QLabel(global);
        label_8->setObjectName("label_8");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setMinimumSize(QSize(150, 0));

        horizontalLayout_11->addWidget(label_8);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        SEED_sp = new QSpinBox(global);
        SEED_sp->setObjectName("SEED_sp");
        SEED_sp->setMinimumSize(QSize(150, 0));
        SEED_sp->setMaximum(99999999);

        horizontalLayout_11->addWidget(SEED_sp);


        gridLayout_3->addLayout(horizontalLayout_11, 0, 0, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(global);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(150, 0));

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        rightBorder_sp = new QSpinBox(global);
        rightBorder_sp->setObjectName("rightBorder_sp");
        rightBorder_sp->setMinimumSize(QSize(150, 0));
        rightBorder_sp->setMinimum(10);
        rightBorder_sp->setMaximum(9999);

        horizontalLayout_5->addWidget(rightBorder_sp);


        gridLayout_3->addLayout(horizontalLayout_5, 2, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_3 = new QLabel(global);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(150, 0));

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        leftBorder_sp_2 = new QSpinBox(global);
        leftBorder_sp_2->setObjectName("leftBorder_sp_2");
        leftBorder_sp_2->setMinimumSize(QSize(150, 0));
        leftBorder_sp_2->setMinimum(10);
        leftBorder_sp_2->setMaximum(9999);

        horizontalLayout_6->addWidget(leftBorder_sp_2);


        gridLayout_3->addLayout(horizontalLayout_6, 3, 0, 1, 2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_11 = new QLabel(global);
        label_11->setObjectName("label_11");
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMinimumSize(QSize(150, 0));

        horizontalLayout_14->addWidget(label_11);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);

        topBorder_sp = new QSpinBox(global);
        topBorder_sp->setObjectName("topBorder_sp");
        topBorder_sp->setMinimumSize(QSize(150, 0));
        topBorder_sp->setMinimum(10);
        topBorder_sp->setMaximum(9999);
        topBorder_sp->setValue(10);

        horizontalLayout_14->addWidget(topBorder_sp);


        gridLayout_3->addLayout(horizontalLayout_14, 4, 0, 1, 2);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_12 = new QLabel(global);
        label_12->setObjectName("label_12");
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setMinimumSize(QSize(150, 0));

        horizontalLayout_15->addWidget(label_12);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_15);

        bottomBorder_sp = new QSpinBox(global);
        bottomBorder_sp->setObjectName("bottomBorder_sp");
        bottomBorder_sp->setMinimumSize(QSize(150, 0));
        bottomBorder_sp->setMinimum(10);
        bottomBorder_sp->setMaximum(9999);

        horizontalLayout_15->addWidget(bottomBorder_sp);


        gridLayout_3->addLayout(horizontalLayout_15, 5, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 6, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_13 = new QLabel(global);
        label_13->setObjectName("label_13");
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(150, 0));

        horizontalLayout_16->addWidget(label_13);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_16);

        maxSpeed_sp = new QSpinBox(global);
        maxSpeed_sp->setObjectName("maxSpeed_sp");
        maxSpeed_sp->setMinimumSize(QSize(150, 0));
        maxSpeed_sp->setMaximum(50);

        horizontalLayout_16->addWidget(maxSpeed_sp);


        gridLayout_3->addLayout(horizontalLayout_16, 7, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 8, 0, 1, 1);

        SettingPageStack->addWidget(global);
        chunk = new QWidget();
        chunk->setObjectName("chunk");
        gridLayout_4 = new QGridLayout(chunk);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_6 = new QLabel(chunk);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(200, 0));

        horizontalLayout_9->addWidget(label_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        mediumGround_sp = new QSpinBox(chunk);
        mediumGround_sp->setObjectName("mediumGround_sp");
        mediumGround_sp->setMinimumSize(QSize(150, 0));
        mediumGround_sp->setMinimum(-600);
        mediumGround_sp->setMaximum(9999);

        horizontalLayout_9->addWidget(mediumGround_sp);


        gridLayout_4->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_9 = new QLabel(chunk);
        label_9->setObjectName("label_9");
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(200, 0));

        horizontalLayout_18->addWidget(label_9);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);

        mediumWidth_sp = new QSpinBox(chunk);
        mediumWidth_sp->setObjectName("mediumWidth_sp");
        mediumWidth_sp->setMinimumSize(QSize(150, 0));
        mediumWidth_sp->setMinimum(-600);
        mediumWidth_sp->setMaximum(9999);

        horizontalLayout_18->addWidget(mediumWidth_sp);


        gridLayout_4->addLayout(horizontalLayout_18, 1, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_14 = new QLabel(chunk);
        label_14->setObjectName("label_14");
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setMinimumSize(QSize(200, 0));

        horizontalLayout_19->addWidget(label_14);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_19);

        groundScale_sp = new QSpinBox(chunk);
        groundScale_sp->setObjectName("groundScale_sp");
        groundScale_sp->setMinimumSize(QSize(150, 0));
        groundScale_sp->setMinimum(1);
        groundScale_sp->setMaximum(9999);

        horizontalLayout_19->addWidget(groundScale_sp);


        gridLayout_4->addLayout(horizontalLayout_19, 2, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 3, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_7 = new QLabel(chunk);
        label_7->setObjectName("label_7");
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(200, 0));

        horizontalLayout_10->addWidget(label_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        stoneScale_sp = new QDoubleSpinBox(chunk);
        stoneScale_sp->setObjectName("stoneScale_sp");
        stoneScale_sp->setMinimumSize(QSize(150, 0));
        stoneScale_sp->setDecimals(5);
        stoneScale_sp->setMaximum(1.000000000000000);

        horizontalLayout_10->addWidget(stoneScale_sp);


        gridLayout_4->addLayout(horizontalLayout_10, 4, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 480, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_12 = new QSpacerItem(37, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        pushButton = new QPushButton(chunk);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(60, 30));

        horizontalLayout->addWidget(pushButton);


        gridLayout_4->addLayout(horizontalLayout, 6, 0, 1, 1);

        SettingPageStack->addWidget(chunk);
        sound = new QWidget();
        sound->setObjectName("sound");
        gridLayout = new QGridLayout(sound);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_5 = new QLabel(sound);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(150, 0));

        horizontalLayout_8->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        volume_slide = new QSlider(sound);
        volume_slide->setObjectName("volume_slide");
        volume_slide->setMaximum(100);
        volume_slide->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_8->addWidget(volume_slide);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 507, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        SettingPageStack->addWidget(sound);

        horizontalLayout_3->addWidget(SettingPageStack);


        gridLayout_2->addWidget(settingPalet, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnSetting = new QPushButton(mainWorld);
        btnSetting->setObjectName("btnSetting");
        btnSetting->setMinimumSize(QSize(48, 48));
        btnSetting->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"                           "));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/alexb/Desktop/91700.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnSetting->setIcon(icon);
        btnSetting->setIconSize(QSize(30, 30));
        btnSetting->setFlat(true);

        horizontalLayout_2->addWidget(btnSetting);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);


        verticalLayout->addWidget(mainWorld);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 914, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        SettingList->setCurrentRow(0);
        SettingPageStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));

        const bool __sortingEnabled = SettingList->isSortingEnabled();
        SettingList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = SettingList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "global", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = SettingList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "chunk", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = SettingList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "sound", nullptr));
        SettingList->setSortingEnabled(__sortingEnabled);

        label_8->setText(QCoreApplication::translate("MainWindow", "SEED", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "right border ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "left border ", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "top border ", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "bottom border ", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "max speed", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "medium ground height", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "medium ground width", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "ground scale", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "stone scale", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "volume", nullptr));
        btnSetting->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
