#ifndef CHUNK_H
#define CHUNK_H

#include <QVector>

class Chunk
{
public:
    Chunk(int chunkX, int chunkY);

    void generate();
    int chunkX() const;
    int chunkY() const;
    QVector<int> getGroundLine() const;

    static const int CHUNKSIZE = 128;
private:

    int m_chunkX, m_chunkY;
    QVector<int> m_groundLine = QVector<int>(CHUNKSIZE);
};

#endif // CHUNK_H
