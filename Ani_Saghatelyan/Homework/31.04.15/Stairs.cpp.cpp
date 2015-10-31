#include <iostream>

int CountOfWays (int n) {
	if(n<=1){
		return 1;
	   }
	else{
		 return CountOfWays (n-1)+CountOfWays (n-2);
	}
}

int main () {

	int n=-1;
	do{

	std::cout<<"\n Enter the quantity of stairs\t ";
	std::cin>>n;
	}while(n<=0);

	std::cout<<"\n The countof  ways for passsing the "<<n<<"-th stairs will be "<<CountOfWays(n)<<std::endl;

 return 0;
}