#include <iostream>

int main()
{
std::cout << "Import coordinates for 3 tops of possible rectangle " << endl;
std::cout << "Import coordinates for top A " << endl;
float x1, y1;
std::cin >> x1;
std::cin >> y1;
std::cout << "Import coordinates for top B " << endl;
float x2, y2;
std::cin >> x2;
std::cin >> y2;
std::cout << "Import coordinates for top C " << endl;
float x3, y3;
std::cin >> x3;
std::cin >> y3;
float x4, y4;
//from summing of to vectors which tops is A and B for first vector, 
//and A and C for second vector we can get coordinates of D top of rectangle
//x4 = (x2-x1) + (x3-x1) +x1, and y4 = (y2-y1) + (y3-y1) +y1
std::cout << "For top D we will have " << "x4 = " << x2 - x1 + x3 << "," << "y4 = " << y2-y1 + y3 << endl; 
return 0;
}
