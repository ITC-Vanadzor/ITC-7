#include <iostream>


int main()
{
    int n;
    std::cout << "N=" ;
    std::cin >> n;
    int i=1;
    while (n>i)
    {
        i=i << 1;
    }
    std::cout << i << std::endl;
    return 0;
}


