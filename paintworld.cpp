#include "paintworld.h"
#include "global.h"

int SEED = 78456120;

PaintWorld::PaintWorld(QWidget *parent)
    : QWidget{parent}, cam(0, 0, this->width(), this->height())
{
    curPixmap = QPixmap(800, 600);;
    makeGround();
    world = World();
    setFocusPolicy(Qt::StrongFocus);
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &PaintWorld::updateFrame);
    timer->start(16);
    SEED = 78456120;
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
    //paint.fillRect(rect(), sky);
    QList allChunks = world.getCameraChunks(cam);
    //paint.setPen(QPen(grass, 1));
    for(auto item: allChunks){
        int globalX = item->chunkX() * Chunk::CHUNKSIZE - cam.left();
        int globalY = item->chunkY() * Chunk::CHUNKSIZE - cam.top();
        //QVector line = item->getGroundLine();
        /*for(int i = 0; i < line.size(); i++){
            int globalGroundY = line[i] - cam.top();
            if (line[i] >= 0 && line[i] < Chunk::CHUNKSIZE){
                paint.drawLine(globalX + i, globalY + line[i], globalX + i, globalY + Chunk::CHUNKSIZE);
            } else if (line[i] < 0){
                paint.drawLine(globalX + i, globalY, globalX + i, globalY + Chunk::CHUNKSIZE);
            }
        }*/
        paint.drawPixmap(globalX, globalY, *(item->getPixmap()));
    }
}

void PaintWorld::keyPressEvent(QKeyEvent *event)
{
    if(event->isAutoRepeat()) return;

    if (event->key() == Qt::Key_W) {moveUp = true; moveDown = false; moveY = -moveStart;}
    if (event->key() == Qt::Key_A) {moveLeft = true; moveRight = false; moveX = -moveStart;}
    if (event->key() == Qt::Key_S) {moveDown = true; moveUp = false; moveY = moveStart;}
    if (event->key() == Qt::Key_D) {moveRight = true; moveLeft = false; moveX = moveStart;}
}

void PaintWorld::keyReleaseEvent(QKeyEvent *event)
{
    if (event->isAutoRepeat()) return;

    if (event->key() == Qt::Key_W) {moveUp = false;}
    if (event->key() == Qt::Key_A) {moveLeft = false;}
    if (event->key() == Qt::Key_S) {moveDown = false;}
    if (event->key() == Qt::Key_D) {moveRight = false;}
}

void PaintWorld::updateFrame()
{
    if (!moveUp && !moveDown) moveY = 0;
    if (!moveLeft && !moveRight) moveX = 0;

    if (moveUp && abs(moveY) < 30) {moveY *= baseMoveInc;}
    if (moveDown && abs(moveY) < 30) {moveY *= baseMoveInc;}
    if (moveLeft && abs(moveX) < 30) {moveX *= baseMoveInc;}
    if (moveRight && abs(moveX) < 30) {moveX *= baseMoveInc;}

    if (moveY != 0 || moveX != 0){
        if (cam.left() + moveX < (Chunk::LEFTCHUNKBORDER * Chunk::CHUNKSIZE)){
            moveX = Chunk::LEFTCHUNKBORDER * Chunk::CHUNKSIZE - cam.left();
        } else if (cam.right() + moveX > (Chunk::RIGHTCHUNKBORDER * Chunk::CHUNKSIZE)) {
            moveX = Chunk::RIGHTCHUNKBORDER * Chunk::CHUNKSIZE - cam.right();
        }

        if (cam.top() + moveY < (Chunk::TOPCHUNKBORDER * Chunk::CHUNKSIZE)){
            moveY = Chunk::TOPCHUNKBORDER * Chunk::CHUNKSIZE - cam.top();
        } else if (cam.bottom() + moveY > (Chunk::BOTTOMCHUNKBORDER * Chunk::CHUNKSIZE)) {
            moveY = Chunk::BOTTOMCHUNKBORDER * Chunk::CHUNKSIZE - cam.bottom();
        }
        cam.move(moveX, moveY);
        //qDebug() << moveX << moveY;
        QPoint point = world.getCameraChunk(cam);
        world.CheckChunks(point.x(), point.y());
        update();
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
    /*QVector<int> line = makeGroundLine(this->width());
    QPainter paint(&curPixmap);
    paint.setPen(QPen(grass, 1));
    for(int i = 0; i < line.size(); i++){
        paint.drawLine(i, line[i], i, curPixmap.height());
    }*/
}


