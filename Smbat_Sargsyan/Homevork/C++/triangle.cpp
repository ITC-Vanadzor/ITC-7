#include <iostream>
#include <conio.h> // _getch()-i hamar
#include <cmath> //sqrt()-i hamar
using namespace std;
double Makeres(double Koxm1, double Koxm2, double Koxm3); //Funkcia,vory hashvum e erankyan makeres
double Koxm(double x1,double y1,double x2,double y2); //funkcia,vory hashvum e erankyan koxmy yst kordinatneri
int main()
{
	double x1,y1,x2,y2,x3,y3,x,y; //eankyan gagatneri ev ayd keti kordinatner
	cout << "Nermuceq erankyan gagatneri k-nery " << endl;
	cout << "x1= "; cin >> x1;
	cout << "y1= "; cin >> y1;
	cout << "x2= "; cin >> x2;
	cout << "y2= "; cin >> y2;
	cout << "x3= "; cin >> x3;
	cout << "y3= "; cin >> y3;
	cout << "Nermuceq trvac keti k-nery " << endl;
	cout << "x= "; cin >> x;
	cout << "y= "; cin >> y;

	double a,b,c,a1,b1,c1; // mec ev poqr erankyunneri koxmery
	a=Koxm(x1,y1,x2,y2);
	b=Koxm(x2,y2,x3,y3);
	c=Koxm(x1,y1,x3,y3);
	a1=Koxm(x1,y1,x,y);
	b1=Koxm(x2,y2,x,y);
	c1=Koxm(x3,y3,x,y);

	double mak,mak1,mak2,mak3,mak_yndhanur; // mec ev poqr erankyunneri makeresnery0
	mak=Makeres(a,b,c);
	mak1=Makeres(a,a1,b1);
	mak2=Makeres(b1,b,c1);
	mak3=Makeres(a1,c1,c);
	mak_yndhanur=mak1+mak2+mak3;
	if(mak_yndhanur <= mak)
		cout << "(x,y) kety gtnvum e erankyan hartutyan mej " << endl;
	else 
		cout <<"(x,y) kety  chi gtnvum erankyan hartutyan mej " << endl;
	_getch();
	return 0;
}
  double Koxm(double x1,double y1,double x2, double y2)
{
	double koxm;
	koxm=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return koxm;
}
 double Makeres(double Koxm1, double Koxm2, double Koxm3)
{
	double S,kisaparagic;
	kisaparagic=(Koxm1+Koxm2+Koxm3)/2;
	S=sqrt(kisaparagic*(kisaparagic-Koxm1)*(kisaparagic-Koxm2)*(kisaparagic-Koxm3));
	return S;
}
