#include<iostream>
#include<cmath>

int dec_to_n(int x,int n)
{
	int count = 0;
	int i = 1;
	while (x > 0)
	{
		count += x%n*i;
		x /= n;
			i=i*10;
	}
	return count;
}

bool duble_zero(int x)
{
	int zro = 0;

	while (x > 0)
	{
		if (x % 10 == 0)
		{
			++zro;
		}
		if (zro == 2)
		{
			return true;
		}
		if (x % 10 != 0)
		{
			zro = 0;
		}
		x /= 10;
	}
	return false;
}




int main()
{
	int k = 0;
	int n = 0;

	std::cout << "k=";
	std::cin >> k;
	std::cout << "n=";
	std::cin >> n;


	double min = pow(n, k - 1);
	double max = pow(n, k) - 1;

	int count = 0;

	for (double i = min; i <= max; ++i)
	{
		if (!duble_zero(dec_to_n(i, n)))
			++count;
	}

	std::cout << count;
	system("Pause");
	return 0;
}