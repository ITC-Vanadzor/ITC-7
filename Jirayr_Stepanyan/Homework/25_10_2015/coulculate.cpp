#include <iostream>
using namespace std;
#define coulculate static int x = 0; x++; cout << "duq mtel eq  " << __FUNCTION__ << x  << " angam" <<endl;

int f();
int main()
{	coulculate
    	int a;
	a = f() + 1;
	a = 2 * f();
	cout << a;

  return 0;
}
int f()
{ 	
	coulculate
	cout << 10 << endl;
		
	return 5;
}

