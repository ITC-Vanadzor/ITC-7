//ktrtel erankyunneri
#include <iostream>
using namespace std;
#define n 8
int vect_mult(int x2, int y2, int x1, int y1, int x0, int y0)
{
	int vect_a_x = x1 - x0;
	int vect_a_y = y1 - y0;
	int vect_b_x = x2 - x1;
	int vect_b_y = y2 - y1;
	if ((vect_a_x*vect_b_y) - (vect_a_y*vect_b_x) > 0)return 0; else return 1;

}


int main()
{
	int x[n];
	int y[n];
	bool t_f[n];
	cout << "nermuceq 8 ankyan kordinatner@ jamslaxi uxutyamb/n";
	for (int i = 0; i < n; ++i)
	{
		cout << "x[i]=";
		cin >> x[i];
		cout << "x[i]=" ;
		cin >> y[i];
		t_f[n] = true;
	}
	

	for (int i = 0; i < n - 1; ++i)
	{
		if (t_f[i])

		{
			for (int a = i + 2; a < n - 1; ++a)
			{
				if (vect_mult(x[i + a], y[i + a], x[i + 1], y[i + 1], x[i], y[i]) == 1)
				{
					cout << i << " -> " << i + a << endl;
					t_f[i + a] = false;
				}
				else
				{
					break;
				}
			}
		}
	}
	
	system("Pause");
}