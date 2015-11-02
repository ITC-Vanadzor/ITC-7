#include <iostream>
int maxmin(int x[],int n)
{
	int min=x[0];
	int max=x[1];
	for(int i=0; i<n; ++i)
	{
		if(i%2==0)
		{
			if(x[i]<min)
			{
				min=x[i];
			}
		}
		else
		{
			if(x[i]>max)
			{
				max=x[i];
			}
		}
	}
	return max+min;
}
int main()
{
	int n;
	std::cout<<"greq tveri qanak@ ";
	std::cin>>n;
	int x[n];
	for(int i=0; i<n; ++i)
	{
		std::cin>>x[i];
	}
	std::cout<<"mecaguyni ev poqraguyni gumar@ klini "<<maxmin(x,n)<<std::endl;
	return 0;
}
