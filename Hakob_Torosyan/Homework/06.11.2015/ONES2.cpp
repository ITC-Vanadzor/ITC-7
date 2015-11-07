#include <iostream>
int divider(int a, int b)
{
	if(a>b)
	{
	a=a-b;
	return divider(a,b);
	}
	if(a<b)
	{
	b=b-a;
	return divider(a,b);
	}
	if(a==b)
	{
	return a;
	}
}
int main()
{
	int N = -5, M =-7, a = 0, b = 0;
	std::cout << "Please import N " << std::endl;
	std::cin >> N;
	std::cout << "Please import M " << std::endl;
	std::cin >> M;
	std::cout << "For divider we will have ";
	for(int i = 1; i<=N; i++)
	{
		a = a*10 + 1;	
	}
	for(int i = 1; i<=M; i++)
	{
		b = b*10 + 1;	
	}
	std::cout << divider(a,b) << std::endl;
	return 0;
}
