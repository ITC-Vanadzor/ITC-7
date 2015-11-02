#include <iostream>
unsigned long long Superrow(unsigned long long n,unsigned long long m)
{
  unsigned long long x=1;
  for(int i=0; i<n; ++i)
     {
	x=(x<<1) % m;
     }
  return x;
}
int main()
{
  unsigned long long n,m;
  do 
    {
	std::cout<<"n=";
	std::cin>>n;
	std::cout<<"m=";
	std::cin>>m; 
    } while(n<0 || n>100000 || m<0 || m>10000);
  std::cout<<Superrow(1<<n,m)<<std::endl;
  return 0;
}
