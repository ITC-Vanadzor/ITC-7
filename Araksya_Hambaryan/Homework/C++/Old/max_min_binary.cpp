#include <iostream>
int main ()
{
	int min_int=(1<<(sizeof(int)*8-1));
	int max_int=min_int-1;
	unsigned int min_uint=0;
	unsigned int max_uint=~(min_uint);
	
	std::cout << "max_int= " <<max_int << std::endl;
	std::cout << "min_int= " <<min_int << std::endl;
	std::cout << "min_uint= " <<min_uint << std::endl;
	std::cout << "max_uint= " <<max_uint << std::endl;
	return 0;
}
