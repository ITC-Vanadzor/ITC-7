#include <iostream>

int main()
{
	//number-inputing number, copyI-temp value in FOR, 
	//rev- reverse of number, count -count of K-numbers. 
	int number,copyI, rev, count = 0; 
   
	std::cin >> number;
	
   //cycle, for checking all numbers in (i< number) interval and counting K-numbers 
   for(int i = 1; i < number; i++)
   {
	   rev = 0;
	   copyI = i;
	   if(copyI < 10)
	   {
		  rev = copyI;
	   }
	   else
	   {
		   //cycle for reverse number.
		   while(copyI != 0)
		   {
				rev = rev*10 + copyI%10;
				copyI = copyI/10;
		   }
	   }
	   if((i + rev) == number) count++;
   }

   std::cout << count << std::endl;
  
   return 0;
}
