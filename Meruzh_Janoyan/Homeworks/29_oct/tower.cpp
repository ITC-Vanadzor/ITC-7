//Tower
#include <iostream>

void input(int h[]){
	std::cout<<"N (0 < n < 51):";
	std::cin>>h[0];

	std::cout<<"nermuceq zangvac->";
	for(int i=1;i<=h[0];++i){
		std::cin>>h[i];
	}
}

int mijin_arzheq(int h[]){
	int sum=0;
	for(int i=1;i<=h[0];++i){
		sum+=h[i];
	}
	return (sum%h[0])?0:sum/h[0];
}
int qayleri_qanak(int h[],int mijin){
	int minus=0;
	int plus=0;
	for(int i=1;i<=h[0];++i){
		if(h[i]>mijin){
			minus+=h[i]-mijin;
		}
		else if(h[i]<mijin){
			plus+=mijin-h[i];
		}
	}
	return (plus-minus)?abs(plus-minus):plus;
}
int main(){
	
	int h[50]={0};
	input(h);
	int mijin=mijin_arzheq(h);
	if(!mijin){
		std::cout<<std::endl<<"hnaravor che havasarecnel!"<<std::endl;
		return 0;
	}

	
	std::cout<<std::endl<<"Qayleri qanaky "<<qayleri_qanak(h,mijin)<<std::endl;
	
	return 0;
}


