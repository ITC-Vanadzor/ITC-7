#include<iostream>
using namespace std;

#define CALCULATE {static x=1; cout<<__FUNCTION__<<" funkcian kanchvum e"<<x++<<"-rd angam"<<endl;}

void func1()
{
	CALCULATE
	cout<<"func1!"<<endl;

}
void func2()
{
	CALCULATE
	cout<<"func2!"<<endl;

}
void main()
{

	func1();
	func1();
	func2();
	func1();
}