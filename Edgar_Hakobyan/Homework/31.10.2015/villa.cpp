#include <iostream>
#include <math.h>
int tneri_qanak(int x,int y)
{
	if(x>y)
	{
		return (x-y-2)/2;
	}
	else
	{
		return (y-x-2)/2;
	}
}
int main()
{
	int n,m;
	do
	{
		std::cout<<"n="; std::cin>>n;
		std::cout<<"m="; std::cin>>m;
	}
	while(fabs(n-m)<4);
	std::cout<<"Armeni ev Ashoti tneri mijev ka "<<tneri_qanak(m,n)<<" tun"<<std::endl;
}