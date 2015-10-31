//Armeni ev Ashoti tneri mijev qani tun ka?


#include <iostream>
#include<cmath>
int main()
{
	int n = 0;
	int m = 0;
	do
	{
		std::cout << "N=";
		std::cin >> n;
		std::cout << std::endl << "M=";
			std::cin >> m;
	} while (n <= 0 || n > 100 || m <= 0 || m > 100);
	
	std::cout << std::endl << "ka " << abs(n - m) / 2 - 1 << " tun";

	return 0;
}