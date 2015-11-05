#include <iostream>

int func(int n)
{
    if (n==1) {
	std::cout << n << " ";
    } else { 	
	std::cout << func(n-1) + 1 << " ";
    }
    return n;
}


int main()
{
    int n=-1;
    do {
	std::cout << "n=" ;
	std::cin>>n;
    } while (n<1);
    func(n);
    return 0;
}
