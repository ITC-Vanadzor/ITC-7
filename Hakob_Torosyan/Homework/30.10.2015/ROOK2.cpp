#include <iostream>
#include <cmath>

int Count(int );

int main()
{
	int K, N;
	std::cout << "Please insert value of side wich must be 2<=N<=8 " << std::endl;
	std::cin >> N;
	std::cout << "Please insert quantity of rooks wich must be 2<=K<=8  " << std::endl;
	std::cin >> K;
	std::cout << "For quantity of variants we will have " << Count(N) << std::endl;
	return 0;
}
int Count(int n)
{
	int quantity = 1;
	for(int i = 1; i <= n; ++i)
	{
		quantity = quantity * pow(i,2);		
	}	
	return quantity;
}




