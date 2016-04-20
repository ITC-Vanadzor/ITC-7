#include <iostream>
#include <cmath>
#include <cstdlib>
int Min(int a,int b)
{
    return a<b ? a : b;
}
int Max(int a,int b)
{
    return a>b ? a : b;
}
int Bajanarar(int a,int b)
{
      int min=Min(a,b);
      int dif=abs(a-b);
  if(a-b==0)
      return a;
  else 
      return Bajanarar(dif,min);
}
int Bazmapatik(int a,int b)
{
   return (a*b)/Bajanarar(a,b);
}
          
          
int main()
{
   int a,b;
   std::cout << "a= " ;
   std::cin >> a;
   std::cout << "b=";
   std::cin >> b;
   if(Bajanarar(a,b)==1)
          std::cout << "bajanarar chunen" << std::endl;
   else
   std::cout << "bajanarar=" << Bajanarar(a,b) << std::endl;
   std::cout << "bazmapatik=" << Bazmapatik(a,b) << std::endl;
   return 0;
}
