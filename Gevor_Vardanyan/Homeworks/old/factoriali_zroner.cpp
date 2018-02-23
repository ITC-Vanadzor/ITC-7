//Factoriali zroneri qanak

#include <iostream>
using namespace std;

int main(){

	int n;
	cout<<"Nermuceq stughvogh tiv@:   ";
	cin>>n;
	while(n<1 || n>40000000) {cout<<"Nermuceq tiv [1,40000000] mijakayqic"<<endl;
	cout<<"Nermuceq stughvogh tiv@:   ";
	cin>>n; }

	//factoriali verjum '0' avelacnogh@  '5'-n e ==>
	int zroner=n/5;
	if(zroner==0) cout<<n<<"!_ @ 0-ov chi verjanum"<<endl;
	  else cout<<" "<<n<<"!_ @ verjanum e "<<zroner<<" hat 0-ov"<<endl;
	return 0;
}
