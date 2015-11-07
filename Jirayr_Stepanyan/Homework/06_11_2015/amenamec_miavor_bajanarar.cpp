#include <iostream>
#include <cmath>
int bajanarar(int a, int b)
{
	if(a == b || (b > a && (b % a) == 0))
	{
		return a;
	}
	if(a > b && (a % b) == 0)
	{
		return b;
	}
	else
	{
		return 1;
	}	
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
	int tiv_n = 0;
	for(int i = n - 1; i >= 0; --i)
	{
		tiv_n += pow(10, i);
	}
	int tiv_m = 0;
	for(int i = m - 1; i >= 0; --i)
	{
		tiv_m += pow(10, i);
	}
	std::cout << "dzer tpac tveri amenamec @ndhanur miavor bajanarar@ = " << bajanarar(tiv_n, tiv_m) << std::endl;

   return 0;
}
