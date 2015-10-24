#include <iostream>
#include <limits>
int main() {
  std::cout
    << std::numeric_limits< short >::max() << "\n"
    << std::numeric_limits< unsigned short >::max() << "\n"
    << std::numeric_limits< int >::max() << "\n"
    << std::numeric_limits< unsigned int >::max() << "\n"
    << std::numeric_limits< short >::min() << "\n"
    << std::numeric_limits< unsigned short >::min() << "\n"
    << std::numeric_limits< int>::min() << "\n"
    << std::numeric_limits< unsigned int >::min() << "\n";
}
