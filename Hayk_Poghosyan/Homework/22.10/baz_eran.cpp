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
	int k = 0;
	int erku=2;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i];
		cin >> y[i];
	}
	

	for (int i = 0; i < n - 1; i++)
	{
		if (i == n - 2) 
		{
			erku = -i;
		}
		
		if (x[i] != 666)
		{	
		
			if (vect_mult(x[i+erku], y[i+erku], x[i + 1], y[i +1], x[i], y[i]) == 1)
			{
				cout << i << " -> " << i + 2 << endl;
				x[i + 1] = x[i + 2]; ++i;
			}
		}
		if (i >= n -2 && k ==0) { i = 0; k++; }
	}
	
	system("Pause");
}