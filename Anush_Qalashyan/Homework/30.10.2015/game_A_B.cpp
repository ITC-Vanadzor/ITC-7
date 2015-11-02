#include <iostream>

int main()
{
	int A = 0; 
	std::cout << "A = ";
	std::cin >> A;
	int B = 0;
	std::cout << "B = ";
	std::cin >> B;

	if (A % 2 == 0 && B % 2 == 0)
	{
		std::cout << " 2 " << std::endl;
	}
	else
	{
		std::cout << " 1 " << std::endl;
	}

	return 0;
}
