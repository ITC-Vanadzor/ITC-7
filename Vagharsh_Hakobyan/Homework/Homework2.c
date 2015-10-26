#include <iostream>
using namespace std;

#define flag1 Debug


#ifdef flag1
   func(flag1)
#else
   #define e() cout << "2" <<  endl;
   #define l() cout << "2" <<  endl;
#endif


void func(char x) {
    if (x=="Debug"){
        #define e() cout << "Entering function = "<< __FUNCTION__ << "  LINE = " << __LINE__ << endl;
        #define l() cout << "Leaving function = "<< __FUNCTION__ <<"  LINE = " << __LINE__ << endl;
    }
}

int main()
{
  e();
  return 0;
}
