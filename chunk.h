#ifndef CHUNK_H
#define CHUNK_H

#include <QVector>
#include <QHash>
#include <QPixmap>
#include <QPainter>
#include <QColor>
#include <QVector2D>

class Chunk
{
public:
    Chunk(int chunkX, int chunkY);

    void generate();
    int chunkX() const;
    int chunkY() const;
    QPixmap *getPixmap();
    QVector<int> getGroundLine() const;

    static const int CHUNKSIZE = 128; //width and heigh of chunk
    static const int VECTORCELLSIZE = 50; //size of vector matrix
    static const int VECTORFORGET = 100; //If we are farther than this num of vector forgot it
    static const int TOPCHUNKBORDER = -40; //через сколько чанков top будет граница
    static const int BOTTOMCHUNKBORDER = 40; //через сколько чанков bottom будет граница
    static const int LEFTCHUNKBORDER = -40; //через сколько чанков left будет граница
    static const int RIGHTCHUNKBORDER = 40; //через сколько чанков right будет граница
    static const int WIDTHBORDER = 10; //через сколько чанков right будет граница

private:

    QColor m_grass = QColor(50, 201, 65), m_sky = QColor(111, 183, 209), m_border = QColor(123, 143, 194);

    int m_chunkX, m_chunkY;
    QPixmap m_pixmap = QPixmap(CHUNKSIZE, CHUNKSIZE);
    QVector<int> m_groundLine = QVector<int>(CHUNKSIZE);
    float getNoiseAngle(int x, int y = 0);
    float noisePerlin(float x);
    void noiseSimplex();
};

#endif // CHUNK_H
