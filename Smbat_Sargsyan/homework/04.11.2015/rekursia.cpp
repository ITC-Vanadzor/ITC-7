#include <iostream>

void rekursia(int n)
{
	
  if(n == 1)
    
       std::cout << n << " ";
  else 
    
       std::cout << rekursia(n-1) + n << " " ;
}
int main()
{
  int n;
  do
  {
    std::cout << "n= ";
    std::cin >> n;
  } 
  while(n <= 0);
  rekursia(n);
return 0;
}

