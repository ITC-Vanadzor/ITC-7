#include <iostream>
using namespace std;
int vektorakan (int x1, int y1, int x2, int y2, int x3, int y3)
	{
		return (x2-x1)*(y3-y2)-(x3-x2)*(y2-y1);
	}
int main()
{
	int n;
	cout << "n= ";
	cin >>n;
	int ket[2][n];
	cout << "Mutqagrenq keteri koordinatner@"<<endl;
	for (int j=1; j<=n; ++j)
	{
		cout <<"x" << j << "= ";
		cin >> ket[1][j];
		cout <<"y" << j << "= ";
		cin >> ket[2][j];
	}
	
	int aj;
	aj=0;
	int dzax;
	dzax=0;
	int j=1;
	do
	{
		if (vektorakan(ket[1][j], ket[2][j], ket[1][j+1], ket[2][j+1], ket[1][j+2], ket[2][j+2])>0)
		{
			++dzax;
		}
		else
		{
			++aj;
		}
		++j;
	}
	while (j<=(n-2));
	if ((aj==0) || (dzax==0))
	{
		cout << "trvac bazmankyunn urucik e"<<endl;
	}
	else
	{
		cout << "trvac bazmankyunn urucik che"<<endl;
	}
	return 0;
}

