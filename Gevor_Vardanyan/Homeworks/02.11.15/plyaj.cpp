//   Cuyc e talis qani tun ka 2 voch harevan tneri aranqum
#include <iostream>
#include <cmath>
using namespace std;

int tun(int n, int m) {
	int ash=n+1;
	int arm=(n+m)/2+1;
	cout<<"Ashoti tun@  "<<ash<<" _rdn e"<<endl;
	cout<<"Armeniin@`   "<<arm<<" _rd@"<<endl;
	int aranq=abs(ash-arm)-1;
	return aranq;
}

int main()
{
	int dzax, aj;
	cout<<"Qani tun ka Ashoti tnic dzax ? D="; cin>>dzax;
	cout<<"Qani tun ka Ashoti tnic aj ?   A="; cin>>aj;
	while((dzax+aj)%2!=0 || dzax>100 || aj>100) {
	cout<<"Nman paymanner@ chen bavararum xndrin"<<endl;
	cout<<"Qani tun ka Ashoti tnic dzax ? D="; cin>>dzax;
	cout<<"Qani tun ka Ashoti tnic aj ?   A="; cin>>aj;
	}
	int aranqi_tner=tun(dzax, aj);
	if(aranqi_tner==-1 || aranqi_tner==0) {cout<<"Nranc tneri mijev tun chka."<<endl;}
	else	cout<<"Nranc tneri mijev ka "<<aranqi_tner<<" tun."<<endl;
	return 0;
}
