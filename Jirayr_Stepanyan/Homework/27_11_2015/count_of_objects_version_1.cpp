# include <iostream>
static size_t x;
struct A
{
	int y;
	A();
	A(int h);
	A(const A& k);
};

A::A()
	:y(0)
{
	++x;
}
A::A(int h)
	:y(h)
{
	++x;
}
A::A(const A& k)
	:y(k.y)
{
	++x;
}
int main()
{
	A a;
	A b(5);
	A c(b);
	A n;
	n = c;
	std::cout << x << std::endl;

return 0;
}
