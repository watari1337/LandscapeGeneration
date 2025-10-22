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
    QPainter paint(&m_pixmap);
    //draw sky
    paint.setPen(Qt::NoPen);
    paint.fillRect(0, 0, CHUNKSIZE, CHUNKSIZE, m_sky);
    //ground line
    for (int i = 0; i < m_groundLine.size(); i++) {
        int globalX = m_chunkX * CHUNKSIZE + i;
        int globalY = (500 + 300 * noisePerlin(globalX/9));
        int localY = globalY - (m_chunkY * CHUNKSIZE);
        m_groundLine[i] = localY;
        //draw ground line
        if (localY >= 0 && localY < Chunk::CHUNKSIZE){
            paint.fillRect(i, localY, 1, Chunk::CHUNKSIZE - localY, m_grass);
        } else if (localY < 0){
            paint.fillRect(i, 0, 1, Chunk::CHUNKSIZE - localY, m_grass);
        }
    }
    //draw border
    if (m_chunkY <= TOPCHUNKBORDER) {
        paint.fillRect(0, 0, CHUNKSIZE, WIDTHBORDER, m_border);
    }
    if (m_chunkY+1 >= BOTTOMCHUNKBORDER) {
        paint.fillRect(0, CHUNKSIZE-WIDTHBORDER, CHUNKSIZE, WIDTHBORDER, m_border);
    }
    if (m_chunkX <= LEFTCHUNKBORDER) {
        paint.fillRect(0, 0, WIDTHBORDER, CHUNKSIZE, m_border);
    }
    if (m_chunkX+1 >= RIGHTCHUNKBORDER) {
        paint.fillRect(CHUNKSIZE-WIDTHBORDER, 0, WIDTHBORDER, CHUNKSIZE, m_border);
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

QPixmap *Chunk::getPixmap()
{
    return &m_pixmap;
}

QVector<int> Chunk::getGroundLine() const
{
    return m_groundLine;
}

float Chunk::getNoiseAngle(int x, int y)
{
    uint32_t X = static_cast<uint32_t>(x);
    uint32_t Y = static_cast<uint32_t>(y);
    uint32_t h = X * 374761393 + Y * 845143023 + SEED * 73856093;
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
