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
	for (int i = 0; i < n ; ++i)
	{
		cin >> x[i];
		cin >> y[i];
	}
	int aj_dzax= vect_mult(x[2], y[2], x[1], y[1], x[0], y[0]);
	int aj_dzax1;
	for (int i = 4; i < n ; ++i)
	{	
		aj_dzax1 = vect_mult(x[i], y[i], x[i - 1], y[i - 1], x[i - 2], y[i - 2]);
		if (aj_dzax1 != aj_dzax) { cout << "Voch urucik"; break; }
		
	}
	system("Pause");
	return 0;
}