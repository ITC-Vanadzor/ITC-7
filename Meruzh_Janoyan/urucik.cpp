#include <iostream>
using namespace std;
#define N 50
struct Cord{
	double x;
	double y;
};
Cord c[N];//keteri kordinatner
Cord v[N];//vektorner

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
	double skalyar=(v[0].x*v[1].x)+(v[0].y*v[1].y);
	bool f=true;
	if(skalyar<0) f=false;

	for(i=1;i<n-1;i++)
	{
		if(skalyar<0 && f==true) exit;
		skalyar=(v[i].x*v[i+1].x)+(v[i].y*v[i+1].y);	
		if(skalyar==-0 && f=true) skalyar=0;
	}

	if(i==n-1) cout<<"bazmankyuny urucik e!"<<endl;
	else cout<<"bazmankyuny urucik CHE!"<<endl;

	return 0;
}

