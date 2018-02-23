#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x;
	int mas[6];
	int i = 0;
	cin >> x;
	while(x > 0)
	{
		mas[i]=x % 10;
		
		if(i > 0)
		for(int j = 0; j < i; j++)
		{
			if(mas[i] == mas[j])
			{
				cout << " krknvec" << endl;	
				goto verj;
			}
		}
		x /= 10;
		++i;
	}
	cout << "hajoxak" << endl;
	verj:
return 0;
}
