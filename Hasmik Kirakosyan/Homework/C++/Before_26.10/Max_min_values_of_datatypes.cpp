#include <iostream>
#include <math.h>

using namespace std;

int main () {
  cout<<"\n\n Max integer value  :"<<pow(2, 8*sizeof(int)-1)-1;
  cout<<"\n\n Min integer value  :"<<-1*pow(2, 8*sizeof(int)-1);
 
  cout<<"\n\n Max unsigned int value :"<<2*pow(2, 8*sizeof(unsigned int)-1);
  cout<<"\n\n Min unsigned int value :"<<0;
 
  cout<<"\n\n Max short value :"<<pow(2, 8*sizeof(short)-1)-1;
  cout<<"\n\n Min short value :"<<-1*pow(2, 8*sizeof(short)-1);
  
  cout<<"\n\n Max unsigned short value :"<<2*pow(2, 8*sizeof(short)-1);
  cout<<"\n\n Min unsigned short value :"<<0;
 
 
 return 0;
}
