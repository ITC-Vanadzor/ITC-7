#include <iostream>

int double_fact (int n) {
    static int temp = n;
    if (temp%2==0 && n==0) return 2;
       else if  (temp%2!=0 && n==1) return 1;
                else return n*double_fact(n-2);   
} 


int main () {
 int n;
 std::cout<<"\n n = ";
 std::cin>>n;
 
 std::cout<<"\n\n Double factorial of n is : "<<double_fact (n);
 
 
 char ch;
 std::cin>>ch;     
 return 0;   
}
