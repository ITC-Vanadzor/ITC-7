#include <iostream>

int main () {
    int n;
    std::cout<<"\nEnter the number :";
    std::cin>>n;
    
    int count=0;
    while(n!=0) {
                   if(n&1==1) count++;
                   n=n>>1;
                }
    std::cout<<"\nNumber of 1 in binary form is :"<<count;
    
    char ch;
    std::cin>>ch;
    return 0;
}


