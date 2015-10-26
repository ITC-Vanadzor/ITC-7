//How much 0 is at the end of N! 

#include <iostream>

    
int main () {
    int N, numOf2=0, numOf5=0, numOf10=0;
    std::cout<<"Input number :";
    std::cin>>N; 
    int i=0;
    do  {
       if (i%10==0 && i!=0) numOf10++;
            else 
                 if (i%10==5)   numOf5++;
        i+=5;
   }  while (i<=N);       
    std::cout<<"\nNumber of 10 by 2*5 :"<<numOf5<<" \nNumber of 10 in [1,N] is : "<<numOf10; 
    
    std::cout<<"\n\nNumber of 0 in N! is : "<<numOf5+numOf10;
    
    char ch;
    std::cin>>ch;
    return 0;
}
