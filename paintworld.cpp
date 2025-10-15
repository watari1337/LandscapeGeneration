#include "paintworld.h"

PaintWorld::PaintWorld(QWidget *parent)
    : QWidget{parent}, cam(0, 0, this->width(), this->height())
{
    curPixmap = QPixmap(800, 600);;
    curPixmap.fill(sky);
    makeGround();
    world = World();
}

void PaintWorld::resizeEvent(QResizeEvent *event)
{
    cam.reSize(this->width(), this->height());

    QWidget::resizeEvent(event);
}

void PaintWorld::paintEvent(QPaintEvent *event)
{
    QPainter paint(this);

    //рисовать клеточки
    /*int base = 16, numOf = 120;
    paint.setPen(Qt::NoPen);
    paint.setBrush(sky);
    paint.drawRect(0, 0, (numOf+1)*base, (numOf+1)*base);
    for(int i = 0; i < numOf; i++){
        for(int j = 0; j < numOf; j++){
            if ((i+j) % 2 == 0) paint.setBrush(Qt::green);
            else paint.setBrush(Qt::lightGray);
            paint.drawRect(i*base, j*base, base, base);
        }
    }*/

    //рисуется pixmap
    /*if (curPixmap.isNull()) QMessageBox::critical(this, "ошибочка!!!!", "CurPixmap = null");
    QSize wSize = {this->width(), this->height()};
    if (wSize != curPixmap.size()) {
        curPixmap = QPixmap(wSize);
        curPixmap.fill(sky);
        makeGround();
    }
    paint.drawPixmap(0, 0, curPixmap);*/

    //рисуем Chunks
    paint.fillRect(rect(), sky);
    QList allChunks = world.getCameraChunks(cam);
    paint.setPen(QPen(grass, 1));
    for(auto item: allChunks){
        int globalX = item->chunkX() * Chunk::CHUNKSIZE - cam.left();
        int globalY = item->chunkY() * Chunk::CHUNKSIZE - cam.top();
        QVector line = item->getGroundLine();
        for(int i = 0; i < line.size(); i++){
            /*paint.setPen(QPen(sky, 1));
            paint.drawLine(globalX, globalY, globalX, line[i]);*/
            int globalGroundY = line[i] - cam.top();
            paint.drawLine(globalX + i, globalGroundY, globalX + i, globalY + Chunk::CHUNKSIZE);
        }
    }
}

QVector<int> PaintWorld::makeGroundLine(int length)
{
    /*
     * baseHeight уровень земли
     * amplitude max hiegh of hils
     * wavelength how many pixels hils
     * terrain[x] = baseHeight + amplitude * sin(x / wavelength)
    */
    QVector<int> ground(length);
    for (int i = 0; i < length; i++) {
        ground[i] = (200 + 50 * sin(i / 130.0));
    }
    return ground;
}

void PaintWorld::makeGround()
{
    QVector<int> line = makeGroundLine(this->width());
    QPainter paint(&curPixmap);
    paint.setPen(QPen(grass, 1));
    for(int i = 0; i < line.size(); i++){
        paint.drawLine(i, line[i], i, curPixmap.height());
    }
}
