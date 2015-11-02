#include <iostream>
int krknaki_faktorial(int a)
{
	if (a % 2 == 0)
	{
		return (a > 2) ?  a* krknaki_faktorial(a-2) : 2;
	}
	else
	{
		return (a > 1) ?  a* krknaki_faktorial(a-2) : 1;
	}
}
int main()
{
	int n;
	do
	{
		std::cout<<"n=";
		std::cin>>n;
	}
	while(n<=0);
	std::cout<<"krknaki faktorial@ klini` "<<krknaki_faktorial(n)<<std::endl;
	return 0;
}
