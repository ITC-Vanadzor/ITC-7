#include <iostream>



unsigned int possibility_for_k_rooks (int N, int K) {

	unsigned int C_multiply=1;
	for (int i = N;i>1; --i) {
		C_multiply*=i*i;  
	}

 	return C_multiply;
}

int K_fact (int k) {
  	if (k>=2) return k*K_fact (k-1);
}

int ways_count (int N, int K) {
   	return possibility_for_k_rooks(N,K)/K_fact(K);
}


int main () {

unsigned int N, K;

std::cout<<"\n N (Chess size NXN) is : ";
std::cin>>N;

std::cout<<"\n Number of rooks is :";
std::cin>>K;



std::cout<<"\n Number of ways that rooks won't meet  is "<<ways_count(N, K)<<std::endl;



return 0;
}
