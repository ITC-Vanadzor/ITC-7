#include<iostream>
#include <cstdlib>

int main()
{
	int n = 0;
	do
	{
		std::cout << "n = ";
		std::cin >> n;
	}
	while(n < 0);

	char arr[250];
	for(int i = 0; i < n; ++i)
	{
		std::cout << "arr[" << i + 1 << "]";
		std::cin >> arr[i];
	} 
	std::cout << std::endl;
	int i = 0;
	int a;
	while(i < (n - 1) / 2)
	{ 
		if(arr[0 + i] != arr[(n - 1) - i])
		{
			std::cout << "Palindrom che" << std::endl;
			break;
		}
		++i;
	}	




	for (int i=0; i < (n-1) / 2; ++i) 
	{
		if(arr[i]==arr[i+1]);
		std::cout << "Error" << std::endl;
		break;
	}
	exit(1);


	if(i == (n - 1) / 2)
	{

		std::cout << "Palindrom e" << std::endl;
		std::cout << "Amenaerkar voch palindromy -----> " ;
		for(int i = 0; i < n - 1; ++i)
		{
			std::cout << arr[i];
		} 
		std::cout << std::endl;
	} 

	return 0;
}
