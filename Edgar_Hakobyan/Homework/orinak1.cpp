#include <iostream>
void naxordhajord(int x, int& prew, int& next)
{
	prew=x-1;
	next=x+1;
}
int main()
{
	int x=0;
	int y=100;
	int z=0;
	std::cout<<x<<" "<<y<<" "<<z<<std::endl;
	naxordhajord(y, x, z);
	std::cout<<x<<" "<<y<<" "<<z<<std::endl;
	return 0;
}
