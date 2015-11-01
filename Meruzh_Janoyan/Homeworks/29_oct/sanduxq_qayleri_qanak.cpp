//EX09  sanduxq
// biteri dasavorutyuny vorpes qayl @ndunelov generacnum e
// bolor hnaravor qaylery
#include <iostream>

int arr[100000]={0};

void input(int &n){
	std::cout<<"Nermuceq astichanneri qanaky (1<=n<30) N:";
	std::cin>>n;
}

int push(int k){//texadrum e k-n arr[]-i mej, aranc krknutyan
	static int count=0;
	int i=0;
	for(;i<count;++i){
		if(arr[i]==k){
			return count;
		}
	}
	arr[i]=k;
	return ++count;
}

int calc(int z,int number, int n){//@st namber-i biteri generacnum e qayleri hajordakanutyun
	int step=0;
	int i=0;
	int k=0;
	for(i=0;i<n;i++){
		if((1<<i)&number){
			k=k|(1<<i);
			step+=2;
		}else{
			++step;
		}
		if(step==n){
			push(k);
			return 1;
		}
	}
	return 0;
	}



int main(){
	int n=0;
	input(n);

	int zuygeri_qanak=n/2;
	int max_limit= (1<<n);//pow(2,n)
	int sum=0;
	for(int i=0;i<max_limit;++i){
		sum+=calc(zuygeri_qanak,i,n);
	}
	std::cout <<"hnaravor tarberakneri qanaky:"<<push(0)<<std::endl;
return 0;
}