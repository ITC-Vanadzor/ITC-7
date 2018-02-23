#include<iostream>



int baj(int  x, int  y)
 {
	if (x>y)return baj(x - y, y);
	if (x<y) return baj(x, y - x);
	if (x == y)return x;
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
	} while (m < 1 || n < 1 || n>2000 || m>2000);
	
	int k = baj(1998, 2000);
	std::cout << k<<std::endl;
	for (int i = 1; i <= k; ++i)
		std::cout<<("1");


	return 0;
}