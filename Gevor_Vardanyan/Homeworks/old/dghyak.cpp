//Dghyak

#include <iostream>
using namespace std;

int main(){

	int himq, hark;
	cout<<"Qani ankyun uni bazmankyun@:   ";
	cin>>himq;
	while(himq<3 || himq>300) {cout<<"Bazmankyan koghmer@ karogh en linel: min=3; max=300"<<endl;
	cout<<"Qani ankyun uni bazmankyun@:   ";
	cin>>himq; }
	cout<<"Qani makardak uni dghyak@:     ";
	cin>>hark;	
	while(hark<1 || hark>1000) {cout<<"Dghyaki harker@ karogh en linel: min=1; max=1000"<<endl;
	cout<<"Qani makardak uni dghyak@:     ";
	cin>>hark; }

	int senyakner=himq;
	for(int i=2; i<=hark; ++i) {

		senyakner+=(i*(himq-2)+1);
	}

	cout<<" "<<hark<<" harkani dghyakn uni "<<senyakner<<" senyak."<<endl;
	return 0;
}
