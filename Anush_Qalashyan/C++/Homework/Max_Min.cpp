#include <limits.h>
#include <iostream>

int main()
{
std::cout << "Max int            -> " << INT_MAX << std::endl;
std::cout << "Min int            -> " << INT_MIN << std::endl;
std::cout << "Max unsinged int   -> " << UINT_MAX << std::endl;
std::cout << "Min unsinged int   -> "  << 0 << std::endl;
std::cout << "Max short int      -> " << SHRT_MAX << std::endl;
std::cout << "Min short int      -> "  << SHRT_MIN << std::endl;
std::cout << "Max unsinged short -> " << USHRT_MAX << std::endl;
std::cout << "Min unsinged short -> " << 0 << std::endl;
return 0;
}
