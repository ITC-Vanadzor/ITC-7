#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x1 = 1, y1 = 1; // A keti kordinatner
	double x2 = 1, y2 = 8; // B keti kordinatner
	double x3 = 5, y3 = 8; // C keti kordinatner
	cout << "keteri kordinatnern en A(1,1) B(1,8) C(5,8)" << endl;
	double x4, y4;
	double AB, BC, CD, AD;
	while(AB != CD && BC != AD)
	{
		cout << "tpel D keti kordinatner@ aynpes vor stacvac patker@ lini uxxankyun " << endl;
		cout << "x4 = ";
		cin >> x4;
		cout << "y4 = ";
		cin >> y4;
		AB = sqrt(pow((x2 -x1), 2) + pow((y2 - y1), 2)); // ays 4 banadzeverov hashvum enq  keteri erkarutyun@
	        BC = sqrt(pow((x3 -x2), 2) + pow((y3 - y2), 2));
	        CD = sqrt(pow((x4 -x3), 2) + pow((y4 - y3), 2));	
	        AD = sqrt(pow((x4 -x1), 2) + pow((y4 - y1), 2));
	}
	cout << "dzer tpac kordinatnerov stacvum e uxxankyun " << endl;

   return 0;	
}

