#include <iostream>
#include <cmath>
using namespace std;
int tneri_mijakayq(int a, int b)
{
	return (a  > b) ? ((a + b + 1) / 2) - (b + 1) : abs((((a + b + 1) / 2) + 1) - b);
}
int main()
{
	int n = 0, m = 0;
	while(n <= 0 && m <= 0)
	{
		cout << "tpel Ashoti tnic depi dzax tneri qanak@ (drakan amboxj tiv) ";
		cin >> n;
		cout << "tpel Ashoti tnic depi aj tneri qanak@ (drakan amboxj tiv) ";
		cin >> m;
	}
	int mijakayq = tneri_mijakayq(n, m);
	cout << "Ashoti ev Armeni tneri mijev ka " << mijakayq << " tun " << endl;

   return 0;
}
