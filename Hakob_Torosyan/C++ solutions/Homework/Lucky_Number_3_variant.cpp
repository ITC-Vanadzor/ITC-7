#include <iostream>

int main()
{
	int digit = 0, num, number, grad = 0, count = 1;
	std::cout << "Insert number " << endl;
	std::cin >> number;
	num = number - 1;
	if(number != 1)
	{	
		while(num != 0)
		{
			if(num > 2 && num%2 != 0)
				digit = digit*10 + num%2;
			if(num < 2)
				digit = digit*10 + num;
			if(num%2 == 0 && num > 1)
			{
				count = count * 10;
				digit = count;
				grad++;
			}
			num = num/2;
		}

		int n;
		n = number-1;
		for(int i=1; i<grad; i++)
		{
			n = n / 2;
		}
		if(n==2)
			std::cout << digit*7/10<< std::endl;
		else
			std::cout << digit*7 << std::endl;
	}
	else 
		std::cout << num << std::endl;
	return 0;
}
