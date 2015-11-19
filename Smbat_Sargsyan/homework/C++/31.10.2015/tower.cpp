#include <iostream>
int Kubikneri_qanak(int n,int a[])
 {  int sum=0;
    for(int i=0;i<n;i++)
      { 
        sum=sum+a[i];
      }
    if(sum%n==0) return sum/n;
    else { 
           std::cout << "tvyal xoranardneri hamar hnaravor che karucel havasar kubiknerov ashtarakner " << std::endl;
           return 0;
         }
 }
int main()
{  
  int n;
  do
  {
    std::cout << "n= ";
    std::cin >> n;
  } while(n<1 || n>50);
  int a[50];
  for(int i=0;i<n;i++)
     {
        std::cout <<"a[ "<< i << "]= ";
        std::cin >> a[i];
     }
  int qanak=0;
  int mijin=Kubikneri_qanak(n,a);
  for(int i=0;i<n;i++)
    {
      if(a[i] > mijin)
       {  
         qanak=qanak+a[i]-mijin;
       }
    }  
  std::cout << qanak << std::endl;
  return 0;
}
 
    



