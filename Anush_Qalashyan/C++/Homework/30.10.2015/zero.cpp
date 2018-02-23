#include <iostream>
#include <math.h>

int tvanshanneri_qanak(int N,int K)
{
    if (N > 3) 
    {
        return (K-1)*pow(K,N-1)-pow(K,N-3)*(K-1); 
    }

}
int main()
{
    int K;
    std::cout << "K = ";
    std::cin >> K;
    int N;
    std::cout << "N = ";
    std::cin >> N; 
    //std::cout << (K-1)*pow(K,N-1) << std::endl;
    //std::cout << pow(K,N-3)*(K-1) << std::endl;
    std::cout << tvanshanneri_qanak(N,K) << std::endl;

    return 0;
}
