#include <iostream>
int sr(int n,int m)
{
	return (1<<(1<<n))%m;
}
int main()
{
	int n,m;
	std::cout<<"n=";
	std::cin>>n;
	std::cout<<"m=";
	std::cin>>m;
	std::cout<<sr(n,m)<<std::endl;
	return 0;
}
