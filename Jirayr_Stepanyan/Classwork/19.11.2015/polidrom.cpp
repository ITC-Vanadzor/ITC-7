#include <iostream>
#include <cstdlib>
int main()
{
	int n = 0;
	do
	{
		std::cout << "n = ";
		std::cin >> n;
	}
	while(n <= 0);
	
	char arr[250];
	for(int i = 0; i < n; ++i)
	{
		std::cout << "arr[" << i + 1 << "] = ";
		std::cin >> arr[i];
	} 
	std::cout << std::endl;
	int j = 0;
	while(j < n)
	{
		if(arr[0] != arr[0 + j])
		{
			break;
		}
		++j;
	}
	if(j == n)
	{
		std::cout << "polidrom goyutyun chuni" << std::endl;
		exit(1);
	}
	int i = 0;
	while(i < (n - 1) / 2)
	{
		if(arr[i] != arr[(n - 1) - i])
		{
			std::cout << "polidrom che" << std::endl;
			break;
		}
		++i;
	}
	if(i == (n - 1) / 2)
	{
		std::cout << "polidrom e" << std::endl;
		std::cout << "amenaerkar voch polidrom@ = " ;
		for(int i = 0; i < n - 1; ++i)
		{
			std::cout << arr[i];
		} 
		std::cout << std::endl;
	}

return 0;
}
