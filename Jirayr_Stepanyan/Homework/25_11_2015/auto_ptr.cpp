#include <iostream>
struct Aptr
{
	int* a;
	Aptr();
	Aptr(int* h);
	Aptr& operator = (Aptr& t);
	Aptr(Aptr& n);
};
Aptr::Aptr()
{
	std::cout << "sarqeci" <<std::endl;
}
Aptr::Aptr(int* h)	
{
	a = h;
	std::cout << "veragreci " <<  std::endl;
	h = 0;
	std::cout << "jnjeci " << std::endl;	
}
Aptr& Aptr::operator = (Aptr& t)
{
	std::cout << "(=) veragreci " << std::endl;
	a = t.a;
	std::cout << "(=) jnjeci " << std::endl;
	t.a = 0;
	
}
Aptr::Aptr(Aptr& n)	
{
	a = n.a;
	std::cout << "(copy) veragreci " <<  std::endl;
	n.a = 0;	
	std::cout << "(copy) jnjeci " << std::endl;	
}
int main()
{
	Aptr a(new int);
	Aptr b(a);
	Aptr c;
	Aptr k;
	k = c = b;
	{
		Aptr x(k);
		delete x.a;
	}
	

   return 0;
}
