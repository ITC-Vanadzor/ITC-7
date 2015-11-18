#include <iostream>
using namespace std;
int a,b;
int Gumar(int a,int b);
#ifdef Debug
#define E cout << "Entering" << __FUNCTION__ << __LINE__ << endl; 
#define L cout << "Leaving" << __FUNCTION__ << __LINE__ << endl; 
#define X
#elif Relese
#define E
#define L 
#define X
#else 
#define E
#define L 
 #define X cout << "ERROR" << endl;
#endif
int Gumar(int a,int b)
{
E;
L;
if(a>b)
return a+b;
}
int main()
{
E;
L;
Gumar(a,b);
X;
return 0;
}
