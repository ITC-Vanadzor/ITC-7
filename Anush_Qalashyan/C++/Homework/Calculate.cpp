#include <iostream>
using namespace std;

#ifdef C
#define Calculate {static int j = 0; j++; cout << j << "angam" << endl;}
#endif

int f() 
{
    Calculate
} 

int main () 
{
    int a;
	cout << "a=";
	cin >> a;
    for (int i = 0; i < a; i++) 
    {
        f();
    }
    
    return 0;
}




