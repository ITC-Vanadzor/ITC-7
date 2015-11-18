#include <iostream>

int m_mod(int n,int m)
{
    long int tmp = 1;
    long int k = 1 << n;
    for (int i = 0; i < k; ++i)
    {
        tmp = ( tmp << 1 ) % m;
    }
    std::cout << tmp << std::endl;
}

int main()
{	
    int n = 0;
    int m = 0;
    std::cout << "N = ";
    std::cin >> n;
    std::cout << "M = ";
    std::cin >> m;
    if ( n > 0 && n <= 100000 && m <= 10000 && m > 2) 
    { 
        m_mod(n,m);	
    }
    else 
    {
        std::cout << "----Error----" << std::endl;
    }
    return 0;
}
