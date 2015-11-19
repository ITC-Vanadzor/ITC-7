#include <iostream>

void pointer_reference (int*& p) {
        *p+=1;
     } 

int main() {
  int x=5;
  int* p;  
  
  std::cout<<"x = "<<x<<std::endl;
  // p and &x are equal
  p = &x;
  std::cout<<"\n&x : "<<&x<<std::endl; 
  std::cout<<"p  : "<<p<<std::endl;

  // I have understood that ++ operator can't be used with pointers. Must be *p=*p+value; or *p+=value;
  *p+=1;
  std::cout<<"\nValue of x variable after *p+=1; (where p=&x) :"<<x;
  
  // Changed x variable value using by function parameter int&* p
  pointer_reference(p);
  std::cout<<"\n\nValue of x variable after pointer_reference(int&* p) function (where p=&x) :"<<x;
  
 return 0;   
}
