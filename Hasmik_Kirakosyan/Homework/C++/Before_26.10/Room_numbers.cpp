#include <iostream>

int main(){
    
    unsigned int first_room,last_room;  
    std::cout<<"\nfirst room number = :";
    std::cin>>first_room;
    
    std::cout<<"\nLast room number = :";
    std::cin>>last_room; // last_room >= first_room
    
    int digits[10];
    for (int i=0; i<=9; i++) {
        digits[i]=0;
    }
       
    int temp;     
    for (int num=first_room; num<=last_room; num++) {
        temp=num;
        while (temp!=0) {
              digits[temp%10]++;
              temp/=10;     
        }    
    }
    
    for (int i=0; i<=9; i++) {
        std::cout<<"\nCount of "<<i<<" is "<<digits[i];
    }     
  
  char ch;
  std::cin>>ch;
  
  return 0;  
}
