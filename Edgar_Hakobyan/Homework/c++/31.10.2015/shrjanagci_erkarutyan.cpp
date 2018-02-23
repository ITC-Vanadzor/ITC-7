#include <iostream>
#include <math.h>
double srj_erkarutyan(double x1,double y1,double x2,double y2,double x3,double y3)
{
	double x,y,r;
	x=(x1+x2)/2;
	y=(y1+y2)/2;
	r=(2*sqrt( (x-x3)*(x-x3) + (y-y3)*(y-y3) ) )/3;
	return 2*M_PI*r;
}
int main()
{
	double x1,y1,x2,y2,x3,y3;
	std::cout<<"x1="; std::cin>>x1;
	std::cout<<"y1="; std::cin>>y1;
	std::cout<<"x2="; std::cin>>x2;
	std::cout<<"y2="; std::cin>>y2;
	std::cout<<"x3="; std::cin>>x3;
	std::cout<<"y3="; std::cin>>y3;
	std::cout<<"shrjanagci erkarutyun@` "<<srj_erkarutyan(x1,y1,x2,y2,x3,y3)<<std::endl;
	return 0;
}
