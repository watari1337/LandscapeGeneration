#ifndef WORLD_H
#define WORLD_H

#include "chunk.h"
#include "camera.h"
#include <QHash>
#include <QPoint>
#include <QList>

class World
{

public:
    World();
    std::shared_ptr<Chunk> getChunk(int chunkX, int chunkY);
    void CheckChunks(int chunkX, int chunkY);
    QList<std::shared_ptr<Chunk>> getCameraChunks(Camera camera);
private:
    static const int UNLOADZONE = 16;
    // если от чанка в центре камеры растояние до чанка больше 16 чанков то выгружаем. сейчас удаляем
    QHash<QPoint, std::shared_ptr<Chunk>> m_loadChunks;
};

#endif // WORLD_H
