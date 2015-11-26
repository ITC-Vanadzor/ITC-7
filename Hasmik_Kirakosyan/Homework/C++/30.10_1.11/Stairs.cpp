#include <iostream>

int ways (int n) {
	if (n==0 || n==1) return 1;
	 else return ways(n-1)+ways(n-2);
}

int main () {

	int n=0;
    
    do {
	std::cout<<"\n Enter the number of stairs (n is in [1,30])";
	std::cin>>n;
    } while (n<1 || n>30);

	std::cout<<"\n Number of ways to pass the "<<n<<" stairs is "<<ways(n)<<std::endl;



 return 0;
}
