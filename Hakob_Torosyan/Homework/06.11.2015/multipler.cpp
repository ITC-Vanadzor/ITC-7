#include <iostream>

int multipler(int a, int b, int c)
{
	if(a%b == 0 || a==b)
	{
	return a;
	}
	if(b%a == 0)
	{
	return b;
	}
	return multipler(a+c, b, c);
}
int main()
{
int a = 2, b = 3;
std::cout << "Please import a " << std::endl;
std::cin >> a;
std::cout << "Please import b " << std::endl;
std::cin >> b;
std::cout << "For divider we will have " << multipler(a,b,a) << std::endl;
return 0;
}

