#include <iostream>

int fact (int k) {
  	if (k>=2) return k*fact(k-1);
}

int count_ways (const int N,const int K) {
   	return (fact(N)*fact(N))/((fact(N-K)*fact(N-K))*fact(K));
}


int main () {

unsigned int N, K;


std::cout<<"\n N (Chess size NXN) is, N -> [1,8]: ";
std::cin>>N;

std::cout<<"\n Number of rooks is, K-> [1,8]:";
std::cin>>K;


std::cout<<"\n Number of ways that rooks won't meet  is "<<count_ways (N, K)<<std::endl;


char ch;
std::cin>>ch;
return 0;
} 
