#include <iostream>


struct A
	{
		A & operator = (A& t);
		int* a;
		A();
		A(A* h);
	};

	A::A()
	{
		std::cout << "---create---" << std::endl;
	}

	A::A(A* h)
	{
		std::cout << "---new--- " << std::endl;
		a = h->a;
		std::cout << "---delete--- " << std::endl;
		h->a = 0;
	}

	A& A::operator = (A& t)
	{
		std::cout << "---(=) new--- " << std::endl;
		a = t.a;
		std::cout << "---(=) delete--- " << std::endl;
		t.a = 0;
	}

int main()
{
	A a(new A);
	A b(a);
	A c;
	c = b;
	{
		A x;
		x = c;
	}

	return 0;
}