#include "MemoryManager.h"
#include <iostream>

class TestClass
{
public:
	TestClass():i(0),f(0.0f){std::cout << "don't need placement new" << std::endl;};
	~TestClass(){std::cout << "let's see" << std::endl;};
private:
	int i;
	float f;
};

int main(void)
{
	MemoryManager::GetInstance().Initilize(1024);

	TestClass* i = new TestClass();

	TestClass* j = new TestClass[5];

	delete i;
	delete[] j;

	return 0;
}
