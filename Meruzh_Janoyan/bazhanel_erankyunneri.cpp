#include <iostream>
using namespace std;
#define N 50
struct Cord{
	double x;
	double y;
};
Cord c[N];//keteri kordinatner
Cord v[N];//vektorner
bool f;//skalyari nshan

double calc_skalyar(int i)
{
	double s=(v[i].x*v[i+1].x)+(v[i].y*v[i+1].y);
	if(s==-0 && f==true) return 0;
	return s;
}
int main()
{

	int i,n;//ankyunneri qanak
	cout<<"N:";
	cin>>n;

	for(i=0;i<n;++i)//kordinatneri nermucum
	{
		cout<<i<<" [x]:";
		cin>>c[i].x;
		cout<<i<<" [y]:";
		cin>>c[i].y;
	}
	/////////////////////////////////////////////////
	for(i=0;i<n-1;i++)//vektorneri kordinatneri stacum
	{
		v[i].x=c[i+1].x-c[i].x;
		v[i].y=c[i+1].y-c[i].y;
	}
	v[i].x=c[0].x-c[i].x;
	v[i].y=c[0].y-c[i].y;
	/////////////////////////////////////////////////
	double s=calc_skalyar(1);
	if(s<0) f=false;
	else f=true;

	int counter=1;
	for(i=0;i<n;i++)
	{
		s=calc_skalyar(i);
		if((s>=0 && f==true) || (s<0 && f==false)) 
			{
				cout<<"Triangle "<<counter++<<" ["<<i<<"->"<<i+1<<"->"<<i+2<<" ]"<<endl;
				i++;
		}
		
	}

	

	return 0;
}

