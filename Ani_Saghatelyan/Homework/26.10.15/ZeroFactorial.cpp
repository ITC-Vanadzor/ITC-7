// voroshum e N tvi faktorialum  verjin 0-neri qanak@

# include <iostream>
using namespace std;

int Factorial(int n){
	if(n==1){
		return 1;
	}
	else  return n* Factorial(n-1);
};


void  ZeroCount(int Factorial){
		int zeroCount=0;
			while(Factorial%10==0){
					zeroCount++;
					Factorial/=10;
					}
	cout<<"The count of Zero's will be\t"<<zeroCount<<endl;
};

void ZeroCountWithFlags( int N){
	int zero=0;

		for(int i=0; i<=N; ++i){
			int flag2=0;
				if(i%2==0){
						flag2++;
						}
		int flag5=0;
				if(i%5==0){
						flag5++;
						}
		if((flag2==flag5)&&(flag2!=0)){//flag2!=0, vorpeszi 0=0 depq@ bacasenq
				zero++;
			}
	}
	cout<<"The count of Zero's will be  "<<zero<<endl;


};


int main()
{
   int N=0;
	cout<<"Enter N\t";
	cin>>N;
	while(N<=0){
		cout<<"Please ReEnter N, as it could be more than 0\n";
		cin>>N;
	}
    int factorial=Factorial( N);
	cout<<factorial<<endl;
	ZeroCount(factorial);
	ZeroCountWithFlags(N);
	
	return 0;
}