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
  int n = 1;
  do
  {
    std::cout << "Ներմուծել 0֊ից մեծ բնական թիվ n = ";
    std::cin >> n;
  }
  while (n<=0);
  std::cout << "Շրջված n թիվն է՝ m = " << revers(n) << std::endl;
  return 0;
}
