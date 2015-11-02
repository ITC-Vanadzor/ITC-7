#include <iostream>
int faktorial(int a)
{
	return (a==0) ?  1 : a*faktorial(a-1);
}
int main()
{
	int n,k;
	do
	{
		std::cout<<"greq taxtaki chap@";
		std::cin>>n;
		std::cout<<"greq navakneri qanak@";
		std::cin>>k;
	}while (n>=8 || k>=8);
	std::cout<<faktorial(n)*faktorial(n) / faktorial(k)<<std::endl;
}
