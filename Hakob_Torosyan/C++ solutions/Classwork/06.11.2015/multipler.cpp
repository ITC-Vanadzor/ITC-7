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


int multipler(int a, int b)
{
  if(a==b)
    {
      return a;
    }
  return a*b/divider(a,b);
}

int main()
{
  int a = 2, b =3;
  std::cout << "Please import a " << std::endl;
  std::cin >> a;
   std::cout << "Please import b " << std::endl;
  std::cin >> b;
  std::cout << "For divider we will have "; 
  std::cout << multipler(a,b) << std::endl; 
  return 0;
}
