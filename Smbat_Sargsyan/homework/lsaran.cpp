#include <iostream>
#include <cmath>
using namespace std;
int n,m,i;
int karg,mnacord;
int a[9];
void F(int a[i],int m) //F funkcian hashvum e 1-ic minchev m(n) exac tvanshanneri qanaky amen mi tvanshani hamar
{
    do
        k=n/10;
        karg++;
        k=n;
    } while(k>0);
    mnacord=mnacord%10;
    for(i=1;i<mnacord;i++)
       { a[i]=a[i]+mnacord*(karg-1)*pow(10, (karg-2))+pow(10, (karg-1)); }
    for(i=mnacord;i<=9;i++)
    { a[i]=a[i]+(karg-1)*pow(10, (karg-2)); }
    return a[i];
}
int main()
{
	cout<<"n= ";
	cin>>n;
	cout<<"m= ";
	cin>>m;
	for (int i=0; i<=9; ++i)
	{
		a[i]=0;
	}
	F(a[i],n);
	F(a[i],m);
	a[i]=F(m,a[i])-F(n,a[i]);
	cout << a[i] << endl ;
	retrn 0;
}
