#include <iostream>
#include <math.h>

using namespace std;

double Koxm(double X1, double Y1, double X2, double Y2)
{
	return sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1)); 
}

double mutq(string name)
{
	double kordinat;
	cout << name << "=";
	cin >> kordinat;
	return kordinat;
}
int main()
{
	double X1 = mutq ("X1");
	double Y1 = mutq ("Y1");
	double X2 = mutq ("X2");
	double Y2 = mutq ("Y2");
	double X3 = mutq ("X3");
	double Y3 = mutq ("Y3");
	double X4 = mutq ("X4");
	double Y4 = mutq ("Y4");
double	a=Koxm(X1,Y1,X2,Y2);	
double	b=Koxm(X2,Y2,X3,Y3);
double	c=Koxm(X3,Y3,X4,Y4);
double	d=Koxm(X4,Y4,X1,Y1);
double	k1=Koxm(X1,Y1,X3,Y3);	
double	k2=Koxm(X2,Y2,X4,Y4);
	if ((a==c) && (b==d) && (k1==k2))
	cout<<"Ուղղանկյուն է"<<endl;
	else cout<<"Ուղղանկյուն չէ"<<endl;
return 0;
}
