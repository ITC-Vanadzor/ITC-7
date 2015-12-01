#include <iostream>
struct A
{
	static size_t x;
	A();
};

A::A()
{
	++x;
	std::cout << x << std::endl;
	if(x == 2)
	{
		std::cout << "ERROR" << std::endl;
		throw(1);
	}
}

size_t A::x = 0;

int main()
{
	A* a = new A[5];
	
	delete a;

return 0;
}
