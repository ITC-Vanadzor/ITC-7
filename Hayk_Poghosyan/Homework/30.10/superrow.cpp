//gerastichan
#include<iostream>
int main()
{	
	int n = 0;
	int m = 0;
	std::cout << "0 <= n <= 100000 n=";
	std::cin >> n;
	std::cout << "2 <= m <= 10000 m=";
	std::cin >> m;
	
	int tmp = 1;
	int k = 1 << n;
	for (int i = 0; i < k; ++i)
	
	{
		tmp = (tmp << 1 )%m;
		
	}
	std::cout << tmp << std::endl;
	
}