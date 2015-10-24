#include <iostream>
using namespace std;

void swap(short int a,short int b)
{
	
	a = a ^ b;
	
	b = a^b;
	
	
	a = a^b;
	
	cout << a << endl;
	cout << b << endl;
}

int main()
{
	swap(22,25);
	system("Pause");
}