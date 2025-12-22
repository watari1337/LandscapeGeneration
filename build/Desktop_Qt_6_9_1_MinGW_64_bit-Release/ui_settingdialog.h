/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *SettingList;
    QStackedWidget *SettingPageStack;
    QWidget *page;
    QWidget *page_3;
    QWidget *page_2;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName("SettingDialog");
        SettingDialog->resize(710, 529);
        horizontalLayout = new QHBoxLayout(SettingDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        SettingList = new QListWidget(SettingDialog);
        new QListWidgetItem(SettingList);
        new QListWidgetItem(SettingList);
        new QListWidgetItem(SettingList);
        SettingList->setObjectName("SettingList");
        SettingList->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(SettingList);

        SettingPageStack = new QStackedWidget(SettingDialog);
        SettingPageStack->setObjectName("SettingPageStack");
        page = new QWidget();
        page->setObjectName("page");
        SettingPageStack->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        SettingPageStack->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        SettingPageStack->addWidget(page_2);

        horizontalLayout->addWidget(SettingPageStack);


        retranslateUi(SettingDialog);

        SettingPageStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QCoreApplication::translate("SettingDialog", "Dialog", nullptr));

        const bool __sortingEnabled = SettingList->isSortingEnabled();
        SettingList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = SettingList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("SettingDialog", "global", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = SettingList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("SettingDialog", "chunk", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = SettingList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("SettingDialog", "sound", nullptr));
        SettingList->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
