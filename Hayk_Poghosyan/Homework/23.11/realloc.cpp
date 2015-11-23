#include <iostream>
#include <cstdlib>

int* real(int* p, int s)
{
	int *pointer=0;
	pointer = static_cast<int*>(malloc(sizeof(int)*s));
	if (p == 0)
	{
		return pointer;
	}
	else
	{
		for (int i = 0; i < s; ++i)
		{
			pointer[i] = p[i];
		}
	}
	free (p);
	return pointer;
}


int main()
{
	int input;
	int counter = 0;                                     
	int * values = NULL;
	int * many_numbers;

	do {
		std::cout << "greq tiv(0 durs galu hamar) ";
		std::cin >> input;
		counter++;

		many_numbers = real(values, counter );

		if (many_numbers != NULL)
		{
			values = many_numbers;
			values[counter - 1] = input;                      
		}
	
	} while (input != 0);                                   

	std::cout << "tver@: ";
	for (int ix = 0; ix < counter; ix++) std::cout << values[ix] << " ";
	free(values);                                         
	return 0;
}