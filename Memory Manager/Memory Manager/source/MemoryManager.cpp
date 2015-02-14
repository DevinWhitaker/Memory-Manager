#include "MemoryManager.h"

MemoryManager MemoryManager::s_Instance;

MemoryManager::MemoryManager()
{
}

MemoryManager::~MemoryManager()
{
}

const MemoryManager& MemoryManager::operator=(const MemoryManager&)
{
	return *this;
}

MemoryManager& MemoryManager::GetInstance()
{
	return MemoryManager::s_Instance;
}

void MemoryManager::Initilize(size_t chunkSize)
{
	c_ChunkOfMemory.Reserve(chunkSize);
}

void MemoryManager::Shutdown()
{
	c_ChunkOfMemory.CleanUp();
}

void* MemoryManager::Allocate(size_t size)
{
	return c_ChunkOfMemory.Allocate(size);
}

void MemoryManager::Free(void* memToBeFreed)
{
	c_ChunkOfMemory.Free(memToBeFreed);
}