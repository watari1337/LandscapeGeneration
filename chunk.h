#ifndef CHUNK_H
#define CHUNK_H

#include <QVector>
#include <QHash>
#include <QPixmap>
#include <QPainter>
#include <QPen>
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
    static const int VECTORCELLSIZE = 50; //size of vector line
    static const int VECTORCELLSIZE2D = 200; //size of vector matrix
    static const int VECTORFORGET = 100; //If we are farther than this num of vector forgot it
    static const int TOPCHUNKBORDER = -40; //через сколько чанков top будет граница
    static const int BOTTOMCHUNKBORDER = 40; //через сколько чанков bottom будет граница
    static const int LEFTCHUNKBORDER = -150; //через сколько чанков left будет граница
    static const int RIGHTCHUNKBORDER = 150; //через сколько чанков right будет граница
    static const int WIDTHBORDER = 10; //через сколько чанков right будет граница
    static const int LANDSTART = 500; //через сколько start medium line of land
    static const int LANDDEVIATION = 300; //maximum deviation of land line
    static const int STONESTART = 400; //через сколько after medium land line start line of stone
    static const int STONEPOS = LANDSTART + STONESTART; //через сколько after medium land line start line of stone

private:

    QColor m_grass = QColor(50, 201, 65), m_sky = QColor(111, 183, 209), m_border = QColor(123, 143, 194),
        m_stone = QColor(112, 125, 117), m_caveAir = QColor(79, 115, 100);

    int m_chunkX, m_chunkY;
    QPixmap m_pixmap = QPixmap(CHUNKSIZE, CHUNKSIZE);
    QVector<int> m_groundLine = QVector<int>(CHUNKSIZE);
    float getNoiseAngle(int x);
    float noisePerlin(float x);
    float getHashAngle(int x, int y);
    QVector2D getPerlinVector2D(int x, int y);
    float noisePerlin2D(int globalX, int globalY); //значение по z от 0 до 1
};

#endif // CHUNK_H
