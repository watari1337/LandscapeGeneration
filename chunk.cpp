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
    int globalYBottom = (m_chunkY+1) * CHUNKSIZE;
    int globalX = m_chunkX * CHUNKSIZE;
    for (int i = 0; i < CHUNKSIZE; i++) {
        int globalLandY = (LANDSTART + LANDDEVIATION * noisePerlin(globalX/9));
        int localY = globalLandY - (m_chunkY * CHUNKSIZE);
        m_groundLine[i] = globalLandY;
        //draw ground line
        if (localY >= 0 && localY < Chunk::CHUNKSIZE){
            paint.fillRect(i, localY, 1, Chunk::CHUNKSIZE - localY, m_grass);
        } else if (localY < 0 && globalYBottom <= STONEPOS){
            paint.fillRect(i, 0, 1, Chunk::CHUNKSIZE - localY, m_grass);
        } else if (globalYBottom > STONEPOS){
            paint.fillRect(0, 0, CHUNKSIZE, CHUNKSIZE, m_stone);
        }
        globalX++;
    }
    //cave
    QPen stPen;
    stPen.setWidth(0);
    stPen.setColor(m_caveAir);
    paint.setPen(stPen);
    for (int i = 0; i < CHUNKSIZE; ++i) {
        int globalX = m_chunkX * CHUNKSIZE + i;
        for (int j = 0; j < CHUNKSIZE; ++j) {
            int globalY = m_chunkY * CHUNKSIZE + j;
            if (STONEPOS < globalY){
                float z = noisePerlin2D(globalX, globalY);
                if (z > 0.1f){
                    paint.drawPoint(i, j);
                }
            }
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

float fade(float t){
    return  t*t*t * (10 + t*(-15 + 6*t));
}

float interpol(float start, float end, float pos){
    return start + fade(pos)*(end-start);
}

float Chunk::getNoiseAngle(int x)
{
    uint32_t X = static_cast<uint32_t>(x);
    uint32_t h = X * 374761393u + SEED * 73856093u;
    h = (h ^ (h >> 13)) * 1274126177u;
    return (h & 0xFFFFFF) / float(0xFFFFFF) * 2.0f - 1.0f; // значение -1..1
}

float Chunk::getHashAngle(int x, int y)
{
    uint32_t X = static_cast<uint32_t>(x);
    uint32_t Y = static_cast<uint32_t>(y);
    uint32_t h = X * 516845816u + Y * 879588622u + SEED * 768459135u;
    h = (h ^ (h >> 13)) * 7458948215u;
    return (h & 0xFFFFFF) / float(0xFFFFFF); // значение 0..1
}

QVector2D Chunk::getPerlinVector2D(int x, int y)
{
    float angle = getHashAngle(x, y);
    angle *= 2.0f * M_PI;
    return QVector2D(cos(angle), sin(angle));
}

float Chunk::noisePerlin2D(int globalX, int globalY)
{
    int vectorX = std::floor(float(globalX) / VECTORCELLSIZE2D);
    int vectorY = std::floor(float(globalY) / VECTORCELLSIZE2D);

    float dx = float(globalX - vectorX * VECTORCELLSIZE2D) / VECTORCELLSIZE2D;
    float dy = float(globalY - vectorY * VECTORCELLSIZE2D) / VECTORCELLSIZE2D;

    QVector2D v00 = getPerlinVector2D(vectorX, vectorY);
    QVector2D v01 = getPerlinVector2D(vectorX, vectorY+1);
    QVector2D v10 = getPerlinVector2D(vectorX+1, vectorY);
    QVector2D v11 = getPerlinVector2D(vectorX+1, vectorY+1);

    float dot00 = QVector2D::dotProduct(v00, QVector2D(dx, dy));
    float dot01 = QVector2D::dotProduct(v01, QVector2D(dx, dy-1));
    float dot10 = QVector2D::dotProduct(v10, QVector2D(dx-1, dy));
    float dot11 = QVector2D::dotProduct(v11, QVector2D(dx-1, dy-1));

    float fadeX = fade(dx);
    float fadeY = fade(dy);

    float pol1 = interpol(dot00, dot10, fadeX);
    float pol2 = interpol(dot01, dot11, fadeX);
    float pol3 = interpol(pol1, pol2, fadeY);

    return pol3;
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

