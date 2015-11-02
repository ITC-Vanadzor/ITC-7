#include <iostream>
#include <cmath>

void Tower(int* , int);

int main()
{
	int height = 1;
	int column = 0;
	std::cout << "Please insert number of columns " << std::endl;
	std::cin >> column;
	int *tower = new int[column];
	std::cout << "Please insert quantity of cubs in columns " << std::endl;
	for(int i = 0; i < column; ++i)
	{
		std::cin >> tower[i];
	}
	Tower(tower, column);
	delete[] tower;
	return 0;
}

void Tower(int* array, int size)
{
	int sum = 0;
	int count = 0;
	for(int j = 0; j < size; ++j)
	{
		sum += array[j];
	}
	if(sum%size != 0)
	{
		std::cout<<"We can not build right columns with you imported numbers, please try again " << std::endl;
	}
	else
	{
		std::cout << "For number of cubs in every right column we will have " << sum / size << std::endl;
		for(int k = 0; k < size; ++k)
		{
			if(array[k] > (sum / size))
			count += array[k] - sum/size;
		}
		std::cout << "For number of minimum steps we will have " << count << std::endl;
	}
}
