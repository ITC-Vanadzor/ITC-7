//   Qani hnaravor dzevov kareli e barcranal sandughq@ `katarelov 1 kam 2 qayl
#include <iostream>
#include <cmath>
using namespace std;

int nardivan(int n) {
	int fibo=(pow(((1+sqrt(5))/2),(n+1))-pow(((1-sqrt(5))/2),(n+1)))/sqrt(5);
	return fibo;
}

int main()
{
	int s;
	cout<<"Sandughqi astichanner@ karogh en linel min=1, max=30"<<endl;
	cout<<"Qani astichan uni sandughq@ ? S="; cin>>s;
	while(s<1 || s>30) {
	cout<<"Mnaceq sahmannerum"<<endl;
	cout<<"Qani astichan uni sandughq@ ? S="; cin>>s;
	}
	int m=nardivan(s);
	cout<<s<<" astichan unecogh sandughq@ kareli e ancnel "<<m<<" dzevov."<<endl;
	return 0;
}
