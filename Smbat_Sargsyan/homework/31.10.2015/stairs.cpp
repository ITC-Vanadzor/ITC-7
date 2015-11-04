#include <iostream>
int fib(int n)
{  if(n==1 || n==2) return n;
   else return fib(n-2)+fib(n-1);
}
int main()
{
 int n;
 do
 {
   std::cout<< "nermuceq astichanneri qanaky ";
   std::cin >> n;
 } while(n<1 || n>30);
std::cout << "tarberakneri qanaky klinen " << fib(n) << std::endl;
 return 0;
}
 
