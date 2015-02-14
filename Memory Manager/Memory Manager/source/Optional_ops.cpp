#include "MemoryManager.h"

inline void* operator new(size_t size)
{
	return MemoryManager::GetInstance().Allocate(size);
}

inline void* operator new[](size_t size)
{
	return MemoryManager::GetInstance().Allocate(size);
}

inline void operator delete(void* p)
{
	MemoryManager::GetInstance().Free(p);
}

inline void operator delete[](void* p)
{
	MemoryManager::GetInstance().Free(p);
}