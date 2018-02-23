#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int n,k;
	cout<<"N:"; cin>>n;
	cout<<"K:"; cin>>k;

	int q=0;
	bool sign=false;
	if((n<0 && k>0) || (n>0 && k<0)) {
					   sign=true;
					  }

	n=abs(n); k=abs(k);
	while(n>=k)
		{
			n-=k;
			q++;
		}
	if(sign) {
			q*=-1;
			cout<<"N/K="<<q<<endl;
		 } 
	 else	cout<<"N/K="<<q<<" [mnacord "<<n<<"]"<<endl;
	return 0;
}
