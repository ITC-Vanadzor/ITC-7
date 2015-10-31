#include <iostream>
int Max_Zuyg(int a[],int n)
{
int max=a[1];
for(int i=1;i<n;i=i+2)
   {
      max=(a[i]>max)? a[i]: max;
      //if(a[i]>max)
       // { a[i]=max; }
   }
return max;
}
int Min_Kent(int a[],int n)
{
 int min=a[0];
 for(int i=0;i<n;i=i+2)
    {
     min=(a[i]<min)? a[i]: min;
     //if(a[i]<min)
       //{ a[i]=min; }
    }
return min;
}
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
int answer=Max_Zuyg(a,n)+Min_Kent(a,n);
std::cout << "answer= " << answer << std::endl;
return 0;
}
