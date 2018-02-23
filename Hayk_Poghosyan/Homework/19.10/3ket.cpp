#include <iostream>
using namespace std;

struct gagat {
	double x;
	double y;

};

int main()
{
	gagat A, B, C, D, O;
	cin >> A.x >> A.y;
	cin >> B.x >> B.y;
	cin >> C.x >> C.y;
	O.x = (A.x + C.x)/2;
	O.y = (A.y + C.y)/2;
	D.x = 2 * O.x - B.x;
	D.y = 2 * O.y - B.y;
	cout << D.x;
	cout << endl << D.y;

	system("Pause");

}