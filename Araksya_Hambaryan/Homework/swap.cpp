#include <iostream>
// swap funkcia 
int main()
{
	int a;
	int b;
	std::cout<<"a= ";
	std::cin >> a;
	std::cout<<"b= ";
	std::cin>>b;

	a=(a^b);
	b=(b^a);
	a=(a^b);
	
	std::cout <<"a= "<<a<<'\n'<<"b= "<<b<<'\n';
	return 0;
}


