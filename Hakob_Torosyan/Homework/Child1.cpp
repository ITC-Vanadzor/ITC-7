#include <iostream>
int main()
{
   int N1, N2,  N3; 

   std::cin >> N1 >> N2 >> N3;

   std::cout << N3 - (N1 + N2)%N3 << endl;
  
   return 0;
}
