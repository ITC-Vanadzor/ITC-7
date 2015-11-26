#include <iostream>


int main()
{
int A=0,B=0;

std::cout << "A= " ;
 do { 
      std::cin >> A;
 } while (A<1);
 
std::cout <<" B= " ;
 do { 
     std::cin >> B;
 } while (B>109);



if (A%2==0 && B%2==0){
                              std::cout<<"\nThe winner is Armen : 2";
}
else  {
                              std::cout<<"\nThe winner is Arman = 1";
}

return 0;
}


