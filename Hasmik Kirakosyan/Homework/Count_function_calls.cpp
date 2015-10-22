#include <iostream>
#ifdef Function_calls
       #define Count {static int x=0; x++; Calls}
       #define Calls cout<<"\nCalls of "<<__FUNCTION__<<" function were :"<<x<<endl; 
  #else 
       #define Count
  #endif
  
using namespace std;

int function_1 ();
int function_2 ();
int function_3 ();

int main () {
    
    for (int i=1; i<=2; i++) {
        function_1();
    }
    
    for (int i=1; i<=4; i++) {
        function_2();
    }
    
    for (int i=1; i<=5; i++) {
        function_3();
    }
    
    char key;
    cin>>key ;
    return 0;
}

int function_1 () {
    Count
    cout<<"Function process of function 1"<<endl;
} 

int function_2 () {
    Count
    cout<<"Function process of function 2"<<endl;
    
}  

int function_3 () {
    Count
    cout<<"Function process of function 3"<<endl;
    
}
