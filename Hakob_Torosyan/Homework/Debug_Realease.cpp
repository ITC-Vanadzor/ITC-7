#include <iostream>

#define DEBUG 2
#define REALISE 1


#define flag1 REALISE

#ifdef flag1

#if (flag1==DEBUG)
   #define e() std::cout << "Entering function = "<< __FUNCTION__ << "  LINE = " << __LINE__ << endl;
   #define l() std::cout << "Leaving function = "<< __FUNCTION__ <<"  LINE = " << __LINE__ << endl;
#elif (flag1==REALISE)
   #define e() std::cout << "First variant of our program " <<  endl;
   #define l() std::cout << "First variant of our program " <<  endl;
#else
   #define e() std::cout  << "Does not exist 1" << endl;
   #define l() std::cout  << "Does not exist 1" << endl;
#endif

#else
   #define e() std::cout  << "Does not exist" << endl;
   #define l() std::cout  << "Does not exist" << endl;
#endif


int main()
{
  e();



  l();
  return 0;
}
