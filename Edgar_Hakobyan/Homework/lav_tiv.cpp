//tvi lavaguyn bajanarar@
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
int main()
{
	int n,i,max,lav_tiv;
	std::cout<<"n="; std::cin>>n;
	max=tvanshan_qanak(n);
	lav_tiv=n;
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
return 0;
}
