#include <iostream>
#include <cmath>

double distance (int x1, int y1, int x2, int y2) {

 	double dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 	return dist;
}

double square (int x1, int y1, int x2, int y2, int x3, int y3) {
	double area =std::abs((x2-x1)*(y3-y1)-(y2-y1)*(x3-x1));
	return area;
}
double radius (double a, double b, double c, double s) {
	double r=(a*b*c)/(2*s);
	return r;
}

int main () {

int x1, y1;
int x2, y2;
int x3, y3;

std::cout<<"Enter the coordinates of the first point ";
std::cin>>x1>>y1;

std::cout<<"Enter the coordinates of the second point ";
std::cin>>x2>>y2;

std::cout<<"Enter the coordinates of the third point ";
std::cin>>x3>>y3;

double a=distance (x1, y1, x2, y2);
double b=distance (x2, y2, x3, y3);
double c=distance (x1, y1, x3, y3);

double s=square (x1, y1, x2, y2, x3, y3);
double R=radius (a, b, c, s);

std::cout<<"\nR= "<<R;
std::cout<<"\nLength of circle is "<<2*M_PI*R;

return 0; 
}
