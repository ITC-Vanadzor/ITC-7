#include <iostream>
unsigned int superrow(unsigned int n,unsigned int m)
{
	unsigned int x=1;
	for(int i=0; i<n; ++i)
	{
		x=(x<<1) % m;
	}
	return x;
}
int main()
{
	unsigned int n,m;
	std::cout<<"n=";
	std::cin>>n;
	std::cout<<"m=";
	std::cin>>m;
	std::cout<<superrow(1<<n,m)<<std::endl;
	return 0;
}
