#include <iostream>

using namespace std;


double vector(double X1,double Y1,double X2,double Y2)
	{
		return (X1*Y2)-(X2*Y1);
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


double a=vector(X1,Y1,X2,Y2);
double b=vector(X2,Y2,X3,Y3);
double c=vector(X3,Y3,X4,Y4);
double d=vector(X4,Y4,X1,Y1);
if (a>0 && b>0 && c>0 && d>0)                             //((a>0 && b>0 && c>0) || (a<0 && b<0 && c<0))
    {
	std::cout << "urucik bazmankyun e" << std::endl;	
    }
	else 
	{
		std::cout << "urucik bazmankyun che" << std::endl;
	}

   return 0;
}
