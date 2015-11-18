#include <iostream>

using namespace std;
int main()
{
int n,m;
cout << "n= "; cin >> n;
cout << "m= "; cin >> m;
int a=n;
int i=0;
int k=0;
int tvanshan[i];
if(a>=10)
{
tvanshan[a%10] +=1;
a=a/10;
}
else 
tvanshan[a]++;
k=(m-n)%10;
for(i=0;i<=9;i++)
{ tvanshan[i]+=k; }
int mnacord=(m-n)%10;
int mnacord1=0,mnacord2=0;
if(a+mnacord <=9)
{
mnacord1=mnacord;
mnacord2=0;
}
else
{
mnacord1=a-9;
mnacord2=mnacord+a-9;
}
for(i=a+1;i<=a+mnacord1;i++)
tvanshan[i]++;
for(i=0;i<=mnacord2;i++)
tvanshan[i]++;
for(i=0;i<=9;i++)
cout << tvanshan[i] << endl;
return 0;
}

