
#include <iostream>
using namespace std;
//#define DEBUG


int func1();
int func2();

int main()
{
	func1();
	
	return 0;
}

int func1()
{
	#ifdef DEBUG
	cout<<"Entering.. "<<__FUNCSIG__<<"             Line="<<__LINE__<<endl;
	#endif
	//funkciayi marmin

	func2();
	//funkciayi marmin
	#ifdef DEBUG
	cout<<"Leaving.. "<<__FUNCSIG__<<"             Line="<<__LINE__<<endl;
	#endif
	return 0;
}
int func2()
{
	#ifdef DEBUG
	cout<<"Entering.. "<<__FUNCSIG__<<"             Line="<<__LINE__<<endl;
	#endif
	//funkciayi marmin


	//funkciayi marmin
	#ifdef DEBUG
	cout<<"Leaving.. "<<__FUNCSIG__<<"             Line="<<__LINE__<<endl;
	#endif
	return 0;
}