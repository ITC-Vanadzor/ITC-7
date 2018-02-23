#include <iostream>

int func(int n)
{
	if (n==1)
		std::cout << n << " ";
		
	else 	
		std::cout << func(n-1) + n << " ";
return 0;
}


int main()
{
	int n;
        std::cout << "n=" ;
	std::cin>>n;
func(n);
return 0;
}
