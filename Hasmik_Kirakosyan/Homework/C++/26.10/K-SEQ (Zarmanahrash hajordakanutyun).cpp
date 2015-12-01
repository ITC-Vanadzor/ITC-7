// Solution of K-SEQ problem - zarmanahrash hajordakanutyun

#include <iostream>

int main () {
    int N, K;
    std::cout<<"K= ";
    std::cin>>K;
    
    std::cout<<"\nN= ";
    std::cin>>N;
    int sum=0;
    for (int i=1; i<N; i++) {
        sum+=i;
        std::cout<<" "<<i;
    }
    
    if (K-sum>=N) 
       std::cout<<" "<<K-sum;
    else 
       std::cout<<"Sorry, there is no K sequence ";
       
    
    
    char ch;
    std::cin>>ch;
    return 0;
}
