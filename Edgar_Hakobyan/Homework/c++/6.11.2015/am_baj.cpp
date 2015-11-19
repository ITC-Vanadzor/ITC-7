//erku tveri amenamec @ndhanur bajanarar@ rekursiv funkciayov
#include <iostream>
int baj(int a, int b)
{
	if (a > b)
	{
		return baj(a-b, b);
	}
	if (a < b)
	{
		return baj(a, b-a);
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
	std::cout<<"tveri amenamec @ndhanur bajanarar@: "<<baj(x, y)<<std::endl;
	return 0;
}