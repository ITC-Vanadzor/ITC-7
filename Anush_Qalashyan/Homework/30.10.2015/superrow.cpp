#include <iostream>

int m_mod(int n,int m)
{
    int tmp = 1;

    int k = 1 << n;

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
    m_mod(n,m);	
return 0;
}
