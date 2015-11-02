<<<<<<< HEAD
#include <iostream>
int astichan(int a)
{
	int p=1;
	int i=1;
	while ( p < a )
	{
		p=1<<i;
		++i;
	}
	return p;
}
int main()
{
	int n;
	std::cout<<"n=";
	std::cin>>n;
	std::cout<<astichan(n)<<std::endl;
	return 0;
}
=======
#include <iostream>
int astichan(int a)
{
	int p=1;
	int i=1;
	while ( p < a )
	{
		p=1<<i;
		++i;
	}
	return p;
}
int main()
{
	int n;
	std::cout<<"n=";
	std::cin>>n;
	std::cout<<astichan(n)<<std::endl;
	return 0;
}
>>>>>>> f679108a02b8fafc890c5db925e631ee7d79ea23
