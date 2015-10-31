//Shaxmat
#include<iostream>

double factorial(int x)
{
	if (x == 1)return 1;
	else 
	{
		return x*factorial(x - 1);
	}
}


int main()
{
	int n = 0;
	int k = 0;
	do
	{
		std::cout << "n=";
		std::cin >> n;
	} while (n <= 0 || n>8);
	
	do
	{
		std::cout << "k=";
		std::cin >> k;
	} while (k <= 0 || k > n);

	double count = 1;

	for (int i = 1; i <= k; ++i)
	{
		count *= (n - i + 1)*(n - i + 1);
	}

	std::cout << count / factorial(k) << " dzevov";
	
	
	
	return 0;
}