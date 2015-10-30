#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "enter boys, girls and teams " << endl;
	int boys, girls, teams, childs, a, b;
	cin >> boys >> girls >> teams;
	a = boys + girls;		
	if(!(a % teams))
		childs = 0;
	else
		childs = teams - a % teams;
		
	cout << "childs = " << childs;
	
	return 0;
}
