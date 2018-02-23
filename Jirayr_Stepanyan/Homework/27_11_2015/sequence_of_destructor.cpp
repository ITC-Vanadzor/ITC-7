#include <iostream>
static size_t x = 0;
struct A
{
	A();
	~A();
};

A::A()
{
	++x;
	std::cout << "x = " << x << std::endl;
}

A::~A()
{
	std::cout << "x = " << x << std::endl;
	--x;
}

int main()
{
	A* a = new A[5];
	
	delete a;

return 0;
}
