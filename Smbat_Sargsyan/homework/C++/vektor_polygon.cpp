#include <iostream>
#include <cstdlib>
using namespace std;
double vektorakan (double x1, double y1, double x2, double y2, double x3, double y3)
	{
		return (x2-x1)*(y3-y2)-(x3-x2)*(y2-y1);
	}
int main()
{
	int n;
	cout << "n= ";
	cin >> n;
	int ket[2][n];
	cout << "Mutqagrenq keteri koordinatner@" << std::endl;
	for (int j=1; j<=n; ++j)
	{
		cout <<"x" << j << "= ";
		cin >> ket[1][j];
		cout << "y" << j << "= ";
		cin >> ket[2][j];
	}
	bool a;
	double payman=vektorakan(ket[1][1], ket[2][1], ket[1][2], ket[2][2], ket[1][3], ket[2][3]);
	if (payman>0)
	{
	a= true;
	}
	else
	{
		a = false;
	}
	
	int j=2;
	do
	{
		if ((payman > 0 && a) || (payman < 0 && a))
		{
		++j;
		}
		else
		{
			cout << "trvac keterov chi kkarucvi urucik bazmankyun";
			exit(1);
		}
	}
	while (j<=(n-2));
	cout << "trvac keterov kkarucvi urucik bazmankyun" << endl;
	return 0;
}
