#include <iostream>
int bajanarar(int min, int a, int b)
{
	if((a % min) == 0 && (b % min) == 0)
	{
		return min;
	}
	bajanarar(min / 2, a, b);
}
int bazmapatik(int max, int a, int b)
{
	if((max % a) == 0 && (max % b) == 0)
	{
		return max;
	}
	bazmapatik(max * 2, a, b);
}
int main()
{
	int n = 0, m = 0;
	while(n <= 0 || m <= 0)
	{
		std::cout << "tpel voreve bnakan amboxj tiv n = ";
		std::cin >> n;
		std::cout << "tpel voreve bnakan amboxj tiv n = ";
		std::cin >> m;
	}
	int min = m;
	int max = n;
	if(n <= m)
	{
		min = n;
		max = m;
	}
	int mec_bajanarar = bajanarar(min, n, m);
	std::cout << "amenamec @ndhanur bajanarar@ = " << mec_bajanarar << std::endl;
	int poqr_bazmapatik = bazmapatik(max, n, m);
	std::cout << "amenapoqr @ndhanur bazmapatik@ = " << poqr_bazmapatik << std::endl;
	
   return 0;
}

