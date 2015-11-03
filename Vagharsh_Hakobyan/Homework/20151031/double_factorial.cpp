//number of 2 zero's combination
#include <iostream>
#include <cmath>

int factorial (int n)
{
  if (n==0)
    {
      return 1;
    }
  else
    {
      int fact = 1;
      for (int i=1;i<=n;++i)
	fact = fact * i;
      return fact;
    }
}

int double_factorial (int n)
{
  if (n%2==0)
    {
      return pow(2,n/2)*factorial(n/2);
    }
  else
    {
      return factorial(n)/(pow(2,((n-1)/2))*factorial((n-1)/2));
    }
}


int main()
{
  int n=-1;
  do
    {
      std::cout << "Ներմուծել n բնական թիվը՝ " << std::endl;
      std::cin >> n ;
    }
  while (n<=0);
  
  std::cout << "Կրկնակի ֆակտորիալն է` " << double_factorial (n) << std::endl;
  return 0;
}
