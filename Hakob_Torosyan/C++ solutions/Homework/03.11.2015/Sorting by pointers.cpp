#include <iostream>

int main()
{
	int* a[5];
	int b[5] = {8, -76, 9, 1, 34};
	for(int i = 0; i < 5; ++i)
	{
		a[i] = &b[i];
	}
	//Bubble sorting for values of pointers by using of pointers 
	for(int j = 0; j < 4; ++j)
	{
		for(int k = 0; k < 4; ++k)
		{
			if(a[k + 1] < a[k])
			{
				int* temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}
	//Bubble sorting for values of integers by using of pointers
	for(int j = 0; j < 4; ++j)
	{
		for(int k = 0; k < 4; ++k)
		{
			if(*a[k + 1] < *a[k])
			{
				int* temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}
	std::cout << "Sorting by values of integers " << std::endl;
	for(int i = 0; i < 5; ++i)
	{
		std::cout << *a[i] << std::endl;		
	}
	std::cout << "Sorting by values of pointers " << std::endl;
	for(int i = 0; i < 5; ++i)
	{
		std::cout << a[i] << std::endl;
	}
return 0;
}
