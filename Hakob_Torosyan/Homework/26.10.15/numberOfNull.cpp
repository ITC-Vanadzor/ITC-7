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
	int count = 0, numberOfFive = 5;
	while(num/numberOfFive > 0)
	{
		count += num/numberOfFive;
		numberOfFive *= 5;
		
	}

	std::cout << "For quantity of null in number we will have " << count << std::endl;
	
}
