#include <iostream>

int main()
{
   int N1, N2, N3, sum = 0, count = 0;// N1,N2,N3 input numbers, sum-sum of N1, N2, N3 numbers

   std::cin >> N1 >> N2 >> N3;

   sum = N1 + N2 + N3;
   if (sum == 0)
   {  
	   count = 1;
	   std::cout << count << endl;
   }
   else
   {
	   int a = sum; // a- value, wich employ in cycle.
	   while(a > 0)
	   {  
		   if(a%10 == 0) // checking count of 0
		   {
			   count++;
		   }
		   a = a/10;
	   }
	   std::cout << count << endl;
   }
   return 0;
}
