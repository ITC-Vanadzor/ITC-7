#include <iostream>
struct B
{
	B()
	{
		std::cout << "created B " << std::endl;
	}
	~B()
	{
		std::cout << "deleted B " << std::endl;
	}
};
struct Aptr
{
	B* a;
	Aptr();
	Aptr(B* h);
	Aptr& operator = (Aptr& t);
	Aptr(Aptr& n);
	~Aptr();
};
Aptr::Aptr()
	:a(0)
{
	std::cout << "default constructor " <<std::endl;
}

Aptr::Aptr(B* h)	
	:a(h)
{
	std::cout << "(argument)  constructor (int)" <<  std::endl;
	h = 0;
	std::cout << "(argument) (int) to NULL " << std::endl;
}

Aptr& Aptr::operator = (Aptr& t)
{
	if(this != &t)
	{
		delete a;
		a = t.a;
		std::cout << "(=) operator  " << std::endl;
		t.a = 0;
		std::cout << "(=) to NULL " << std::endl;
		return *this;
	}	
}

Aptr::Aptr(Aptr& n)	
	:a(n.a)
{
	std::cout << "(copy)  constructor " <<  std::endl;
	n.a = 0;
	std::cout << "(copy) constructor to NULL " << std::endl;	
}

Aptr::~Aptr()
{
	delete a;
	std::cout << "destructor " << std::endl;
}

int main()
{
	Aptr a(new B);
	Aptr b(a);
	b = b;
	Aptr c;
	Aptr z(new B);
	Aptr k;
	k = c = b;
	{
		Aptr x(k);
	}
	Aptr p(z);

   return 0;
}
