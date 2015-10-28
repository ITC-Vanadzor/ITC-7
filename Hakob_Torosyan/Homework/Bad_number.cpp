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
  int bad_number;
  if ( sum_number(a) > sum_number(b) )
 {
    bad_number = b;
 }
  else
 {
    if ( sum_number(a) == sum_number(b) )
      {
      if ( a < b )
	{
	bad_number = b;
	}
      else 
	 {
	bad_number = a;
         }
      }
   	 else
    	 {
      	 bad_number = a;
     	 }
 }
  return k;
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
 std::cout << "For bad number we will have " << temp << std::endl;
  return 0;

}



