// ONES2

#include <iostream>

int GCD(int a, int b){
   if(b==0){
        return a;
      }
  else {
      return GCD(b, a%b);
      }
    }

int main () {
    int first_num, second_num;
    
    std::cout<<"\n How many 1s are in the first number :";
    std::cin>>first_num;
    
    std::cout<<"\n How many 1s are in the second number :";
    std::cin>>second_num;
    
    
    int count_of_1 = GCD (first_num, second_num);
    
    std::cout<<"\n The greatest common divisor for first number and second number is : ";
    for (int i = 1; i <= count_of_1; ++i) {
        std::cout<<1;        
    } 
    
    
 char ch;
 std::cin>>ch;
 return 0;   
}
