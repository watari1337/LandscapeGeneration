#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Terra Ferra");
    w.resize(1000, 650);
    w.show();

    return a.exec();
}
