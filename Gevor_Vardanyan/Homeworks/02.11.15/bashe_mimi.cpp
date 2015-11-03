// "Hetaqrir xagh"
#include <iostream>
#include <cmath>
using namespace std;

void win(int a, int b) {
	if(a%2==0 && b%2==0) {cout<<"Khaghti Armen@"<<endl;}
	else		     {cout<<"Khaghti Arman@"<<endl;}
}

int main()
{
	int a,b;
	cout<<"Qani @nkuyz ka amen mi kuytum ?"<<endl;
	cout<<"A="; cin>>a;
	cout<<"B="; cin>>b;
	while(a<1 || a>100 || b<1 || b>100) {
		cout<<"Mnaceq [1,100] sahmanum"<<endl;
		cout<<"A="; cin>>a;
		cout<<"B="; cin>>b;
	}
	win(a,b);
	return 0;
}
