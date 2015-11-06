#include <iostream>

void _revers(int &a,int &sum)
{
  if (a>0)
    {
      sum = sum*10+a%10;
      a=a/10;
      _revers(a,sum);
    }
}

int revers(int a)
{
  int sum = 0;
  _revers(a,sum);
  return sum;
}

int main()
{  
  int n = 0;
  std::cout << "Please import n " << std::endl;
  std::cin >> n;
  std::cout << revers(n) << std::endl;
  return 0;
}
