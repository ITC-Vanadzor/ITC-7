#include <iostream>
#include <cstdlib>
bool f(int a, int array[], int n)
{
	for(int i = 0; i < n; ++i)
	{
		if(a == (array[i]))
		{
			array[i] = 0;
			return true;
		}
	}
	return false;
}
int main()
{
	int array[10];
	int* new_array;
	int max,k,m, qanak,min,size_arr;
	array[0] = 12;
	array[1] = 13;
	array[2] = 45;
	array[3] = 23;
	array[4] = 46;
	array[5] = 56;
	array[6] = 78;
	array[7] = 79;
	array[8] = 89;
	array[9] = 82;
	
	for(int j = 1; j < 9; ++j)
	{
		max = 0;
		qanak = 0;
		m = -1;
		size_arr = 0;
		for(int i = 0; i < 10; ++i)
		{
			if(array[i] / 10 == j)
			{
				min = j;
				k = array[i] % 10;
				if(k > max)
				{
					max = k;
				}
			}
		}
		for(int s = min; s < max; ++s)
		{
			size_arr += (max - s); 
		}
		new_array = (int*) malloc(sizeof(int)*size_arr);
		for(int i1 = min; i1 < max; ++i1)
		{
			for(int j1 = min; j1 <= max; ++j1)
			{
				if(i1 < j1)
				{
					new_array[++m] = (i1 * 10) + j1; 
				}
			}
		}
		for(int i2 = 0; i2 < size_arr; ++i2)
		{
			if( f(new_array[i2],array,10) )
			{
				++qanak;
			}
		}
		if( qanak == size_arr)
		{
			for(int i2 = 0; i2 < size_arr; ++i2)
			std::cout << new_array[i2] << std::endl;
			std::cout << std::endl;
		}
		free(new_array);
	}

	for(int i = 0; i < 10; ++i)
	{
		if(array[i] != 0)
		{
			std::cout << array[i] <<std::endl;
			std::cout << std::endl;
		}
	}
	
	return 0;
	
}
