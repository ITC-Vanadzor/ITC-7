#include <iostream>

#define calculate() {static int count = 0; count++; std::cout << "Number of function calls = " << count << std::endl;}
int main()
{
calculate();
calculate();
 calculate();
return 0;
}
