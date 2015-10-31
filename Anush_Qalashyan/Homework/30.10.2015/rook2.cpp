#include <iostream>

int N_Factorial(int N)
{
    return (N == 1 ? N : N * N_Factorial(N - 1));
}

int K_Factorial(int K)
{
    return (K == 1 ? K : K * K_Factorial( K - 1 ));
}

int main()
{
    int N;
    int K;
    std::cout << "NxN = " ;
    std::cin >> N;
    std::cout << "K = ";
    std::cin>> K;

    std::cout << "Kareli e dasavorel " << (N_Factorial(N) * N_Factorial(N)) / K_Factorial(K) << " exanakov  " << std::endl;
    return 0;
}
