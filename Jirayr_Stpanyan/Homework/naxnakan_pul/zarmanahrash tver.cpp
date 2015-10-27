#include <iostream>
using namespace std;
int shrjel(int a);
int main()
 {
	int zarm = 0, tiv;
	cin >> tiv;
	for (int i = tiv/10; i < tiv; i++)
    {
		if (i + shrjel(i) == tiv)
	  			  zarm++; 

	}
	cout << zarm;
	
	return 0;
}
int shrjel(int a)
{
	int b = 0;

	while (a)
    {
    	b = b * 10 + a % 10;
     	a /= 10;
	}

	return b;
}

