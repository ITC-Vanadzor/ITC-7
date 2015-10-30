#include <iostream>
using namespace std;
int main()
{
	int tiv = 0, erkusi_astijan = 2;
	while(tiv <= 0)
	{
		cout << "tpel voreve bnakan tiv ";
		cin >> tiv;
	}
	while(erkusi_astijan <= tiv)
	{
		erkusi_astijan *= 2;
	}
	cout << tiv << "-ic mec amenapoqr 2-i astijan@ = " << erkusi_astijan << endl;
	
return 0;
}
