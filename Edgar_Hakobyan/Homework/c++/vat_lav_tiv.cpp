//tvi vataguyn ev lavaguyn bajanararner@
#include <iostream>
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
void lav_baj(int n)
{
	int i,max;
	max=tvanshan_qanak(n);
	int lav_tiv=n;
	for(i=1;i<=n/2;i++)
	{
		if((n%i)==0)
		{
		if(tvanshan_qanak(i)>max)
		{
			max=tvanshan_qanak(i);
			lav_tiv=i;
		}
		if((tvanshan_qanak(i)==max)&&(lav_tiv<i))
			lav_tiv=i;
		}
	}
	std::cout<<"tvi bajanararneric lavaguyn@ klini` "<<lav_tiv<<std::endl;
}
void vat_baj(int n)
{
	int i,min;
	min=tvanshan_qanak(n);
	int vat_tiv=n;
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
	std::cout<<"tvi bajanararneric vataguyn@ klini` "<<vat_tiv<<std::endl;
}
int main()
{
	int n,x;
	std::cout<<"n= "; std::cin>>n;
	std::cout<<"sexmeq 1`vataguyn bajanarar@ gtnelu hamar ev 2`lavaguyn@ gtnelu hamar"<<std::endl;
	std::cin>>x;
	if(x==1)
	vat_baj(n);
	else lav_baj(n);
return 0;
}
	
