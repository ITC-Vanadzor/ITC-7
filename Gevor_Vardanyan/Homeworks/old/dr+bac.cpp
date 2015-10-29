#include<iostream>
using namespace std;
void get(bool z)
{
	static int b=0,d=0,k=1;
	if(!z){
	int q;
	cout<<"Input K"<<k++<<":"<<endl;
	cin>>q;
	if(q<0) b++;
	else d++;}
	else cout<<"Drakan="<<d<<endl<<"Bacasakan="<<b<<endl;	

}
int main()
{
	cout<<"K:";
	int k;
	cin>>k;
	for(int i=0;i<k;i++) get(0);
	get(1);
	return 0;

}


