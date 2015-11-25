#include <iostream>
#include <cstdlib>

void* real(void* p, size_t size,int n)
{
	if (size = 0)
	{
		free (p);
		return NULL;
	}
	void *pointer = 0;
	pointer = (malloc(sizeof(size_t)*size));
	if (p == 0)
	{
		return pointer;
	}
	else
		if(n<size)
	{
		for (int i = 0; i < n; ++i)
		{
			static_cast<size_t*>(pointer)[i] = static_cast<int*>(p)[i];
		}
	}
		else
		{
			for (int i = 0; i < size; ++i)
			{
				static_cast<size_t*>(pointer)[i] = static_cast<int*>(p)[i];
			}
		}
	free(p);
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

		many_numbers =(int*) real(values, counter,counter-1);

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