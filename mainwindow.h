#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QUrl>
#include <QAudioOutput>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnSetting_clicked();

    void on_SettingList_currentRowChanged(int currentRow);

    void on_SEED_sp_valueChanged(int arg1);

    //void on_spinBox_2_valueChanged(int arg1);

    void on_rightBorder_sp_valueChanged(int arg1);

    void on_leftBorder_sp_2_valueChanged(int arg1);

    void on_topBorder_sp_valueChanged(int arg1);

    void on_bottomBorder_sp_valueChanged(int arg1);

    void on_maxSpeed_sp_valueChanged(int arg1);

    void on_mediumGround_sp_valueChanged(int arg1);

    void on_mediumWidth_sp_valueChanged(int arg1);

    void on_groundScale_sp_valueChanged(int arg1);

    void on_stoneScale_sp_valueChanged(double arg1);

    void on_volume_slide_valueChanged(int value);

private:
    void setBaseSettings();

    Ui::MainWindow *ui;
    bool isChange = false;
    QMediaPlayer *musicPlayer;
    QAudioOutput *musicOutput;
};
#endif // MAINWINDOW_H
