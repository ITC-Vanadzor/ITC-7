#include <iostream>

int divider(int a, int b)
{
  if(a>b)
    {
      a=a-b;
      return divider(a,b);
    }
  if(a<b)
    {
      b=b-a;
      return divider(a,b);
    }
  if(a==b)
    {
      return a;
    }
}
int main()
{
  int a = -5, b =-7;
  std::cout << "Please import a " << std::endl;
  std::cin >> a;
   std::cout << "Please import b " << std::endl;
  std::cin >> b;
  std::cout << "For divider we will have "; 
  std::cout << divider(a,b) << std::endl; 
  return 0;
}
