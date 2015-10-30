#include <iostream>
using namespace std;
int fib(int n);
int main()
{
 	cout << "tpel sharqi andam@" << endl;
 	int a, b, c;
 	cin >> a;
 	b = a + 1;
 	c = fib(b);
 	cout << c;
	
	return 0;	
}
int fib(int c)
{
	if(c < 3)
		return 1;
	else 
		return fib(c - 1) + fib(c - 2);
}
