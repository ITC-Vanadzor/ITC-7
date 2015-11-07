#include <iostream>

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
 if (n % m == 0 || m % n == 0)
 {
   int k = 0;
   if (n > m)
   {
    k = m;
   }
   if (n <= m)
   {
    k = n;
   }
   std::cout << "Միավոր ամենամեծ ընդհանուր բաժանարարը հավասար է՝ ";
   for (int i=0;i<k;++i)
   {
    std::cout << "1";
    }
   std::cout << std::endl;
 }
 else
 {
  std::cout << "Միավոր ամենամեծ ընդհանուր բաժանարարը հավասար է՝ 1" << std::endl;
 }
 return 0;
}