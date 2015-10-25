// erank_mak.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define N 50
int _tmain(int argc, _TCHAR* argv[])
{
	int arr[N]={0},i,k=0,n,er=0;
	
	cout<<"input N:(1-50)-->";
	cin>>n;
	if(n>50) n=50;
	else if(n<1) n=1;
	
	
	if(n>1){
	for(i=0;i<n;i++) { arr[i]=k+(i+1); k+=i+1; }

	for(i=0;i<n;i++) er+=arr[i];
	for(i=n-2;i>=0;i-=2) er+=arr[i];}
	else er=1;

	cout<<"N: "<<n<<"  -->"<<er<<endl;


	return 0;
}

