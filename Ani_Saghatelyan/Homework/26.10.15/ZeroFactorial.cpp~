// voroshum e N tvi faktorialum  verjin 0-neri qanak@

# include <iostream>
# include <cmath>
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
        int astichan=1;
            while(pow(5,astichan)<=N){
		zero+=N/pow(5,astichan);
                astichan++;
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
	//ZeroCount(factorial);
	ZeroCountWithFlags(N);
	
	return 0;
}
