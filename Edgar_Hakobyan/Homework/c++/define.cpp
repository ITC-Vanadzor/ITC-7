#include <iostream>
using namespace std;
#ifdef def
#define calculate {static int j=0;j++;n;}
#define n {cout<<"mta "<<__FUNCTION__<<" funkcian "<<j<<" angam"<<endl;}
#endif
void f()
{
	calculate
}
int main()
{
	for(int i=0;i<=2;i++)
	f();
	return 0;
}
