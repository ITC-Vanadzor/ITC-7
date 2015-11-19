#include <iostream>
#include <math.h>
int tneri_qanak(int x,int y)
{
	return (fabs(x-y)-2)/2;
}
int main()
{
	int n,m;
	std::cout<<"n="; std::cin>>n;
	std::cout<<"m="; std::cin>>m;
	std::cout<<"Armeni ev Ashoti tneri mijev ka "<<tneri_qanak(m,n)<<" tun"<<std::endl;
	return 0;
}
