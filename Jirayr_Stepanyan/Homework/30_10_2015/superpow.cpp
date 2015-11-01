#include <iostream>
using namespace std;
void superrow(int a, int b)
{
	int x = 1;
	for(int i = 0; i < a; ++i)
	{
		x = (x << 1) % b;
	}
	cout << "SR mod m = " << x << endl;
}
int mutq()
{
	int gerastijan = 0, mod = 0;
	while(gerastijan < 0 || mod <= 0)
	{
		cout << "tpel 2-i gerastijan@ SR = ";
		cin >> gerastijan;
		cout << "tpel mod@ ";
		cin >> mod;
	}
	int k = (1 << gerastijan);
	superrow(k, mod);
}
int main()
{
	mutq();

   return 0;
}
