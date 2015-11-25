#include <iostream>
struct Aptr
{
	int* a;
	Aptr();
	Aptr(Aptr* h);
	Aptr& operator = (Aptr& t);
	Aptr(Aptr& n);
};
Aptr::Aptr()
{
	std::cout << "sarqeci" <<std::endl;
}
Aptr::Aptr(Aptr* h)
	:a = h->a;
	,h->a = 0;
{
	std::cout << "veragreci " <<  std::endl;
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
	:a = n.a;
	:n.a = 0;
{
	std::cout << "(copy) veragreci " <<  std::endl;
	std::cout << "(copy) jnjeci " << std::endl;	
}
int main()
{
	Aptr a(new Aptr);
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
