#include <iostream>
#include <math.h>

int tvanshanneri_qanak(int N,int K)
{
   return (K-1)*pow(K,N-1)-N-2*(K-1);
}

int main()
{
int K;
int N;
std::cout << "K = ";
std::cin >> K;
std::cout << "N = ";
std::cin >> N; 

std::cout << tvanshanneri_qanak(N,K) << std::endl;
return 0;
}
