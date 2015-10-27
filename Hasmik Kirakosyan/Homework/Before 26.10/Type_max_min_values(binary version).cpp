#include <iostream>

using namespace std;

int main () {  

   int max=0;
   for (int i=0; i<=sizeof(int)*8-2; i++) 
      max=max|(1<<i);
      
   cout<<"\nMaximum value of int is " <<max;
   cout<<"\nmin= "<<max+1;
   
   unsigned int unsigned_max;
   
   for (int i=0; i<=2*(sizeof(int)*8-2); i++) 
      unsigned_max=unsigned_max|(1<<i);
      
   cout<<"\nMaximum value of int is " <<unsigned_max;
   cout<<"\nmin= "<<unsigned_max+1<<endl;  
   
   
   
    int char;
    cin>>char;

    return 0;
}
