//miavor amenamec @ndhanur bajanarar@
#include <iostream>
#include <cmath>
int baj(int  a, int  b)
 {
	if (a > b)
	{
		return baj(--a, b);
	}
	if (a < b)
	{
		return baj(a, --b);
	}
	else
	{
		return a;
	}
}
int main()
{
	int m = 0;
	int n = 0;
	do
	{
		std::cout << "n=";
		std::cin >> n;
		std::cout << "m=";
		std::cin >> m;
	}while (n < 1 || m < 1);
	int n_tiv = 0;
	int m_tiv = 0;
	for(int i = 0; i < n; ++i)
	{
		n_tiv += pow(10, i);		
	}
	for(int i = 0; i < m; ++i)
	{
		m_tiv += pow(10, i);		
	}
	int miavor_baj = baj(n_tiv, m_tiv);
	int k;
	while(miavor_baj != 0)
	{
		miavor_baj /= 10;
		++k;
	}
	std::cout << "miavor bajanarar@: "<< k <<std::endl;
	return 0;
}