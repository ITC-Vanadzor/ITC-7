#include <iostream>
int Meker(int a,int b)
{
   if(a==b) return a;
   if(a==1 || b==1) return 1;
   if(a>b && a%b==0) return a/b;
   if(a<b && b%a==0) return b/a;
   if(a%b!=0 || b%a!=0) return 1;
}
int main()
{
  int array[]={0,1,11,111,1111,11111,111111,1111111,11111111,111111111};
  int a,b;
  do 
  {
    std::cout << "a= ";
    std::cin >> a;
    std::cout << "b= ";
    std::cin >> b;
  } while(a<0 || b<0);
int n=Meker(a,b);
std::cout << "answer= " << array[n] << std::endl;
return 0;
}
