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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    PaintWorld *widget;
    QGridLayout *gridLayout_2;
    QWidget *settingPalet;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *SettingList;
    QStackedWidget *SettingPageStack;
    QWidget *global;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBox_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_3;
    QWidget *page_2;
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
        widget = new PaintWorld(centralwidget);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        settingPalet = new QWidget(widget);
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
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(global);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        spinBox = new QSpinBox(global);
        spinBox->setObjectName("spinBox");

        horizontalLayout_4->addWidget(spinBox);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(global);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(150, 0));

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        spinBox_2 = new QSpinBox(global);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMinimumSize(QSize(150, 0));

        horizontalLayout_5->addWidget(spinBox_2);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 0, 1, 1);

        SettingPageStack->addWidget(global);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        SettingPageStack->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        SettingPageStack->addWidget(page_2);

        horizontalLayout_3->addWidget(SettingPageStack);


        gridLayout_2->addWidget(settingPalet, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnSetting = new QPushButton(widget);
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


        verticalLayout->addWidget(widget);

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

        label->setText(QCoreApplication::translate("MainWindow", "right border ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "right border ", nullptr));
        btnSetting->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
