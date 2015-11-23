//amenapoqr bazmapatiky havasar e (m*n)/(amenamec bazhanarar)
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

int bazmapatik(int a,int b){
	return(a*b)/bazhanarar(a,b);
}
int main(){
	int n=0;
	int m=0;
	input(n,m);

	std::cout<<"Result..."<<bazmapatik(n,m)<<std::endl;
	
	return 0;
}


