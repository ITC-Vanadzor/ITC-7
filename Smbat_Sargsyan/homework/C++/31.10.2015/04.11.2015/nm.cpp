#include <iostream>

unsigned long long nm(int n,int m)
{
	if(n <= 1 || m == 1) return n;
	if(m == 0) return 1;
	else 
               if(m%2==0)
                    return nm(n,m/2)*nm(n,m/2);
               else
                    return nm(n,m/2)*nm(n,m/2)*n;
}
int main()
{
	int n;
        int m;
	do
	{
		std::cout << "n=";
		std::cin >> n;
		std::cout << "m=";
		std::cin >> m;
	} 
	while (n < 0 || m < 0);
	std::cout << "answer= " << nm(n,m) << std::endl;
	return 0;
}
