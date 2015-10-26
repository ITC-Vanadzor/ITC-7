//tvi faktoryali verji 0-neri qanak@
#include <iostream>
int main()
{
	int n,dupl_n,mnacord,amboxj_mas,qanak=0;
	int x[100];
	std::cout<<"n= "; std::cin>>n;
	mnacord=n%5;
	amboxj_mas=n/5;
	dupl_n=n;
	for(int i=0;i<amboxj_mas;i++)
	{	
		x[i]=dupl_n;
		dupl_n-=5;
		++qanak;
	}
	int k=x[amboxj_mas-1]*x[amboxj_mas-1]; 
	if(k<=n)
	{
		while(k<=x[0])
		{
			k+=25;
			++qanak;
		}
	}
	std::cout<<n<<"-i faktorial@ avartvum e "<<qanak<<" zroyov "<<std::endl;
	return 0;
}
		
