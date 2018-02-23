#include <iostream>
#include <string>
using namespace std;
#define DEBUG 
#define RELEASE

#ifdef DEBUG
#define A cout<<"ENTERING to "<<name<<" "<<tox<<" line"<<endl;
#define B cout << "LEAVING "<<name<<" "<<tox+4<<" line"<<endl;
#else
#define A cout;
#define B cout;
#endif

void fun2() {
	string name = "fun2";
	short tox = 2;
	A
		
B
}

void fun() {
	string name = "fun";
	short tox = 8;
	A
	fun2();
	B
}


int main() {
	string name = "main";
	short tox = 15;
	A
	fun();
	B
		system("Pause");
	return 0;
	
}