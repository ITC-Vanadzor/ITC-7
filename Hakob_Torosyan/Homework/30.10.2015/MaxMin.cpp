#include <iostream>
#include <cmath>

void MaxMin(int* , int);

int main()
{
	int number = 0;
	std::cout << "Please insert number of variables " << std::endl;
	std::cin >> number;
	int *files = new int[number];
	std::cout << "Please insert values of variables  " << std::endl;
	for(int i = 0; i < number; ++i)
	{
		std::cin >> files[i];
	}
	MaxMin(files, number);
	return 0;
}

void MaxMin(int* array, int size)
{	
	int min = array[0];
	for(int j = 2; j < size; j+=2)
	{
		if(array[j] < min)
		{
			min = array[j];		
		}			
	}
	int max = array[1];
	for(int j = 3; j < size; j+=2)
	{
		if(array[j] > max)
		{
			max = array[j];		
		}			
	}
	int sumMaxMin = min + max;
std::cout << "For sum om max and min we will have " << sumMaxMin << std::endl;
} 


