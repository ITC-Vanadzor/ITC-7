

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

#define N 50
int _tmain(int argc, _TCHAR* argv[])
{
	int n=0,k=1,q;
	int bazm[N];
	cout<<"Input N:(3-8)";
	cin>>n;
	if(n<3) n=3;
	else if(n>8) n=8;
	cout<<"N: "<<n<<" _____________entabazmutyunner__________"<<endl;
	for(int i=0;i<n;i++) bazm[i]=i+1;
	q=2;
	for(int i=1;i<n;i++) q*=2;

	for(int i=0;i<q;i++)
	{
		cout<<"{ ";
		for(int j=0;j<n;j++)	
		{
			if(i&k)		cout<<bazm[j]<<" ";			
			k<<=1;
		}
		cout<<" }"<<endl;
		k=1;
	}
	return 0;
}

