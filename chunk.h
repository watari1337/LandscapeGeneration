#ifndef CHUNK_H
#define CHUNK_H

#include <QVector>
#include <QHash>

class Chunk
{
public:
    Chunk(int chunkX, int chunkY);

    void generate();
    int chunkX() const;
    int chunkY() const;
    QVector<int> getGroundLine() const;

    static const int CHUNKSIZE = 128; //width and heigh of chunk
    static const int VECTORCELLSIZE = 50; //size of vector matrix
    static const int VECTORFORGET = 100; //If we are farther than this num of vector forgot it
private:

    int m_chunkX, m_chunkY;
    QVector<int> m_groundLine = QVector<int>(CHUNKSIZE);
    float getNoiseAngle(int x);
    float noisePerlin(float x);
    void noiseSimplex();
};

#endif // CHUNK_H
