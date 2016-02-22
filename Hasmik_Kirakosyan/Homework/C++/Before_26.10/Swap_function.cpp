#include <iostream>




int main () {
    int first_num, second_num;
    std::cout<<"\nThe first number is : ";
    std::cin>>first_num;
    
    std::cout<<"\nThe second number is : ";
    std::cin>>second_num;
    
    std::cout<<"\nBefore swap function: first = "<<first_num<<", second = "<<second_num<<std::endl;
    first_num=first_num^second_num; 
    second_num=second_num^first_num; 
    first_num=first_num^second_num;  
    std::cout<<"\nAfter swap function: first = "<<first_num<<", second = "<<second_num<<std::endl;
    
    char ch;
    std::cin>>ch;
    return 0;
}

