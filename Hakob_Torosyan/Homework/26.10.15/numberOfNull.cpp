#include <iostream>

void CounterOfNull(int);

int main()
{	
	int number;
	std::cout << "Please import number " << std::endl;
	std::cin >> number;
	CounterOfNull(number);
	return 0;
}
void CounterOfNull(int num)
{
	int count = 0;
	if(num%10 == 0)
	{
	count = 2 * num/10;
	std::cout << "For quantity of null in number we will have " << count << std::endl;
	}
	else
	if(num%10 >= 5)
	{
	count = 2 * (num/10) + 1;
	std::cout << "For quantity of null in number we will have " << count << std::endl;
	}
	else
	{
	count = 2 * num/10;
	std::cout << "For quantity of null in number we will have " << count << std::endl;
	}
}
