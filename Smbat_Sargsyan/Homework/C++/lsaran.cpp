#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout<<"n= ";
	cin>>n;
	int m;
	cout<<"m= ";
	cin>>m;
	int a[9]; //zangvac vory pahum e tvanshannery(0....9)
	for (int i=0; i<=9; ++i)
	{
		a[i]=0;
	}
int n1; //n tivy pahelu hamar
n1=n;
int karg;
int m1 //m tivy pahelu hamar;
m1=m;
int mtiv;
karg=1;
do
{
mtiv=m1%10;
for (int i=1; i<mtiv; ++i)
{
a[i]+= mtiv*(karg-1)*pow(10, (karg-2))+pow(10, (karg-1));
}
for (int i=mtiv-1; i>0,i<=9; ++i)
{
a[i]+= mtiv*(karg-1)*pow(10, (karg-2));
}
a[mtiv]+=mtiv*(karg-1)*pow(10, (karg-2))+1;
m1/=10;
++karg;
}
while (m1>0);
karg=1;
int ntiv;
do
{
ntiv=n1y%10;
for (int i=1; i<ntiv; ++i)
{
a[i]-= ntiv*(karg-1)*pow(10, (karg-2))+pow(10, (karg-1));
}
for (int i=ntiv-1; i>0,i<=9; ++i)
{
a[i]-= ntiv*(karg-1)*pow(10, (karg-2));
}
a[ntiv]-=ntiv*(karg-1)*pow(10, (karg-2));
n1/=10;
++karg;
}
while (n1>0);

for (int i=0; i<=9; ++i)
	{
		cout<<tvanshan[i]<<'\t';
	}

	return 0;
}
