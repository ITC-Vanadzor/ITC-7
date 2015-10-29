#include<iostream>
using namespace std;

int t;
int func();

int main()
{
	for (int i=50;i<60;i++) { cout<<func()<<endl;}
	
	return 0;
}

int func()
{
	static int x=0;
	return ++x;

}
