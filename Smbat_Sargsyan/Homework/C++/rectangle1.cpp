#include <iostream>
#include <cmath>

using namespace std;
double Koxm(double x1,double y1,double x2,double y2);
int main()
{
	double x,y,x1,y1,x2,y2,x3,y3;
	cout << "Nermuceq 3 keteri kordinatnery " << endl;
	cout << "x1= "; cin >> x1;
	cout << "y1= "; cin >> y1;
	cout << "x2= "; cin >> x2;
	cout << "y2= "; cin >> y2;
	cout << "x3= "; cin >> x3;
	cout << "y3= "; cin >> y3;
	cout << "Nermuceq (x,y) keti kordinatnery " << endl;
	cout << "x= "; cin >> x;
	cout << "y= "; cin >> y;
	double ej1,ej2,ej3,ej4,nerqnadzig,b,c;
	ej1=Koxm(x1,y1,x2,y2);
	ej2=Koxm(x2,y2,x3,y3);
	ej3=Koxm(x3,y3,x,y);
	ej4=Koxm(x,y,x1,y1);
	nerqnadzig=Koxm(x1,y1,x3,y3);
	b=ej1*ej1+ej2*ej2;
	c=ej3*ej3+ej4*ej4;
	if((b==nerqnadzig*nerqnadzig) && (c==nerqnadzig*nerqnadzig))
		cout << "( " << x << "," << y << " )  kety uxxanyan 4-rd ketn e " ;
	else cout << "Voch!! " ;
	return 0;
}
double Koxm(double x1,double y1,double x2,double y2)
{
	double koxm;
	koxm=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return koxm;
}



