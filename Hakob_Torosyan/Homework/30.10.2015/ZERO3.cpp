#include <iostream>
#include <cmath>

void Count(int , int);

int main()
{
	int K, N;
	std::cout << "Please insert value of K " << std::endl;
	std::cin >> K;
	std::cout << "Please insert value of N  " << std::endl;
	std::cin >> N;
	Count(K, N);
	return 0;
}
void Count(int k, int n)
{
	int count = 0;
	for(int i = pow(k,(n-1)); i < pow(k,n); ++i)
	{
		int flag = 0;
		int temp = i;
		int num = 0;
		for(int j = 1; j <= n; ++j)
		{
			if(temp%k == 0)
			{
				++flag;
			} 
			else
			{
				flag = 0;
			}
			temp = temp/k;
			if(flag >= 2)
			num=1;
		}
		if(num != 1)
		{
			std::cout << i << std::endl;
			++count;
		}	
		
	}
	std::cout << pow(k,(n-1)) << "->" << pow(k,n) <<std::endl;	
	std::cout << "For quantity of needed numbers we will have " << count << std::endl;
}




