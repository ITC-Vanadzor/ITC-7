//double factorial
#include <iostream>

void input(int &n){
	std::cout<<"N:";
	std::cin>>n;
}

int double_fact(const int &n){
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 2;
	}
	else{
		return n*double_fact(n-2);
	}
}

int main(){
	int n=0;
	input(n);

	std::cout<<"N!! ->"<<double_fact(n)<<std::endl;
	
	return 0;
}


