//gerastichan
#include<iostream>
int main()
{
	int n = 0;
	int m = 0;
	do {
		std::cout << "0 <= n <= 100000 n=";
		std::cin >> n;
		std::cout << "2 <= m <= 10000 m=";
		std::cin >> m;
	}while(n < 0 || n >100000 || m < 2 || m>10000);

	long long tmp = 1;
	int k = 1;
	int p = n / 64;   //64=log2(long_long_max)
	if (p > 0)
	{
		for (int j = 0; j < p - 1; ++p)
		{
			 k = k << 30;
			for (int i = 0; i < k; ++i)

			{
				tmp = (tmp << 1) % m;

			}
		}
		 k = k << n % 64;
		for (int i = 0; i < k; ++i)

		{
			tmp = (tmp << 1) % m;

		}
	}
	else
	{
		int k = 1 << n;
		for (int i = 0; i < k; ++i)

		{
			tmp = (tmp << 1) % m;

		}
	}
	std::cout << tmp << std::endl;

	
	return 0;
}