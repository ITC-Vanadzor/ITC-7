#include <iostream>
#include <math.h>

void SuperRow(int, int);

int main()
{
int n, m;
std::cout << "Please insert n number ";
std::cin >> n;
std::cout << "Please insert number m ";
std::cin >> m;
SuperRow(n, m);
return 0;
}

void SuperRow(int n, int m)
{
int SR = pow(2,pow(2,n));
std::cout << SR%m << std::endl;
}
