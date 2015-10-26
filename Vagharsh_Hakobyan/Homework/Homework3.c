#include <iostream>
using namespace std;

#define DEBUG 2
#define REALISE 1


#define flag1 REALISE

#ifdef flag1

#if (flag1==DEBUG)
   #define e() cout << "Entering function = "<< __FUNCTION__ << "  LINE = " << __LINE__ << endl;
   #define l() cout << "Leaving function = "<< __FUNCTION__ <<"  LINE = " << __LINE__ << endl;
#elif (flag1==REALISE)
   #define e() cout << "Ծրագրի 1.0.0 տարբերակ" <<  endl;
   #define l() cout << "Ծրագրի 1.0.0 տարբերակ" <<  endl;
#else
   #define e() cout  << "Գոյություն չունի 1" << endl;
   #define l() cout  << "Գոյություն չունի 1" << endl;
#endif

#else
   #define e() cout  << "Գոյություն չունի" << endl;
   #define l() cout  << "Գոյություն չունի" << endl;
#endif


int main()
{
  e();



  l();
  return 0;
}
