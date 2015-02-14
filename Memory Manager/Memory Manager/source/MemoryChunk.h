#ifndef MEMORY_CHUNK_H_
#define MEMORY_CHUNK_H_

class MemoryChunk
{
public:
	MemoryChunk();
	~MemoryChunk();
	bool IsContained(void* p);
	void* Allocate(size_t size);
	void Free(void* p);
	void Reserve(size_t size);
	void CleanUp();
private:
	char* pMem;
};

#endif