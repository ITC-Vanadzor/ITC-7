#include <iostream>


void type1_n (int n) {
	if (n==1) {
			std::cout<<" "<<n;
			return ;
		  }
		else {
		 	 type1_n(n-1);
		 	std::cout<<" "<<n;
		 	return ;
		 }
}

int main () {
  int n = 15;
  
  type1_n(n);
  std::cout<<std::endl;
return 0;
}

