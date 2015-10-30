#include <iostream>
#include <stdint.h>
#include <math.h>

uint64_t pow_of_2 (int n) {
        uint64_t pow_1=1;
	if (n>32) return (pow_1<<=n-1)-2;
	   return pow_1<<=n;
}

int main () {
 int n=0, m=0;

 std::cout<<"\n n = ";
 std::cin>>n;

 std::cout<<"\n m = ";
 std::cin>>m;

 uint64_t pow_2_n = pow_of_2 (n);
 std::cout<<"\n 2^n = "<<pow_2_n;
 uint64_t main_exp =pow_of_2(pow_2_n);

 std::cout<<"\n 2^(2^n) mod m = "<<main_exp%m<<std::endl;


  return 0;
}
