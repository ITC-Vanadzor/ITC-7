/*yuraqanchyur tiv vory petq e verjana 0-ov hastat bajanvum e 2-i ev 5-i;qani vor yuraqanchyur tvi faktoryal(1-ic baci) hastat bajanvum e 2-i uremn menq kvercnenq miayn 5-i bajanvelu pah */
#include <iostream>
int main()
{
int n=-1;
std::cout << "n= ";
std::cin >> n;
while(n<0)
{
std::cout << "krkin pordzir " << std::endl;
std::cout << "n= ";
std::cin >> n;
}
 int zero_count = 0;
 int divisor=5;
  while (n/divisor > 0){
    zero_count = zero_count+n/divisor;
    divisor*=5;
  }
  std::cout << "o-neri qanaky tvi faktoryali verjum = " << zero_count << std::endl;
return 0;
}
