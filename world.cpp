#include "world.h"

World::World() {}

std::shared_ptr<Chunk> World::getChunk(int chunkX, int chunkY)
{
    QPoint pos = QPoint(chunkX, chunkY);
    if (m_loadChunks.contains(pos)) return m_loadChunks.value(pos);
    Chunk newChunk = Chunk(chunkX, chunkY);
    m_loadChunks.insert(pos, std::make_shared<Chunk>(newChunk));
    return m_loadChunks[pos];
}

void World::CheckChunks(int chunkX, int chunkY)
{
    for (auto elem = m_loadChunks.begin(); elem != m_loadChunks.end();){
        if (abs(elem.value()->chunkX() - chunkX) > UNLOADZONE ||
            abs(elem.value()->chunkY() - chunkY) > UNLOADZONE) {
            elem = m_loadChunks.erase(elem);
        }
        else elem++;
    }
}

QList<std::shared_ptr<Chunk> > World::getCameraChunks(Camera camera)
{
    QList<std::shared_ptr<Chunk>> ans;

    int firstChunkX = std::floor(camera.left() / Chunk::CHUNKSIZE);
    int firstChunkY = std::floor(camera.top() / Chunk::CHUNKSIZE);
    int lastChunkX = std::floor(camera.right() / Chunk::CHUNKSIZE);
    int lastChunkY = std::floor(camera.bottom() / Chunk::CHUNKSIZE);

    for (int i = firstChunkY; i <= lastChunkY; ++i) {
        for (int j = firstChunkX; j <= lastChunkX; ++j) {
            ans.append(getChunk(j, i));
        }
    }
    return ans;
}


