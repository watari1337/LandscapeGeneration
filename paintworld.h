#ifndef PAINTWORLD_H
#define PAINTWORLD_H

#include "world.h"
#include <QWidget>
#include <QPainter>
#include <QMessageBox>
#include <QList>
#include <QKeyEvent>
#include <QTimer>
#include <QPoint>
#include <QDebug>

class PaintWorld : public QWidget
{
    //макрос для работы qt методов slot and signals
    Q_OBJECT
public:
    explicit PaintWorld(QWidget *parent = nullptr);

protected:
    void resizeEvent(QResizeEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;

private:
    QColor grass = QColor(50, 201, 65), sky = QColor(111, 183, 209);
    QPixmap curPixmap;
    QVector<int> groundHeight;
    QVector<int> makeGroundLine(int length);
    void makeGround();
    void updateFrame();
    World world;
    Camera cam;
    float moveSpeed = 0.5, baseMoveInc = 1.05, moveStart = 5, moveX = 0, moveY = 0;
    bool moveUp = false, moveDown = false, moveLeft = false, moveRight = false;
signals:
};

#endif // PAINTWORLD_H
