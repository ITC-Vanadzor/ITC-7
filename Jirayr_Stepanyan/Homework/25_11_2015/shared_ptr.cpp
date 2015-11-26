#include <iostream>
struct Sptr
{
	int* count;
	int* x;
	Sptr();
	Sptr(int* y);
	Sptr(Sptr& k);
	Sptr& operator = (const Sptr& h);
	~Sptr();
};
Sptr::Sptr()
{
	std::cout << "datark konstruktor 	";
	std::cout << "count = " << *count << std::endl;
}
Sptr::Sptr(int* y)
{
	count = new int(1);
	x = y;
	std::cout << "kostruktor	";
	std::cout << "count = " << *count << std::endl;
}
Sptr::Sptr(Sptr& k)
{
	x = k.x;
	count = k.count;
	++(*count);
	std::cout << "copy 	";
	std::cout << "count = " << *count << std::endl;
}
Sptr& Sptr:: operator = (const Sptr& h)
{
	x = h.x;
	count = h.count;
	++(*count);
	std::cout << "operator = 	";
	std::cout << "count = " << *count << std::endl;
}
Sptr::~Sptr()
{
	if(--(*count) == 0)
	{
		std::cout << "jnjeci  DESTRUKTOR	";
		std::cout << "count = " << *count << std::endl;
		delete x;
		delete count;
	}
	else
	{
		std::cout << "pakasacreci count  DESTRUKTOR	" ;
		std::cout << "count = " << *count << std::endl;
	}
	
}
int main()
{
	Sptr a(new int);
	Sptr b(a);
	Sptr c(b);
	Sptr n;
	n = c;

   return 0;
}
