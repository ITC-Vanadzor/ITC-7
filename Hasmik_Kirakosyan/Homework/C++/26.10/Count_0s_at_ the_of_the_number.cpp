//How much 0 is at the end of N! 

#include <iostream>
#include <math.h>

    
int main () {
    int N, numOf0=0, numOf5=0, numOf10=0;
    std::cout<<"Input number :";
    std::cin>>N; 
    int i=0;
    for (i=1;pow(5, i)<=N; i+=2) {
        numOf0+= N/(int) pow(5, i); 
    }     
  //  std::cout<<" \nNumber of 10 in [1,N] is : "<<numOf0; 
    
    std::cout<<"\n\nNumber of 0 in N! is : "<<numOf0;
    
    char ch;
    std::cin>>ch;
    return 0;
}
