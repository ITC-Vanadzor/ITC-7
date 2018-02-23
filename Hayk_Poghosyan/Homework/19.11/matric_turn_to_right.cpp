//shrjel matric@ 90 astichan depi aj
#include <iostream>
#define n 3

int main()
{
	int array[n][n];
	for (int i = 0; i<n; ++i)
	{
		std::cout << "\n";
		for (int j = 0; j<n; ++j)
		{
			std::cout << "array[" << i << "][" << j << "]" << " ";
			std::cin >> array[i][j];
		}
	}

	for (int i = 0; i<n; ++i)
	{
		std::cout << "\n";
		for (int j = 0; j<n; ++j)
		{
			std::cout << array[i][j] << " ";
		}
	}
	std::cout << "\n\n\n\n\n\n";


	for(int j=0; j<n; ++j)
	{

		for (int i=n-1; i>=0; --i)
		{
			std::cout << array[i][j]<<" ";
		}
		std::cout<<"\n";
	}

	return 0;
}
