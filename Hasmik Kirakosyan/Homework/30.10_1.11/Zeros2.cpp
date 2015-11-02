#include <iostream>
#include <conio.h>


int main () {
    int K=0, N=0;
while ((N + K)<4 || (N+K)>18)  { 
    std::cout<<"\nK = ";
    do {
     std::cin>>K;
    } while (K<2 || K>10);
    

    std::cout<<"\nN = ";
    do {
     std::cin>>N;
    } while (N<2);
}
    int count_non_zeros = (K-1)*(int) pow(K, N-3)*(K*K-1);
    
    std::cout<<"\n Count of numbers with none 00's is "<<count_non_zeros;
    
 return 0;
    
}
