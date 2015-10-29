
#include <iostream>
using namespace std;
#ifdef DEBUG
#define E cout<<"Entering.. "<<__FUNCTION__<<"             Line="<<__LINE__<<endl;
#define L cout<<"Leaving.. "<<__FUNCTION__<<"             Line="<<__LINE__<<endl;
#define A

#elif RELEASE
#define E
#define L
#define A
#else
#define A cout<<"Sxal mutqagrum!"<<endl;
#define E
#define L
#endif
int func1();
int func2();

int main()
{
A
E

	func1();
	
	
L
	return 0;
}

int func1()
{
E
	//funkciayi marmin


	func2();
	//funkciayi marmin
L
	return 0;
}
int func2()
{
E
	//funkciayi marmin


	//funkciayi marmin
L
	return 0;
}
