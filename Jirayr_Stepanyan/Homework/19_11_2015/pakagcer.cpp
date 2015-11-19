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
	char massiv[n];
	int k = 0;
	int bac_pakagic = 0;
	int pak_pakagic = 0;
	int pakagic = 0;
	for(int j = 0; j < n; ++j)
	{
		if(arr[j] == '(' || arr[j] == '{' || arr[j] == '[')
		{
			massiv[k] = arr[j];
			++k;
			++bac_pakagic;
		}
		if(arr[j] == ')')
		{
			++pak_pakagic;
			if(massiv[k - 1] == '(')
			{
				++pakagic;
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
			++pak_pakagic;
			if(massiv[k - 1] == '{')
			{
				++pakagic;
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
			++pak_pakagic;
			if(massiv[k - 1] == '[')
			{
				++pakagic;
				--k;
			}
			else
			{
				std::cout << "sxal pakagcer" << std::endl;
				exit(1);
			}
		}
	}
	if(bac_pakagic == pak_pakagic)	
	{
		std::cout << "masivum ka " << pakagic << " hat pakagic" << std::endl;
	}
	else
	{
		std::cout << "ERROR: ka chpakvac pakagic(ner)" << std::endl;
	}	

   return 0;
}
