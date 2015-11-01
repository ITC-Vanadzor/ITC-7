#include <iostream>
#include <cmath>

int Count(int, int);

int main()
{
	int K, N;
	std::cout << "Please insert value of side wich must be 2<=N<=8 " << std::endl;
	std::cin >> N;
	std::cout << "Please insert quantity of rooks wich must be 2<=K<=8  " << std::endl;
	std::cin >> K;
	std::cout << "For quantity of variants we will have " << Count(N, K) << std::endl;
	return 0;
}
int Count(int n, int k)
{
	int quantity = 1;
	for(int j = 0; j<k; ++j)
	{
		quantity = quantity * pow((n-j),2);		
	}	
	return quantity;
}




