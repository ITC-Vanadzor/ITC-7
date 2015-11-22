#include <iostream>
bool f(int a, int array[], int n)
{
	for(int i = 0; i < n; ++i)
	{
		if(a == array[i])
			return true;
	}
	return false;
}

void ff(int array[7], int& max, int& min)
{
	for(int i = 0; i < 7; ++i)
	{
		if(array[i] % 10 > max)
			max = array[i] % 10;
		if(array[i] / 10 < min)
			min = array[i] / 10;
	}
}
int main()
{
	int array[7];
	int array2[3];
	int array3[4];
	array[0] = 12;
	array[1] = 23;
	array[2] = 45;
	array[3] = 13;
	array[4] = 46;
	array[5] = 56;
	array[6] = 68;
	int max = 0;
	int min = 10;
	int* array1;
	int k = -1;
	int n = 0;
	int m = -1;
	int a = -1;
	
	for(int i = 0; i < 7; ++i)
		std::cout << array[i] <<std::endl;

	ff(array, max, min);
	
	array1 = new int[28];
	
	
	for(int i = min; i < max; ++i)
	{
		for(int j = min; j <= max; ++j)
		{
			if (i < j)
			array1[++k] = (i * 10)+j; 
		}
	}
	
	
	std::cout << std::endl;
	
	for(int i = 0; i < 28; ++i)
	{
		if( f(array1[i],array,7) )
		{
			array2[++m] = array1[i];
			std::cout << array1[i] << std::endl;
		}
		else
		{
			n = array1[i] % 10;
			for(int x = i; x < 28; ++x)
			{
				if(array1[x] % 10 == n)
				array1[x] = 0;
			}
		}
	}

	std::cout << std::endl;
/*	
	for(int i = 0; i < 3; ++i)
		std::cout << array2[i] << std::endl;
		
	for(int i =0; i < 7; ++i)
	{
		if ( f(array[i],array2,3) )
		{
			array3[++a] == array[i];
		}
	}
*/	
	
	
	


	delete array1;
	
	
		return 0;
}