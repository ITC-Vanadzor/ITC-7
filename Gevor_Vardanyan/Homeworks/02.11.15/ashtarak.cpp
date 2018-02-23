//   Hashvum e n tvov ashtarakner@ havasarecnelu min qaylerei qanak@
#include <iostream>
#include <cmath>
using namespace std;

void ashtarak(int n) {
	int Ashtarak[n], cub=0; //cub_@ bolor xoranardneri qanakn e
	cout<<"Nermuceq ashtarakneri barcrutyunner@` mnalov [1,100] sahmanum"<<endl;
	for(int i=0; i<n; ++i) {
		do {cout<<"Ashtarak["<<i+1<<"]="; cin>>Ashtarak[i]; 
		   cub+=Ashtarak[i]; }
		while(Ashtarak[i]<1 || Ashtarak[i]>100);
	}
	
	if(cub%n!=0) {cout<<"Nman barcrutyunnerov "<<n<<" ashtarak chen karogh havasarvel"<<endl;}
	else {
		int voske_mijin=cub/n, sum=0;	//sum_@ teghapoxveliq cuberi qanakn e
		for(int j=0; j<n; ++j) {
			if (Ashtarak[j]>voske_mijin) {sum+=(Ashtarak[j]-voske_mijin);}
		}
		cout<<"  Voske mijin="<<voske_mijin<<endl;
		cout<<"Ashtarakner@ khavasarven min "<<sum<<" xoranard teghapoxelov."<<endl;
	
	     }
}

int main()
{
	int n;
	cout<<"Qani ashtarak e karucel Ashotik@ ?  N="; cin>>n;
	while(n<1 || n>50){
	cout<<"Mnaceq [1,50] sahmanum"<<endl;
	cout<<"Qani ashtarak e karucel Ashotik@ ?  N="; cin>>n;
	}
	if(n==1) {cout<<"1 ashtaraki vra el inch@ havasaracvi ?"<<endl;}
	else	 ashtarak(n);
	return 0;
}
