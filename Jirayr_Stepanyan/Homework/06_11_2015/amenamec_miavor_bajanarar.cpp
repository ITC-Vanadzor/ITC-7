#include <iostream>
#include <cmath>
int bajanarar(int min, int a, int b)
{
	if((a % min) == 0 && (b % min) == 0)
	{
		return min;
	}
	bajanarar(min / 2, a, b);
}
int main()
{
	int n = 0, m = 0;
	while(n <= 0 || m <= 0)
	{
		std::cout << "tpel arajin tvi mekeri qanak@ (bnakan amboxj) ";
		std::cin >> n;
		std::cout << "tpel erkrord tvi mekeri qanak@ (bnakan amboxj) ";
		std::cin >> m;
	}
	int min = m;
	if(n <= m)
	{
		min = n;
	}
	int baj = bajanarar(min, n, m);
	std::cout << "dzer tpac tveri amenamec @ndhanur miavor bajanarar@ = ";
	for(int i = 0; i < baj; ++i)
	{
		std::cout << "1";
	}
	

   return 0;
}
