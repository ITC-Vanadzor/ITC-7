#include <iostream>
#include <math.h>
#include <string>
#include <limits>
using namespace std;

double Koxm(double X1, double Y1, double X2, double Y2)
{

return sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1)); 

}

double Makeres(double a, double b, double c)

{
     
    double P= ((a+b+c)/2);
    return sqrt (P*(P-a)*(P-b)*(P-c));
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
	double  X = mutq ("X");
	double  Y = mutq ("Y");
	
     double a= Koxm (X1 ,Y1, X2, Y2);
     double b= Koxm (X1 ,Y1, X3, Y3); 
     double c= Koxm (X2 ,Y2, X3, Y3);
    double da= Koxm (X1 ,Y1, X, Y);
    double db= Koxm (X2 ,Y2, X, Y); 
    double dc= Koxm (X3 ,Y3, X, Y);

      double S = Makeres ( a, b, c );
     double S1 = Makeres ( a, b, da );
     double S2 = Makeres ( b, c, db );
     double S3 = Makeres ( c, a, dc );
 
     if (S-(S1+S2+S3)<numeric_limits<double>::epsilon() && S-(S1+S2+S3)>0) 
	
	    cout << " Kety patkanum e erankyany " << endl;
	else 
	    cout << " Kety chi patkanum erankyany " << endl;
 	
return 0;
}
