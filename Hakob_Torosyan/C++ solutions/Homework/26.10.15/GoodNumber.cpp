#include <iostream>

//function, that adds values of numbers in variables 
int sum_number(int a)
{
  int sum = 0, temp;
  temp = a;
  while (temp > 0)
	{
    sum = sum + temp%10;
    temp = temp/10;
  	}
  return sum;
}
//function, that checks which number is "bad" and which number is "good"
int good_bad(int a,int b)
{
  int good_number;
  if ( sum_number(a) > sum_number(b) )
 {
    good_number = a;
 }
  else
 {
    if ( sum_number(a) == sum_number(b) )
      {
      if ( a < b )
	{
	good_number = a;
	}
      else 
	 {
	good_number = b;
         }
      }
   	 else
    	 {
      	 good_number = b;
     	 }
 }
  return good_number;
}




int main()
{
  int number;
  std::cout << "Insert Number " << std::endl;
  std::cin >> number;
  int temp = number;
  for(int i = number; i >=2; --i)
    {
      if(number%i == 0)
      temp = good_bad(temp, i);
    }
 std::cout << "For good number we will have " << temp << std::endl;
  return 0;

}
