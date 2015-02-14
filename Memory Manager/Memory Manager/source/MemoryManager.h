#ifndef MEMORY_MANAGER_H_
#define MEMORY_MANAGER_H_

#include "MemoryChunk.h"

class MemoryManager
{
public:
	static MemoryManager& GetInstance();
	void Initilize(size_t chunkSize);
	void Shutdown();
	void* Allocate(size_t size);
	void Free(void* memToBeFreed);

private:
	static MemoryManager s_Instance;
	MemoryChunk c_ChunkOfMemory;

	MemoryManager();
	~MemoryManager();
	const MemoryManager& operator=(const MemoryManager&);
};

#endif