#include <iostream>

int main()
{
	//num- input number, count- count of numbers,
	int num, count = 0;

	std::cin >> num;

	int a = num; //ascription for cycle,

	//cycle, wich check all numbers of num value,
	while (a > 0)
	{
		if((a%10)!=0 && num%(a%10) == 0)
		{ ++count; }
		a /= 10;
	}

	std::cout << count << std::endl; 

	return 0;
}
