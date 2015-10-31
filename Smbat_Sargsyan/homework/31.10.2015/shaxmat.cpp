//ete k>n,apa hnaravor che dasavorel aynpes vor mimyanc chharvacen,hakarak depqum arajin navaki hamar qayleri hnaravor qanaky klini n*n,erkrordi hamar (n-1)*(n-1),isk k-rd navaki hamar klini (n-(k-1))*(n-(k-1);bayc ays dempqum linum en qayler vor krknvum en isk krknvox qayleri qanaky klini  arajini hamar klini 1*(1+1)=2,erkrordi hamar 2*(2+1)=6 ev ayln..... 

#include <iostream>
int Qayleri_qanak(int n,int k)
{
  int yndhanur_qayler=1;
  int krknvox_qayler=1;
  for(int i=0;i<= k-1;i++)
  {
     yndhanur_qayler=yndhanur_qayler*(n-i)*(n-i);
     krknvox_qayler=krknvox_qayler*(i+1);
  }
  int qanak=yndhanur_qayler/krknvox_qayler;
  std::cout << qanak << std::endl;
  return 0;
}
int main()
{
  int n,k;
  do 
  {
    std::cout <<"n= ";std::cin >> n;
    std::cout << "k= ";std::cin >> k;
  } while(n<0 || n>8 || k<0 || k>8);
  if(n<k)
 {
    std::cout << "hnaravor che dasavorel aynpes vor charvacen mimyanc!!! " << std::endl;
 } 
 Qayleri_qanak(n,k);
 return 0;
}

