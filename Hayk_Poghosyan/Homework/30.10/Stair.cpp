//Sanduxq 1 kam 2 qaylov 

#include <iostream>

int rekursiv_summ(int n)
{
	if (n == 1)return 1;
	else
		if (n == 2) return 2;
		else
		return rekursiv_summ(n-2) + rekursiv_summ(n - 1);
}

int main()
{
	int n = 0;
	do
	{
		std::cout << "n=";
		std::cin >> n;
		std::cout << rekursiv_summ(n);
	} while (n < 1 || n > 30);
	
	return 0;
}