#include <iostream>


void assign (int& a, int& b) {

if (b>a) {
		b=7;
	 }
	else {
		a=7;
	     }
}
int main () {
int x=5, y=6;

assign (x,y);

std::cout<<"\nX = "<<x<<" Y = "<<y;

return 0;

}
