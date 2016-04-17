#include <iostream>

using namespace std;

int main()
{
static int int_min,int_max;
static unsigned int u_max,u_min;
u_min=1>>31;
u_max=1<<31;
int_min=1<<31;
int_max=~int_min;
cout <<"u_min= "<< u_min << endl;
cout <<"u_max="<< u_max << endl;
cout <<"int_min= "<< int_min << endl;
cout << "int_max= " << int_max << endl;
return 0;
}
