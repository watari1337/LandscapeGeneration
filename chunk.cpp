#include "chunk.h"
#include "global.h"

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
        int globalHeight = (500 + 300 * noisePerlin(globalX/9));
        int localY = globalHeight - (m_chunkY * CHUNKSIZE);
        m_groundLine[i] = localY;
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

float Chunk::getNoiseAngle(int x)
{
    uint32_t X = static_cast<uint32_t>(x);
    uint32_t h = X * 374761393 + SEED * 73856093;
    h = (h ^ (h >> 13)) * 1274126177;
    return (h & 0xFFFFFF) / float(0xFFFFFF) * 2.0f - 1.0f; // значение 0..1
}

float fade(float t){
    return  t*t*t * (10 + t*(-15 + 6*t));
}

float interpol(float start, float end, float pos){
    return start + fade(pos)*(end-start);
}

float Chunk::noisePerlin(float x)
{
    int vecX = std::floor(x / VECTORCELLSIZE);
    double dx0 = (x - (vecX * VECTORCELLSIZE)) / VECTORCELLSIZE;
    float v0 = getNoiseAngle(vecX);
    float v1 = getNoiseAngle(vecX+1);
    float d0 = v0 * dx0;
    float d1 = v1 * (dx0 - 1.0f);
    return (interpol(d0, d1, dx0));
}
