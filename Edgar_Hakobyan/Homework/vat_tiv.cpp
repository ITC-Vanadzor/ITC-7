#include <iostream>
using namespace std;
int tvanshan_qanak(int i)
{
	int a=0;
	while(i>0)
	{
		a+=i%10;
		i=i/10;
	}
return a;
}
	
int main()
{
	int n,i,min,vat_tiv;
	cout<<"n="; cin>>n;
	min=tvanshan_qanak(n);
	vat_tiv=n;
	for(i=2;i<=n/2;i++)
	{
		if((n%i)==0)
		{
		if(tvanshan_qanak(i)<min)
		{
			min=tvanshan_qanak(i);
			vat_tiv=i;
		}
		if((tvanshan_qanak(i)==min)&&(vat_tiv<i))
			vat_tiv=i;
		}
	}
	cout<<"tvi bajanararneric vataguyn@ klini` "<<vat_tiv<<endl;
	return 0;
}
				
