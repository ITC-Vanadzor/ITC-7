#include <iostream>
using namespace std;
void gushak(const int a, const int b)
{
	if(a % 2 == 0 && b % 2 == 0)
	{
		cout << "haxtec erkrord xaxacox@ " << endl;
	}
	else
	{
		cout << "haxtec arajin xaxacox@ " << endl;
	}
}
int main()
{
	int a_kuyt = 0, b_kuyt = 0;
	while(a_kuyt <= 0 || b_kuyt <= 0)
	{
		cout << "tpel araji kuyti @nkuyzneri qanak@ ";
		cin >> a_kuyt;
		cout << "tpel erkrord kuyti @nkuyzneri qanak@ ";
		cin >> b_kuyt;
	}
	gushak(a_kuyt, b_kuyt);

   return 0;
}
