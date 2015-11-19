#include <iostream>
bool zuyg_kent(int a,int b)
{
	return (a%2==0 && b%2==0) ? true : false;
}
int main ()
{
	int a,b;
	std::cout<<"a=";
	std::cin>>a;
	std::cout<<"b=";
	std::cin>>b;
	if(zuyg_kent(a,b))
	{
		std::cout<<"2"<<std::endl;
	}
	else
	{
		std::cout<<"1"<<std::endl;
	}
	return 0;
}
