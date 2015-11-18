#include <iostream>
void Max_Min(int a[],int n,int& max,int& min);
int main()
{
int n;
std::cout << "n= " ;
std::cin >> n;
int a[10000];
for(int i=0;i<n;i++)
   {
     std::cout << "a["<< i << "]= ";
     std::cin >> a[i];
   }
int max,min;
Max_Min(a,n,max,min);
std::cout << "answer= " << max+min << std::endl;
return 0;
}
void Max_Min(int a[],int n,int& max,int& min)
{
  max=a[1];
  for(int i=1;i<n;i=i+2)
    {
       max=(a[i]>max)? a[i]: max;
    }
  min=a[0];
  for(int i=0;i<n;i=i+2)
    {
     min=(a[i]<min)? a[i]: min;
    }
}
