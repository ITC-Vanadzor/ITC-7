#include <iostream>

void swappy (int &, int &);
int main()
{
int a, b;
std::cout << "Import a and b " << std::endl;
std::cin >> a;
std::cin >> b;
swappy(a, b);
std::cout << "From transporting we will have for a and b " << std::endl;
std::cout << "a = " << a << ", " << "b = " << b << std::endl;
return 0;
}

void swappy (int &x, int &y)
{
x = x ^ y;
y = x ^ y;
x = x ^ y;
}
