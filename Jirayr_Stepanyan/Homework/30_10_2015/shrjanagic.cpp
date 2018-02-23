#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;

double center() 
{
	double a[3][2];
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0;j < 2; ++j)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
	double ma = (a[1][1] - a[0][1]) / (a[1][0] - a[0][0]);
	double mb = (a[2][1] - a[1][1]) / (a[2][0] - a[1][0]);
	double y = (ma * mb * (a[0][0] - a[2][0]) + mb * (a[0][1] + a[1][1]) - ma * (a[1][1] + a[2][1])) / (2 * (mb - ma));
	double x = (ma * mb * (a[0][1] - a[2][1]) + mb * (a[0][0] + a[1][0]) - ma * (a[1][0] + a[2][0])) / (2 * (mb - ma));
	double r = sqrt(((a[0][0] - x)  * (a[0][0] - x)) + ((a[0][1] - y)  * (a[0][1] - y)));

  return 2 * r * pi;
}

int main()
{

cout << center() << endl;	
return 0;
}
