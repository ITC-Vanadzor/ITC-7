#include <iostream>
#include <math.h>

int tvanshanneri_qanak(int N,int K)
{
<<<<<<< HEAD
   return (K-1)*pow(K,N-1)-N-2*(K-1);
=======
      return (K-1)*pow(K,N-1)-N-2*(K-1);
>>>>>>> f679108a02b8fafc890c5db925e631ee7d79ea23
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
