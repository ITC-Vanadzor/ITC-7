#include <iostream>
using namespace std;
int main()
{
	int n = 1, m = 0;
	while(n > m)
	{
		cout << "tpel 2 drakan amboxj tiv m aveli mec " << endl;
		cout << "n = ";
		cin >> n;	
		cout << "m = ";
		cin >> m;
	}
	int mas[10] = {0,0,0,0,0,0,0,0,0,0};
	while(n <= m)
	{
		int k = n;
		if(k == 0)
			mas[k]++;
		else
		{
			while(k >= 1)
			{
			
				int x = k % 10;
				mas[x]++;
				k /= 10;
			}
		}		
		++n;
	}   
	for(int i = 0; i < 10; ++i)	
		cout << i << "-"  << mas[i] << endl;

  return 0;
}
