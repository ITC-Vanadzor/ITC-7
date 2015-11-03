#include <iostream>
void poxel(int* x, int* y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
int main()
{
	int a,b;
	std::cout<<"greq eku tiv:"<<std::endl;
	std::cin>>a>>b;
	std::cout<<a<<" "<<b<<std::endl;
	poxel(&a,&b);
	std::cout<<a<<" "<<b<<std::endl;
	return 0;
}
