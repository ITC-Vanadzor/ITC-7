//krknaki factorial
#include<iostream>

double double_factorial(int x)
{
	if (x == 1)return 1;
	if (x == 2)return 2;

	return x * double_factorial(x - 2);
}




int main()
{
	int n = 0;

	do
	{
		std::cout << "n=";
		std::cin >> n;
	}while(n <= 0);

	std::cout << double_factorial(n);

	
	return 0;
}