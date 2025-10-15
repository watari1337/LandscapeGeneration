#ifndef PAINTWORLD_H
#define PAINTWORLD_H

#include "world.h"
#include <QWidget>
#include <QPainter>
#include <QMessageBox>
#include <QList>

class PaintWorld : public QWidget
{
    //макрос для работы qt методов slot and signals
    Q_OBJECT
public:
    explicit PaintWorld(QWidget *parent = nullptr);

protected:
    void resizeEvent(QResizeEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

private:
    QColor grass = QColor(50, 201, 65), sky = QColor(111, 183, 209);
    QPixmap curPixmap;
    QVector<int> groundHeight;
    QVector<int> makeGroundLine(int length);
    void makeGround();
    World world;
    Camera cam;
signals:
};

#endif // PAINTWORLD_H
