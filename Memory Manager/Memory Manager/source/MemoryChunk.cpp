#include "MemoryChunk.h"
#include <stdlib.h>

MemoryChunk::MemoryChunk()
{
}

MemoryChunk::~MemoryChunk()
{
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
}

void MemoryChunk::CleanUp()
{
}