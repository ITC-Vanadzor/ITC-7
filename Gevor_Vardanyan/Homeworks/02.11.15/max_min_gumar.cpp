//   Hashvum e faylum kent tegherum gtnvogh tveric min_i ev zuyg tegherum gtnvogh tveric max_i gumar@
#include <iostream>
#include <cmath>
using namespace std;

void maxmin(int n) {
	int maxmin[n], gumar=0;
	cout<<"Voronq en ayd tver@ ?"<<endl;
	for(int i=0; i<n; ++i) {
		cout<<"File["<<i+1<<"]="; cin>>maxmin[i]; 
	}
	
	int min=maxmin[0];//  0..1..2..3..4..5
	int max=maxmin[1];
	for(int j=2; j<n; j+=2) {
		if(j%2) { if (maxmin[j]>max) {max=maxmin[j];} }		
		else	{ if (maxmin[j]<min) {min=maxmin[j];} }
	}
	
	cout<<"Min="<<min<<endl;
	cout<<"Max="<<max<<endl;
	cout<<"Max+min="<<max+min<<endl;	
}

int main()
{
	int n;
	cout<<"Qani tiv e grvac faylum ?  N="; cin>>n;
	while(n<2 || n>10000){
	cout<<"Mnaceq [2,10000] sahmanum"<<endl;
	cout<<"Qani tiv e grvac faylum ?  N="; cin>>n;
	}
	maxmin(n);
	return 0;
}
