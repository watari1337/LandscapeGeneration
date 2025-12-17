#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->hide();
    ui->settingPalet->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSetting_clicked()
{
    if (ui->settingPalet->isVisible()){
        ui->settingPalet->hide();
    } else {
        ui->settingPalet->show();
        ui->settingPalet->raise();
        ui->SettingPageStack->setCurrentIndex(0);
        ui->SettingList->setCurrentRow(0);
    }
    /*SettingDialog *dialog = new SettingDialog(this);
    dialog->setModal(true);
    dialog->deleteLater();*/
}


void MainWindow::on_SettingList_currentRowChanged(int currentRow)
{
    ui->SettingPageStack->setCurrentIndex(currentRow);
}

