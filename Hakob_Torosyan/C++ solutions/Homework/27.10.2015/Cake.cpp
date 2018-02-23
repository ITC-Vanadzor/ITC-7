#include <iostream>
//I wrote program, where we can cut a cake along diagonal and radius 
void Cut (int );

int main()
{
  int number;
  std::cout <<"Please import number of Vazgens friends " << std::endl;
  std::cin >> number;
  Cut(number);
  return 0;
}

void Cut( int n)
{
  if(n%2 == 0)
  std::cout << "For pieces we will have " << n/2 << std::endl;
  if(n%2 != 0)
  std::cout << "For pieces we will have " << n/2 << std::endl;
}

