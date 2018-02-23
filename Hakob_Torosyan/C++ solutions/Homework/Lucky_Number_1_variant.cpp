#include <iostream>

int main()
{
	//num-inputted number, count, i- temporary parameters,
	int num, count = 0, i = 0; 

   std::cin >> num;

   while(count < num)
   {  
	  int str = 1;
      int a = i; 
      while (a > 0)
      {
		  //with this we can check if last  number of our value not equal 0 or 7,  
		  if( (a%10)!=0 && (a%10)!= 7 )
		  { 
			  str = 0; 
			  break; 
		  }
		  a /= 10;
	  }
	  i++;
	  //this means, that our checking value contains only 7 or 0,
	  if (str == 1)
		  count++;
   }
   
   std::cout << (i - 1) << std::endl;

   return 0;
}
