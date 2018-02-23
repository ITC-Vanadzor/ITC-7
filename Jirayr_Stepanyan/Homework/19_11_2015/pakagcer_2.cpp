#include <iostream>
#include <cstdlib>
int main()
{
	int n = 10;
	char arr[n];
	std::cout << "tpel massivi simvolner@ ";
	std::cin >> arr;
	char massiv[n];
	int k = 0;
	for(int j = 0; j < n; ++j)
	{
		if(arr[j] == '\'')
		{
			if(massiv[k - 1] == '\'')
			{
				--k;
			}
			else
			{
				massiv[k] = arr[j];
				++k;
			}
		}
		if(arr[j] == '(' || arr[j] == '{' || arr[j] == '[')
		{
			massiv[k] = arr[j];
			++k;
		}
		if(arr[j] == ')')
		{
			if(massiv[k - 1] == '(')
			{
				--k;
			}
			else
			{
				std::cout << "sxal pakagcer" << std::endl;
				exit(1);
			}
		}
		if(arr[j] == '}')
		{
			if(massiv[k - 1] == '{')
			{
				--k;
			}
			else
			{
				std::cout << "sxal pakagcer" << std::endl;
				exit(1);
			}
		}
		if(arr[j] == ']')
		{
			if(massiv[k - 1] == '[')
			{
				--k;
			}
			else
			{
				std::cout << "sxal pakagcer" << std::endl;
				exit(1);
			}
		}
	}
	if(k == 0)	
	{
		std::cout << "jisht pakagcer" << std::endl;
	}	

   return 0;
}
