#include <iostream>

struct A
	{
		int* count;
		int* a;
		A();
		A(int* h);
		A(const A& h);
		~A();
	};

	A::~A()
	{
		if (*count == 1)
		{
			std::cout<<"---delete---" << std::endl;
			delete a;
		}
		--*count;
	}

	A::A(const A & h)
	{
		a = h.a;
		count = h.count;
		++*count;
	}

	A::A(int* h)
	{
		std::cout<<"---new---" << std::endl;
		count = new int;
		*count = 0;
		a = h;
	}

	A::A(){}

int main()
{
	int* i = new int;
	int* j = new int;
	A a(i);
	A b(a);
	A c(j);
	{
		A x(c);
	}
return 0;
}
