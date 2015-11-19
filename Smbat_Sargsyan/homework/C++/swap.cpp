#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,b;
	cout << "a=  "; cin >> a;
    cout << "b=  "; cin >> b;
	cout << "a=  " << a  << "   " << "b=  " << b << endl;
	a^=b;
	b^=a;
	a^=b;
	cout << "a=  " << a  << "   " << "b=  " << b << endl;
	_getch();
	return 0;
}