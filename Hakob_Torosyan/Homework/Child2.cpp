#include <iostream>

int main()
{
   int N1, N2, Children = 0, N3, sum; 
   // N1, N2, Children - numbers of children, sum- sum of numbers of children. 
   //N3-the number, which should be divided,

   std::cin >> N1 >> N2 >> N3;

   sum = N1 + N2;
   while((sum + Children)%N3 != 0)
   {  
	   Children++;
   }
   std::cout << Children << std::endl;
  
   return 0;
}
