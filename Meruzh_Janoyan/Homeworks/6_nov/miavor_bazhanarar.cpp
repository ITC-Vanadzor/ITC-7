//Miavor bazhanarar
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


void print_bit(char *nm,int res){

	if(!res){
		std::cout<<"No result! (Or result:1)"<<std::endl;
		return;
	}
	std::cout<<nm<<"["<<res<<"]-->";

	for(int i=0;i<res;++i){
		std::cout<<"1";
	}

	std::cout <<std::endl<<std::endl;
}


int main(){
	int n=0;
	int m=0;
	input(n,m);
	print_bit("N",n);
	print_bit("M",m);

	int result=bazhanarar(n,m);

	print_bit("Result",result);
	
	return 0;
}


