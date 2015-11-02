//ex16   @nkuyznerov xax
//@st nermucvac A,B-i voroshum e haxtoxin

#include <iostream>



void input(int &a,int &b){
	std::cout<<"A:";
	std::cin>>a;
	std::cout<<"B:";
	std::cin>>b;
}

int main(){
	int a=0;
	int b=0;
	input(a,b);

	if(a+b<3){
		std::cout<<"Khaxti arajin xaxacoxy!"<<std::endl;
	}
	else if(a%2==0 && b%2==0){
		std::cout<<"Khaxti erkrord xaxacoxy!"<<std::endl;
	}
	else{
		std::cout<<"Khaxti arajin xaxacoxy!"<<std::endl;
	}


	return 0;
}


