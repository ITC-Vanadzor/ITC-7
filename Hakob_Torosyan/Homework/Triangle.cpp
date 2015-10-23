#include <iostream>
#include <math.h>

int main()
{
double square_ABC, square_ABD, square_ADC, square_DBC;
std::cout << "Import coordinates for 3 tops of triangle" << endl;
std::cout << "Import coordinates for top A " << endl;
int x1, y1;
std::cin >> x1;
std::cin >> y1;
std::cout << "Import coordinates for top B " << endl;
int x2, y2;
std::cin >> x2;
std::cin >> y2;
std::cout << "Import coordinates for top C " << endl;
int x3, y3;
std::cin >> x3;
std::cin >> y3;
std::cout << "Import coordinates for ani D dot " << endl;
int x, y;
std::cin >> x;
std::cin >> y;
std::cout << "For triangle ABC we will have "; 
double square_ABC;
square_ABC = fabs(double ((x1-x3)*(y2-y3)-(x2-x3)*(y1-y3))/2);
std::cout << square_ABC << endl;
std::cout << "For triangle ABD we will have ";
double square_ABD;
square_ABD = fabs (double ((x1-x)*(y2-y)-(x2-x)*(y1-y))/2);
std::cout << square_ABD << endl;
std::cout << "For triangle DBC we will have ";
double square_DBC;
square_DBC = fabs (double ((x-x3)*(y2-y3)-(x2-x3)*(y-y3))/2);
std::cout << square_DBC << endl;
std::cout << "For triangle ADC we will have "; 
double square_ADC;
square_ADC = fabs (double ((x1-x3)*(y-y3)-(x-x3)*(y1-y3))/2);
std::cout << square_ADC << endl;
if( square_ABC == (square_ABD + square_DBC + square_ADC) )
{
std::cout << "D is located in ABC triangle " << endl;
}
else
std::cout << "D is not located in ABC triangle " << endl;
 
return 0;
}
