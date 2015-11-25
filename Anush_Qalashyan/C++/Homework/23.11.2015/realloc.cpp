#include <iostream>
#include <cstdlib>


int* realloc2(int *a, int n,int size)
{
	int* c;
	if(size == 0)
	{
		return 0;
	}
	else
	{
		if(a == 0)
		{
			c=(int*)malloc(sizeof(int)*size);
			for(int i = 0; i < size; i++)
			{ 
				c[i] = a[i];
			}
			free(a); 
			return c;
		}
	}
}         


int main()
{
	int n;
	std::cout << "Number of elements : N = ";
	std::cin >> n;
	int x[n];

	for (int i = 0; i < n; i++)
	{
		std::cout << "X[" << i+1 << "] = ";             
		std::cin >> x[i];
	}

	std::cout << "The new array size = ";
	int size;
	std::cin >> size;
	int* y = (int*)realloc2(x, n, size);

	for(int j = 0; j < n; ++j)
	{
		std::cout << y[j] << std::endl;
	}

	for(int j = n; n <= j && j < size; ++j)
	{
		y[j]=0;
		std::cout << y[j] << std::endl;
	}

	return 0;
}
