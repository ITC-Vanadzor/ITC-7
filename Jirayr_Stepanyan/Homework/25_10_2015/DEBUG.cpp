#include <iostream>
using namespace std;
#define DEBUG

#ifdef DEBUG
#define enter {cout << "entering  " << __FUNCTION__ << "  in line  "<< __LINE__ << endl;} 
#define leave {cout << "leavving  " <<__FUNCTION__ << "  in line  "<< __LINE__ << endl;}
int sum(int a);
int sub(int c);
int main()
{
	enter
	int n = 3, m;
	m = sum(n) + sub(n);
	cout << m << endl;
	leave
	return 0;
}
int sum(int a)
{
	enter
	cout << 5 << endl;
	leave
	return a + a;
}
int sub(int c)
{
	enter
	cout << 6 << endl;
	leave
	return c - 1;
}
 
#endif
