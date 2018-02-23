#include <iostream>
using namespace std;

int main() 
{
	unsigned	int a = 0;
	cout << "max unsiged int " << ~a << endl;;
	cout << "min  int " << (1<<31)<<endl;
	cout << "max  int " << ~(1 << 31);

	system("Pause");
}