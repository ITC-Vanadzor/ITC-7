#include <limits.h>
#include <iostream>

int main()
{
	std::cout << "Maximum value a 'int'" << " = " << INT_MAX << std::endl;
	std::cout << "Minimum value a 'int'" << " = " << INT_MIN << std::endl;
	std::cout << "Maximum value a 'unsinged int'" << " = " << UINT_MAX << std::endl;
	std::cout << "Minimum value a 'unsinged int'" << " = " << 0 << std::endl;
	std::cout << "Maximum value a 'short int'" << " = " << SHRT_MAX << std::endl;
	std::cout << "Minimum value a 'short int'" << " = " << SHRT_MIN << std::endl;
	std::cout << "Maximum value a 'unsinged short int'" << " = " << USHRT_MAX << std::endl;
	std::cout << "Minimum value a 'unsinged short int'" << " = " << 0 << std::endl;
	return 0;
}
