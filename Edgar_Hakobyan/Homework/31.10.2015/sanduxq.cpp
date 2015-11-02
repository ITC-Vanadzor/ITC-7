#include <iostream>
int qayl(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		if(n==2)
		{
			return 2;
		}
		else
		{
			return qayl(n-2) + qayl(n-1);
		}
	}
}
int main()
{
	int n;
	do
	{
		std::cout<<"greq astichanneri tiv@ ";
		std::cin>>n;
	}
	while(n<=0);
	std::cout<<"sanduxqn ancnelu tarberaknern en` "<<qayl(n)<<std::endl;
	return 0;
}
