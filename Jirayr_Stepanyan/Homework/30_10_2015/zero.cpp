#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k_akan = 0, n_anish = 0;
	while(k_akan <= 0 || n_anish <= 0) 
	{
		cout << "tpel K-akan hamakarg@ ";
		cin >> k_akan;
		cout << "tpel N-anish tiv@ ";
		cin >> n_anish;
	}
	int tiv[n_anish];
	for(int x = 0; x < n_anish; ++x) // massivi bolor andamnerin veragrum enq 0
	{
		tiv[x] = 0;
	}
	int amenamets_tasakan=(k_akan - 1) * pow(k_akan,(n_anish - 1)); // maximum kunenanq aydqan tiv
	int erku_zroneri_qanak = 0;
	for (int i=1; i<=amenamets_tasakan;++i)
	{
		int k=i;
	        int j=n_anish - 1;
	        cout << "i=" << i << endl;
	        while (k>0) // hertakanutyamb massivi andamnerin veragrum  enq k-akan hamakargi andamner@
	        {
       			tiv[j]=k%k_akan;
			j=j-1;
			k=k/k_akan;
       	        }
	        for (int l=0;l<=n_anish - 1;++l) // ays cikl@ grel em nra hamar vor tesneq vor dzer uxarkac xndri nkarum sxal a tvac
	        {
			cout << "tiv["<< l << "]=" << tiv[l] << "   ";
	        }
	        cout << endl;
	    	for(int y = n_anish - 1; y>=0; --y) // ays cikl@ stugum em massivi harevan andamnerin vor erkusn el linen zro
		{
			if(tiv[y] == 0 && tiv[y - 1] == 0 && tiv[0] != 0)
			{
				++erku_zroneri_qanak;
				break;
			}
		}
	}
	int qanak = amenamets_tasakan - erku_zroneri_qanak;
	cout << " chkrknvox zroneri qanak@ = " << qanak << endl;
  return 0;
}
