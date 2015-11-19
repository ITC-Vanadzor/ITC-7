#include <iostream>
int anssign(int& a,int& b)
 {
  return a>b? a=7:b=7;
 }
int main()
{
 int a,b;
 do 
  {
    std::cout << "a= " ;std::cin >> a;
    std::cout << "b= ";std::cin >> b;
  } while(a==b); 
 anssign(a,b);
 std::cout << "a= " << a << "  b= " << b << std::endl;
 return 0;
}
