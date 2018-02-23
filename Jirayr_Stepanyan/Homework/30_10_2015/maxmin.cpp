#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int tveri_qanak = 0;
	while(tveri_qanak <= 0)
	{
		cout << "tpel faylum arka tveri qanak@ (0-ic mec ev 10000-ic poqr) ";
		cin >> tveri_qanak;
	}	
	int tver[tveri_qanak];
	for(int i = 0; i < tveri_qanak; ++i)
	{
		cout << "tpel " << i + 1 << " andami arjeq@ ";
		cin >> tver[i];
	}
	int min = tver[0], j = 0;
	while(j < tveri_qanak)
	{
		if(j > 0)
		{
			if(tver[j] < min)
			{
				min = tver[j];
			}
		}
		j += 2;
	}
	int max = tver[1], k = 1;
	while(k < tveri_qanak)
	{
		if(k > 0)
		{
			if(tver[k] > max)
			{
				max = tver[k];
			}
		}
		k += 2;
	}
	int gumar = min + max;
	cout << "minimumi u maximumi gumar@ = " << gumar << endl;

   return 0;
}
