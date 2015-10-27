#include <iostream>
#include <cmath>
using namespace std;
int main()
{	skizb: // sa cikli skizbn e vortex uxarkum e goto-n
	cout << "tpel 4 keteri kordinatner aynpes vor stacvi uxxankyun " << endl;
	cout << "tpel A keti kordinatner@ " << endl;
	double x1;
	cout << "x1 = ";
	cin >> x1;
	double y1;
	cout << "y1 = ";
	cin >> y1;
	cout << "tpel B keti kordinatner@ " << endl;
	double x2;
	cout << "x2 = ";
	cin >> x2;
	double y2;
	cout << "y2 = ";
	cin >> y2;
	cout << "tpel C keti kordinatner@ " << endl;
	double x3;
	cout << "31 = ";
	cin >> x3;
	double y3;
	cout << "y3 = ";
	cin >> y3;
	cout << "tpel D keti kordinatner@ " << endl;
	double x4;
	cout << "x4 = ";
	cin >> x4;
	double y4;
	cout << "y4 = ";
	cin >> y4;
	double AB = sqrt(pow((x2 -x1), 2) + pow((y2 - y1), 2)); // ays 6 banadzeverov hashvum enq  keteri erkarutyun@
     	double BC = sqrt(pow((x3 -x2), 2) + pow((y3 - y2), 2));
      	double CD = sqrt(pow((x4 -x3), 2) + pow((y4 - y3), 2));	
       	double AD = sqrt(pow((x4 -x1), 2) + pow((y4 - y1), 2));
	double AC = sqrt(pow((x3 -x1), 2) + pow((y3 - y1), 2));	
       	double BD = sqrt(pow((x4 -x2), 2) + pow((y4 - y2), 2));
	if(AB == CD && BC == AD && AC == BD) 
		cout << "dzer tpac keterov kazmvum e uxankyun" << endl;	
	else
	{	
		cout << "sxal e tpel noric" << endl;
		goto skizb; // goto-n mer cikln e vor@ paymani jisht chlinelu depqum uxarkum e ayn ket@ vortex grvac e skizb nshich@
	
	}
	
   return 0;
}
