#include <iostream>


int main()
{
 int n=-1;
 do
 {
  std::cout << "Please n = ";
  std::cin >> n;
 }
 while (n < 1 || n > 2000);
 int m=-1;
 do
 {
  std::cout << "Please m = ";
  std::cin >> m;
 }
 while (m < 1 || m > 2000);
 if (n != m)
 {
  std::cout << "Միավոր ամենամեծ ընդհանուր բաժանարարը հավասար է՝ 1" << std::endl;
 }
 else
 {
  std::cout << "Միավոր ամենամեծ ընդհանուր բաժանարարը հավասար է՝ ";
  for (int i=0;i<n;++i)
  {
   std::cout << "1";
  }
  std::cout << std::endl;
 }
 return 0;
}