#include "MemoryChunk.h"
#include <stdlib.h>

MemoryChunk::MemoryChunk() : pMem(nullptr)
{
}

MemoryChunk::~MemoryChunk()
{
	//free memory on destruction in case CleanUp() inst called
	free(pMem);
}

bool MemoryChunk::IsContained(void* p)
{
	return false;
}

void* MemoryChunk::Allocate(size_t size)
{
	return nullptr;
}

void MemoryChunk::Free(void* p)
{
}

void MemoryChunk::Reserve(size_t size)
{
	//call CleanUp just in case there is already a memory buffer
	CleanUp();

	pMem = malloc(size);
}

void MemoryChunk::CleanUp()
{
	free(pMem);
	pMem = nullptr;
}