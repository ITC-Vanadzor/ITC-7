//cucich tipi popoxakanneri haytararum
//hascei popoxutyun
#include <iostream>
int main()
{
	int x=5;
	int* p;
	p=&x;
	std::cout<<p<<std::endl;
	std::cout<<x<<std::endl;
	++p;
	std::cout<<p<<std::endl;
	std::cout<<x<<std::endl;
	return 0;
}
