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
	int amenamets_tasakan=pow(k_akan,n_anish)-1; // maximum kunenanq aydqan tiv
	int erku_zroneri_qanak = 0;
	for (int i=0; i<=amenamets_tasakan;++i)
	{
		for(int x = 0; x < n_anish; ++x)
		{
			tiv[x] = 0;
		}
		int k=i;
	        int j=0;
	        cout << "i=" << i << endl;
	        while (k>0) // hertakanutyamb massivi andamner@ berum enq k-akan hamakargi
	        {
       			tiv[j]=k%k_akan;
			j=j+1;
			k=k/k_akan;
       	        }
	        for (int l=n_anish-1;l>=0;--l) // ays cikl@ grel em nra hamar vor tesneq vor dzer uxarkac xndri nkarum sxal a tvac
	        {
			cout << "tiv["<< l << "]=" << tiv[l] << "   ";
	        }
	        cout << endl;
	    	for(int y = 0; y<(n_anish-1); ++y) // ays cikl@ stugum em massivi harevan andamnerin vor erkusn el linen zro
		{
			if(tiv[y] == 0 && tiv[y + 1] == 0)
			{
				++erku_zroneri_qanak;
				break;
			}
		}
	}
	int qanak = (amenamets_tasakan +1) - erku_zroneri_qanak;
	cout << " chkrknvox zroneri qanak@ = " << qanak << endl;
  return 0;
}
