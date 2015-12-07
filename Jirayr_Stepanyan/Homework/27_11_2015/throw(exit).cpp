#include <iostream>
#include <cstdlib>
static size_t x = 0;
struct A
{
	A();
};
A::A()
{
	++x;
	std::cout << x << std::endl;
	if(x == 2)
	{
		std::cout << "ERROR" << std::endl;
		exit(1);
	}
}

int main()
{
	A* a = new A[5];
	
	delete a;

return 0;
}
