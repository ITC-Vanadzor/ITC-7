#include <iostream>
using namespace std;
int main()
{
	int koxm1,koxm2,koxm3,koxm4,i,n;
	int x[100], y[100];
	cout<<"greq bazmankyan ankyunneri qanak@ "; cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"x=";cin>>x[i];
		cout<<"y=";cin>>y[i];
	}

	koxm1=(x[1]-x[0])*(y[2]-y[1])-(y[1]-y[0])*(x[2]-x[1]);
	koxm2=(x[2]-x[1])*(y[3]-y[2])-(y[2]-y[1])*(x[3]-x[2]);
	koxm3=(x[3]-x[2])*(y[4]-y[3])-(y[3]-y[2])*(x[4]-x[3]);
	if(((koxm1*koxm2)>0 && (koxm2*koxm3)<0) || ((koxm1*koxm2)<0 && (koxm2*koxm3)>0))
	{
		cout<<"bazmankyun@ urucik che"<<endl;
		return 0;
	}
	else
	{
		i=4;
		while(i<n-1)
		{
			koxm4=(x[i]-x[i-1])*(y[i+1]-y[i])-(y[i]-y[i-1])*(x[i+1]-x[i]);
			koxm1=koxm2;
			koxm2=koxm3;
			koxm3=koxm4;
			if(((koxm1*koxm2)>0 && (koxm2*koxm3)<0) || ((koxm1*koxm2)<0 && (koxm2*koxm3)>0))
			{
				cout<<"bazmankyun@ urucik che"<<endl;
				return 0;
			}
			i++;
		}
	}
	cout<<"bazmankyun@ urucik e"<<endl;
	return 0;
}
