#include <iostream>

int main()
{   
	int int_value = 1<<(sizeof(int)*8-1);
	std::cout << "Max value = " <<  ~int_value << endl;
	std::cout << "Min value = " << int_value << endl;

	unsigned int unsigned_int_value = 1<<(sizeof(unsigned int)*8 -1);
	std::cout <<unsigned_int_value << endl;
	return 0;

}
