#include <iostream>
#include <cstdlib>


int* realloc2(int* a, int size)
{
	int* c;
	if(size > 4 * sizeof(int))
	{
		c = (int*)malloc (size);
		for(int i = 0; i < 4; ++i)
		{
			c[i] = a[i];
		}
		free(a);
	}
	return c;
}


int main()
{


	int* x = (int*)malloc (4 * sizeof(int));
	for (int i = 0; i < 4; ++i)
	{
		x[i] = i;
	}
	for(int i = 0; i < 4; ++i)
	{
		std::cout << x[i] << " ";
	}
	std::cout << std::endl;
	int* y = realloc2(x, 5 * sizeof(int));
	for(int i = 0; i < 10; ++i)
	{
		std::cout << y[i] << " ";
	}
	free(y);

return 0;
}
