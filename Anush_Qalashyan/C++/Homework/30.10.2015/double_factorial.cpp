#include <iostream>

int Factorial(int N) 
{
    if (N % 2 == 0)
    {
        if (N > 2)  
        {
            return N * Factorial(N-2); 
        }
        else 
        {
            return 2; 
        }
    }
    else
    {
        if (N > 1)  
        {
            return N * Factorial(N-2);
        }
        else 
        {
            return 1; 
        }
    }
}

int main ()
{
        int N;
        std::cout << "N = ";
        std::cin >> N;
        std::cout << "N!! = " << Factorial(N) << std::endl;

        return 0;
}
