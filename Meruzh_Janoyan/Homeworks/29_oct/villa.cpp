//VILLA
// hashvum e erku tneri mijev @nkats qani tun ka

#include <iostream>



void input(int &n,int &m){
	std::cout<<"N:";
	std::cin>>n;
	std::cout<<"M:";
	std::cin>>m;
}


int main(){
	int n=0;
	int m=0;
	input(n,m);

	int x=n+m+1;
	if(x%2==0){
		std::cout <<"Tneri qanaky kent chi karox linel!"<<std::endl;
		return 0;
	}
	x/=2;
	if(x>n){	
		std::cout <<"X="<<x-(n+1)<<std::endl;//n+1 qani vor ir tuny n-i mej chi mtnum
	}
	else{
		std::cout <<"X="<<x-(m+1)<<std::endl;
	}
	return 0;
}


