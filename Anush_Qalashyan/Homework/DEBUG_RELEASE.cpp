#include <iostream>


using namespace std;

#ifdef DEBUG 
	#define Enter  cout<<"Entering function "<<__FUNCTION__<<": Line"<<__LINE__;
	#define Leave  cout<<"Leaving function " <<__FUNCTION__<<": Line"<<__LINE__;
	#define Other
#else 
 #ifdef RELEASE
 	#define Enter
        #define Leave 
	#define Other
   #else
	#define Enter
        #define Leave 
	#define Other cout<<"Unknown flag"<<endl;

#endif
#endif


void Function ();

int main() {
	Enter
	Function();
	Leave
	Other
	
return 0;
}

void Function() {
	Enter
	cout<<"Function process"<< endl;
	Leave
}


