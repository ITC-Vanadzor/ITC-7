#include <iostream>

int ways (int n) {
	if (n==0 || n==1) return 1;
	 else return ways(n-1)+ways(n-2);
}

int main () {

	int n=0;

	std::cout<<"\n Enter the number of stairs ";
	std::cin>>n;

	std::cout<<"\n Number of ways to pass the "<<n<<" stairs is "<<ways(n)<<std::endl;



 return 0;
}
