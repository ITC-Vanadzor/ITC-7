#include <iostream>
void pordz(int &*a)
{
	std::cout << a << std::endl;
}
int main()
{
	int a = 5, b;
	int *p = &a;
	pordz(p);

   return 0;
}
