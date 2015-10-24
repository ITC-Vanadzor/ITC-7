#include <iostream>
#include <cmath>
using namespace std;

class gagat {
public:
	int	x;
	int y;
};
long double kis_par(long double a, long double b, long double c) {
	return a / 2 + b / 2 + c / 2;
}
long double chap(int x1, int y1, int x2, int y2) {
	return  sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}
long double makeres(long double a, long double b, long double c) {
	long double p_kes = kis_par(a, b, c);
	return sqrt(p_kes*(p_kes - a)*(p_kes - b)*(p_kes - c));
}
bool stugel(long double a, long double b, long double c) {
	if ((a + b <= c) || (a + c <= b) || (c + b <= a))  return false; 
	else return true;
}
int main() {
	gagat A, B, C, X;
	cout << "A-i kordinatner@\n";
	cin >> A.x >> A.y;
	cout << "B-i kordinatner@\n";
	cin >> B.x >> B.y;
	cout << "C-i kordinatner@\n";
	cin >> C.x >> C.y;
	cout << "D-i kordinatner@\n";
	cin >> X.x >> X.y;
	long double dAB = chap(A.x, A.y, B.x, B.y);
	long double dBC = chap(B.x, B.y, C.x, C.y);
	long double dCA = chap(C.x, C.y, A.x, A.y);
	long double dXA = chap(X.x, X.y, A.x, A.y);
	long double dXB = chap(X.x, X.y, B.x, B.y);
	long double dXC = chap(X.x, X.y, C.x, C.y);
	if (!stugel(dAB, dBC, dCA))cout << "sxal kordinatner";
	long double Smec = makeres(dAB, dBC, dCA);
	long double S1 = makeres(dAB, dXB, dXA);
	long double S2 = makeres(dBC, dXC, dXB);
	long double S3 = makeres(dXA, dXC, dCA);
	if (roundl(Smec) == roundl(S1 + S2 + S3))cout << "MEJNE";

	

	system("Pause");
}