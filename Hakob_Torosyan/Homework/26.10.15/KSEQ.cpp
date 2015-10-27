#include <iostream>
void printSeq (int, int);

int main()
{
	int N, K;
	std::cout << "Please insert N ";
	std::cin >> N;
	std::cout << "Please insert K ";
	std::cin >> K;
	printSeq (K, N);
	return 0;
}

void printSeq(int k, int n)
{
	int sum = k - n, temp;
	//for (n-1) members sum we will have k-n
	temp = (sum - n + 1) / (n-2); 
	std::cout << "For our alternation we will have " << std::endl;
	for(int j = 1; j <= (n - 1); ++j)
	{
		std::cout << temp << " ";
		temp = temp + 1;  
	}
	std::cout << n << std::endl;
}	

