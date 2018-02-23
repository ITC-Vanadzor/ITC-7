#include <iostream>

int bajanarar(int a, int b)
{
    if(a == b)
    {
        return a;
    }
    if(a > b)
    {
        a = a - b;
        return bajanarar(a,b);
    }
    else
    {
        b = b - a;
        return bajanarar(a,b);
    }
}

int main()
{
    int N;
    int M;

    std::cout << "N = ";
    std::cin >> N;
    std::cout << "M = ";
    std::cin >> M;

    if (N >= 1 && N < 2000 && M >= 1 && M < 2000)
    {
      int A = bajanarar(N,M);
      for (int i = 1; i <= A; ++i) 
{
        std::cout<< 1 << std::endl;        
    } 
    }
    else 
    {
        std::cout << "Error" << std::endl;
    }
    return 0;
}


