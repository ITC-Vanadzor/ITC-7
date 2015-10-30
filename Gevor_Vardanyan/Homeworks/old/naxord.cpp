#include<iostream>
using namespace std;
void f()
{
	static int d=0,b=0;
	cout<<"K:";
	int k;
	cin>>k;
	
	if(k>=0) { d=k; cout<<"Naxord bacasakan="<<b<<endl;}
	else { b=k; cout<<"Naxord drakan="<<d<<endl;}



}
int main()
{
	int n;
	cout<<"Nermuceq hajordakanutyan andamneri qanak@";
	cin>>n;
	for(int i=0; i<=n-1; i++) f();
	return 0;

}


