# include <iostream>
struct A
{
        static size_t x;
	A();
	A(const A& k);
	~A();
};

A::A()
{            
	std::cout << ++x << std::endl;
}

A::A(const A& k)
{
	std::cout << ++x << std::endl;
}

A::~A()
{
	std::cout << --x << std::endl;
}

size_t A::x = 0;

int main()
{	
	A a;
	A b;
	A c(b);

   return 0;
}
