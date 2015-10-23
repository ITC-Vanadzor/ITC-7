#include <iostream>
using namespace std;

struct gagat {
	double x;
	double y;

};
 double chap(double x1, double y1, double x2, double y2) {
	return  (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
}
int main() 
{
	gagat A,B,C,D,O;
	cin >> A.x >> A.y;
	cin >> B.x >> B.y;
	cin >> C.x >> C.y;
	cin >> D.x >> D.y;
	O.x = A.x + C.x ;
	O.y = A.y + C.y ;
	if ((O.x - (B.x + D.x) < 0.000001) && (O.y - (B.y + D.y) < 0.000001) && (chap(A.x, A.y, C.x, C.y) - chap(B.x, B.y, D.x, D.y) < 0.000001))
		cout << "Uxankyun"; else cout << "Uxankyun che";
	
	system("Pause");

}