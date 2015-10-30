#include <iostream>
using namespace std;
int main ()
{
	cout << " vorerord tivn eq uzum??? " << endl;
	int tiv, andam = 0, m, a = 1;
	cin >> tiv;
	m = tiv - 1;
	while (m > 0)
	{	
		andam = andam + 7 * a * (m % 2);
		a = a * 10;
		m = m / 2;
	}         
	cout << andam;              
	
	return 0;
}
