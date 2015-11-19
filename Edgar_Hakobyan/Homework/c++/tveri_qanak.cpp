#include <iostream>
using namespace std;
int main()
{
	int n,m,a,i;	
	int tvanshan[]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	cout<<"n="; cin>>n;
	cout<<"m="; cin>>m;
	for(i=n;i<=m;++i)
	{
	a=i;
	while (a>=10)
	{
		tvanshan[a%10]++;
		a=a/10;
	}
	tvanshan[a]++;
	}
	for(i=0;i<10;i++)
	cout<<tvanshan[i]<<" ";
	return 0;
}
