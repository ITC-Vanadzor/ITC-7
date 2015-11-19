//erku tveri amenapoqr @ndhanur bazmapatik@ rekursiv funkciayov
#include <iostream>
int bazm1(int a, int b, int aa)
{
	if (a % b == 0)
	{
		return a;
	}
	else 
	{
		return bazm1(a + aa, b, aa);
	}
}
int bazm(int a, int b)
{
	if (a > b)
	{
		return bazm1(a, b, a);
	}
	if (a < b) 
	{
		return bazm1(b, a, b);
	}
	else
	{
		return a;
	}
}
int main()
{
	int x;
	int y;
	std::cout<<"x= ";
	std::cin>>x;
	std::cout<<"y= ";
	std::cin>>y;
	std::cout<<"tveri amenapoqr @ndhanur bazmapatik@: "<<bazm(x, y)<<std::endl;
}