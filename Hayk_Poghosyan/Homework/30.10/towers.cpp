//amenaqich@ qani xoranard petq e texapoxel
#include<iostream>


int main()
{
	int h[50];
	int n = 0;
	do
	{
		std::cout << "n=";
		std::cin >> n;
	} while (n <= 0 || n >50);

	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		do
		{
			std::cout << "h"<<i<<"=";
			std::cin >> h[i];
		} while (h[i] <= 0 || h[i]>100);
		sum += h[i];
	}


	for (int i = n; i < 50; ++i)
	{
		h[i] = 0;
	}

	int count = 0;

	if (sum%n != 0)
	{
		std::cout << "hnaravor che";
	}
	else 
	{
		for (int i = 0; i < n; ++i)
		{
			if (h[i] - sum/n > 0)
			{
				count = count + h[i] - (sum / n);
			}
		}
		std::cout << "petq e katarel " << count << " texapoxutyun";
	}


	return 0;
}