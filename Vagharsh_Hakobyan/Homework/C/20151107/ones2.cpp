#include <iostream>

int divider(int a, int b)
{
  if(a==b)
    {
      return a;
    }
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
}

int input(char a)
{
 int k = -1;
 do
 {
  std::cout << "Please input " << a << "= ";
  std::cin >> k;
 }
 while (k < 1 || k > 2000);
 return k;
}

int main()
{
 int n = input('n');
 int m = input('m');
 int k = divider(n,m);
 std::cout << "Միավոր ամենամեծ ընդհանուր բաժանարարը հավասար է՝ ";
 for (int i=0;i<k;++i)
     {
      std::cout << "1";
      }
 std::cout << std::endl;
 return 0;
}