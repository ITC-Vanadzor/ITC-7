#include <iostream>

void stair(int );
int main()
{
	int number;
	std::cout << "Please import number of stairs which can take values from 1 to 30 " << std::endl;
	std::cin >> number;
	stair(number);
	return 0; 
}

void stair(int n)
{
	int *fibonachi = new int[n]; 
	fibonachi[0] = 1;
	fibonachi[1] = 2;
	for(int i = 0; i < n-2; ++i)
	{
		fibonachi[i+2] = fibonachi[i] + fibonachi[i+1];	
	}
	std::cout << fibonachi[n-1] <<std::endl;
}
 

