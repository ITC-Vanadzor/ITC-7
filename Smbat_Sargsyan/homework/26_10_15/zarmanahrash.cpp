//trvacc n-i ev k-i hamar gtnum e zarmanahrash e ayd tverov hajordakanutyuny te voch ev tpum e ayd hajordakanutyuny
#include <iostream>

void bazm_tpum(int bazmutyun[],int sum);
int main() 
{
int n=-1;
int k=-1;
std::cout << "n=";
std::cin >> n;
std::cout << "k=";
std::cin >> k;
while(n<1 || k<0)
{
std::cout << "krkin pordzir " << std::endl;
std::cout << "n=";
std::cin >> n;
std::cout << "k=";
std::cin >> k;
}
int sum=0;
int i;
int bazmutyun[n];
for (int i=1; i<=n; ++i) 
{
bazmutyun[i]=i;
sum+=i;
std::cout <<  bazmutyun[i] << " ";
}
 	
if (k==sum)
{ 
std::cout << "zarmanahrash e " << std::endl;
}
else
{ 
std::cout << "zarmanahrash che " << std::endl;
}
return 0;
}
