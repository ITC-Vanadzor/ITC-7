#include <iostream>
#include <cmath>
using namespace std;
int krknaki_faktorial(const int &a)
{
	if(a < 3)
	{
		return a;
	}
	else
	{
		return a * krknaki_faktorial(a - 2);
	}
}
int main()
{
	int x = 0;
	while(x <= 0)
	{
		cout << "tpel voreve bnakan tiv n = ";
		cin >> x;
	}
	cout << "n-i krknaki faktorial@ = " << krknaki_faktorial(x) << endl;

  return 0;
}
