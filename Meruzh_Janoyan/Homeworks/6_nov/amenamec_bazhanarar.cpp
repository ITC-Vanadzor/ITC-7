//amenamec bazhanarar rekursiayov
#include <iostream>

void input(int &n,int &m){
	std::cout<<"N:";
	std::cin>>n;
	std::cout<<"M:";
	std::cin>>m;
}

int bazhanarar(int a, int b){

	int res=0;
	if(!a) return b;
	if(!b) return a;

	if(a>b){
		res=bazhanarar(a-b,b);
	}
	else if(b>a){
		res=bazhanarar(a,b-a);
	}
	else{
		return a;
	}
}


int main(){
	int n=0;
	int m=0;
	input(n,m);

	std::cout<<"Result..."<<bazhanarar(n,m)<<std::endl;
	
	return 0;
}


