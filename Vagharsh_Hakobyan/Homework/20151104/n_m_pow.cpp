#include <iostream>

int sqrt_int(int a)
{
  int b=0;
  while (a>=(b*b))
    {
      b=b+1;
    }
  return b-1;
}


unsigned int f(unsigned int a, int b)
{ 
  if (b==0)
    {
      return 1;
    }
  else
    {
      while(b > 1)
	return a*f(a,b-1);
    }
}

int main()
{  
  int b = -5, a = -1;
  std::cin >> a;
  std::cin >> b;
  int k = sqrt_int(b);
  int l = (b-k*k);
  unsigned int c = f(a,k);
  std::cout << f(a,l)*f(c,k) << std::endl;
  std::cout << k << std::endl;
  std::cout << l << std::endl;
  std::cout << c << std::endl;
  return 0;
}
