#include "chunk.h"

Chunk::Chunk(int chunkX, int chunkY)
{
    m_chunkX = chunkX;
    m_chunkY = chunkY;
    generate();
}

void Chunk::generate()
{
    //ground line
    for (int i = 0; i < m_groundLine.size(); i++) {
        int globalX = m_chunkX * CHUNKSIZE + i;
        m_groundLine[i] = (50 + 50 * sin(globalX / 130.0));
    }
}

int Chunk::chunkX() const
{
    return m_chunkX;
}

int Chunk::chunkY() const
{
    return m_chunkY;
}

QVector<int> Chunk::getGroundLine() const
{
    return m_groundLine;
}
