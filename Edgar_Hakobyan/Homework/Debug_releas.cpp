#include <iostream>
using namespace std;
#ifdef DEBUG
#define entering cout << "entering " <<"name " << __FUNCTION__ <<" line = " << __LINE__ << endl;
#define leaving cout <<"leaving "<<"name "  << __FUNCTION__ <<" line = " << __LINE__ << endl;
#elif RELEASE
#define entering 
#define leaving
#else 
#define entering 
#define leaving
#error C++ compiler required.
#endif
int f(int a);

int main()
{
	entering
	int n = 3;
	cout << 5 + f(n) << endl;
	leaving

return 0;
}

int f(int a)
{	
	entering
	leaving
return 2 * a;
}
