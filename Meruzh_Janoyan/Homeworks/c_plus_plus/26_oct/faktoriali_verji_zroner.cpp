//faktoriali verjin zroneri qanak
#include <iostream>


int input_number(){
	int n=0;
	std::cout<<"N:";
	std::cin>>n;
	return n;
}

int main(){

	int n=input_number();
	int ZroneriQanak=0;
	int k=5;

	while(n/k>0){
		ZroneriQanak+=n/k;
		k*=5;
	}
	std::cout<<"N!-i verji zroneri qanak:"<<ZroneriQanak<<std::endl;
	
	return 0;
}