#include <iostream>

using namespace std;

int main()
{
int N;
int M;
int q;
cout << "N=";
cin >> N;
 
for(int i = 0; i < 8 ; ++i)

	{
		M= ( (N >> i) & 1) ;
		cout << M ;
		for (int i = 0; i < 8; ++i) 
			{
				if (M &i == 1) {q++;}
			}
		
	}

cout << endl << q << endl;

return 0;
}
