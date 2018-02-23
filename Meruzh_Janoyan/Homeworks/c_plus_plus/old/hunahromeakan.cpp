

#include "stdafx.h"
#include <iostream>
using namespace std;
#define N 50
int ag_num[N];
int ag_num_id=0;


int get_num(int n)
{
	for(int i=1;i<=n;i++)
	{
		int k=0;
		for(int j=1;j<=ag_num_id;j++) {if(ag_num[j]==i) k++;}
		if(k==0) return i;
		
	}

	return 0;
}

int put_num(int n)
{
	if(n==0) ag_num_id=0;
	else {
	ag_num[ag_num_id+1]=n;
	return ag_num_id+1; }
}
int main()
{
	int matrix[N][N]={0},n=0,k=1,step=1,j,i;

	cout<<"Input N(4-30): ";
	cin>>n;
	if(n>30) n=30; 
		else if(n<4) n=4;
	if(n%2) step++;

	k=int(n/2);
	j=1;
	for(i=1;i<=n;i++) 
		{
			if(i%2)	{ matrix[i][i]=j; j++;}
			else matrix[i][i]=n-j+2;
	}

	j=k;
	for(i=1;i<=k;i++)//ozhandak ank
		{
			matrix[j][n-j+1]=matrix[i][i];
			matrix[n-j+1][j]=matrix[n-i+1][n-i+1];
			j--;

		}



	for(j=1;j<=n;j++)
		for(i=1;i<=n;i++) 
		{
			put_num(0);
			if(!matrix[j][i]) {
				for(int q=1;q<=n;q++) 
					{
						if(matrix[j][q]) ag_num_id=put_num(matrix[j][q]);
						if(matrix[q][i]) ag_num_id=put_num(matrix[q][i]);
					}
				matrix[j][i]=get_num(n);}
		}

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++) cout<<matrix[i][j]<<"  ";
		cout<<endl<<endl;
	}

	getchar();
	return 0;
}

