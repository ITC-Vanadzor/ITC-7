//maxmin
#include<iostream>

int main()
{
	int max = 0;
	int min = 0;
	int tmp = 0;
	std::cout << "nermuceq 10000>=tiv durs galu hamar\n";
	std::cin >> tmp;
	min = tmp;
	std::cin >> tmp;
	max = tmp;
	int i = 2;
	while (i<10000)
	{
		++i;
		std::cin >> tmp;
		if (tmp >= 10000)break;
		if (i%2 != 0 && tmp < min)
		{
			min = tmp;
		}
		if (i%2==0 && tmp > max)
		{
			max = tmp;
		}

	}
	std::cout << max + min;
	
	return 0;
}