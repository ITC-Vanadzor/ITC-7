#include <iostream>
bool koxm(int x[],int y[],int n)
{
	int koxm1,koxm2,koxm3;
	for(int i=0;i<n-4;i++)
	{	
		koxm1=(x[i+1]-x[i])*(y[i+2]-y[i+1])-(y[i+1]-y[i])*(x[i+2]-x[i+1]);
		koxm2=(x[i+2]-x[i+1])*(y[i+3]-y[i+2])-(y[i+2]-y[i+1])*(x[i+3]-x[i+2]);
		koxm3=(x[i+3]-x[i+2])*(y[i+4]-y[i+3])-(y[i+3]-y[i+2])*(x[i+4]-x[i+3]);
	}
	return ((koxm1*koxm2)>0 && (koxm2*koxm3)>0);
}
int main()
{
	int i,n;
	int x[100], y[100];
	std::cout<<"greq bazmankyan ankyunneri qanak@ "; std::cin>>n;
	for(i=0;i<n;i++)
	{
		std::cout<<"x="; std::cin>>x[i];
		std::cout<<"y="; std::cin>>y[i];
	}
if(koxm(x,y,n))
{
	i=0;
	std::cout<<"trohac erankyunneri koordinatner@ klinen`"<<std::endl;
	while (i<n-2)
	{
		std::cout<<x[0]<<" "<<y[0]<<'\t'<<x[i+1]<<" "<<y[i+1]<<'\t'<<x[i+2]<<" "<<y[i+2]<<std::endl;
		i++;
	}
}
return 0;
}























