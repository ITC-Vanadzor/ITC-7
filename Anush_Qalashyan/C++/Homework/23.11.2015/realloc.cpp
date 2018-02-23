#include <iostream>
#include <cstdlib>


int* realloc2(int *a, int n,int size)
{
	if(size == 0)
	{
		return 0;
	}
	int* c;

	if(a == 0)
	{
		c = (int*)malloc(sizeof(int)*size);
		int k = size < n ? size : n;
		for(int i = 0; i < k; ++i)
		{ 
			c[i] = a[i];
		}
		free(a);
                free(c);
		return c;
	}
       
}         


int main()
{
	int n;
	std::cout << "Number of elements : N = ";
	std::cin >> n;
	int* x = (int*)malloc(sizeof(int)*n) ;

	for (int i = 0; i < n; ++i)
	{
		std::cout << "X[" << i << "] = ";             
		std::cin >> x[i];
	}

	std::cout << "The new array size = ";
	int size;
	std::cin >> size;
	int* y = realloc2(x, n, size);

	for(int j = 0; j < n; ++j)
	{
		std::cout << y[j] << std::endl;
	}

	for(int j = n; j < size; ++j)
	{
		y[j] = 0;
		std::cout << y[j] << std::endl;
	}
	return 0;
}
