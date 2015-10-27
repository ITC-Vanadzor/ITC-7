//tvi faktoryali verji 0-neri qanak@
#include <iostream>
int main()
{
	int n=0,qanak=0;
	std::cout<<"n= "; std::cin>>n;
	qanak=n/5;
	if(n/25>0)
	{
		qanak+=n/25;
	}
	std::cout<<n<<"-i faktorial@ avartvum e "<<qanak<<" zroyov "<<std::endl;
	return 0;
}
		
