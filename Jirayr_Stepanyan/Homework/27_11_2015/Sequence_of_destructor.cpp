#include <iostream>
struct A
{
	static size_t x;
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

size_t A::x = 0;

int main()
{
	A* a = new A[5];
	
	delete a;

return 0;
}
