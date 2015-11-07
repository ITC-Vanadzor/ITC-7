#include <iostream>

int f(int N,int M)
{
    if (M > N) 
    {
        if (M % N == 0)
        {
            return N;
        }
        else 
        {
            return 1;
        }
    }
    else
    {
        if(N % M == 0)
        {
            return M;
        }
        else
        { 
            return 1;
        }
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
        std::cout << f(N,M) << std::endl;
    }
    else 
    {
        std::cout << "Error" << std::endl;
    }
    return 0;
}


