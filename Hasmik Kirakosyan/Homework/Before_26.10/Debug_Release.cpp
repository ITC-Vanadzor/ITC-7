#include <iostream>
#include <conio.h>
#define Enter "Entering ", __FUNCTION__, __LINE__

using namespace std;
int sum (int, int);
int main () {
#define DEBUG      
#ifdef DEBUG 
 int a=20, b=30;
 cout<<"\n"<<Enter;
 sum(a,b);
 cout<<"\n\n"<<"Leaving function "<<__FUNCTION__<<": Line N"<<__LINE__;
 
 
}
int sum (int a, int b) {
  int summa;
  cout<<"\n\n"<<"Entering function "<<__FUNCTION__<<": Line N"<<__LINE__;
  summa =a+b;
  cout<<"\n\nSum of "<<a<<" and "<<b<< " is "<<summa;
  
  cout<<"\n\n"<<"Leaving function "<<__FUNCTION__<<": Line N"<<__LINE__; 

#endif
#ifdef RELEASE 

#endif
      getch();
    return 0;   
    
}
