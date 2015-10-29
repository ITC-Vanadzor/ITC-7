
#include <iostream>
using namespace std;

#ifdef DEBUG
#define E cout<<"Entering.. "<<__FUNCTION__<<"             Line="<<__LINE__<<endl;
#define L cout<<"Leaving.. "<<__FUNCTION__<<"             Line="<<__LINE__<<endl;
#else
#define E
#define L
#endif
int func1();
int func2();

int main()
{
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
