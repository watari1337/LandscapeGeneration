#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"
#include "world.h"
#include "paintworld.h"

void MainWindow::setBaseSettings(){
    ui->SEED_sp->setValue(SEED);
    ui->bottomBorder_sp->setValue(Chunk::CBOTTOMCHUNKBORDER);
    ui->topBorder_sp->setValue(-Chunk::CTOPCHUNKBORDER);
    ui->rightBorder_sp->setValue(Chunk::CRIGHTCHUNKBORDER);
    ui->leftBorder_sp_2->setValue(-Chunk::CLEFTCHUNKBORDER);
    ui->maxSpeed_sp->setValue(MAXSPEED);
    ui->mediumGround_sp->setValue(-Chunk::CLANDSTART);
    ui->mediumWidth_sp->setValue(Chunk::CLANDDEVIATION);
    ui->groundScale_sp->setValue(Chunk::CLANDSCALE);
    ui->stoneScale_sp->setValue(Chunk::STONESCALE);

    isChange = false;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->hide();
    ui->settingPalet->hide();
    setBaseSettings();

    musicPlayer = new QMediaPlayer(this);
    musicOutput = new QAudioOutput(this);

    musicPlayer->setAudioOutput(musicOutput);
    ui->volume_slide->setValue(30);
    musicOutput->setVolume(0.3);
    musicPlayer->setSource(QUrl("qrc:/music/Distance Indo Silver.mp3"));
    musicPlayer->setLoops(QMediaPlayer::Infinite);
    musicPlayer->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSetting_clicked()
{
    if (ui->settingPalet->isVisible()){
        ui->settingPalet->hide();
        if (isChange) {
            ui->mainWorld->cam.moveTo(0,0);
            ui->mainWorld->world.clearWorldCashData();
            ui->mainWorld->update();
            isChange = false;
        }
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


void MainWindow::on_SEED_sp_valueChanged(int arg1)
{
    SEED = arg1;
    isChange = true;
}


void MainWindow::on_rightBorder_sp_valueChanged(int arg1)
{
    Chunk::RIGHTCHUNKBORDER = arg1;
    isChange = true;
}


void MainWindow::on_leftBorder_sp_2_valueChanged(int arg1)
{
    Chunk::LEFTCHUNKBORDER = -arg1;
    isChange = true;
}


void MainWindow::on_topBorder_sp_valueChanged(int arg1)
{
    Chunk::TOPCHUNKBORDER = -arg1;
    isChange = true;
}


void MainWindow::on_bottomBorder_sp_valueChanged(int arg1)
{
    Chunk::BOTTOMCHUNKBORDER = arg1;
    isChange = true;
}


void MainWindow::on_maxSpeed_sp_valueChanged(int arg1)
{
    MAXSPEED = arg1;
}


void MainWindow::on_mediumGround_sp_valueChanged(int arg1)
{
    Chunk::LANDSTART = -arg1;
    isChange = true;
}


void MainWindow::on_mediumWidth_sp_valueChanged(int arg1)
{
    Chunk::LANDDEVIATION = arg1;
    isChange = true;
}


void MainWindow::on_groundScale_sp_valueChanged(int arg1)
{
    Chunk::LANDSCALE = arg1;
    isChange = true;
}


void MainWindow::on_stoneScale_sp_valueChanged(double arg1)
{
    Chunk::STONESCALE = arg1;
    isChange = true;
}


void MainWindow::on_volume_slide_valueChanged(int value)
{
    musicOutput->setVolume(value/100.0f);
}

