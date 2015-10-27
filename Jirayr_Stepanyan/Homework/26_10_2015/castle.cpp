#include <iostream>
#include <cstdlib>
using namespace std;
int tarberutyun(int a)
{
	return 3 + ((a - 2) * 2); // ays banadzev@ hashvvum e yuraqanchyur harki avel ankyunner@
}
int main()
{
	int ankyun = 0, harker = 0;
	while(ankyun <= 0 || harker <= 0)
	{
		cout << "tpel bazmankyan ankyunneri qanak@ (0-ic mec) ";
		cin >> ankyun;
		cout << "tpel bazmankyan harkeri qanak@ (0-ic mec) ";
		cin >> harker;
	}
	int keter[harker]; // haytararum enq masiv harkeri chapov vorpeszi verjum karoxananq gumarenq bolor harkeri ankyunner@
	if (harker == 1)
	{
		cout << "ankyunneri qanak@ " << harker << " -in harkum = " << ankyun << endl;
		exit(1);
	}
	else
	{
		for(int i = 0; i <= harker; ++i)
		keter[i] = (ankyun * harker) - tarberutyun(harker);	
 	}
	int gumar = 1;
	for(int j = 0; j <= harker; ++j)
	{
		gumar += keter[j];
	}
	cout << "ankyunneri qanak@" << harker << "rd harkum = " << gumar  << endl;

   return 0;
}
