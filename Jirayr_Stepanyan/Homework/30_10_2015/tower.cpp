#include <iostream>
#include <cmath>
using namespace std;
int main()
{	
	int ashtarakneri_qanak = 0;
	while(ashtarakneri_qanak <= 0)
	{
		cout << "tpel ashtarakneri qanak@ ";
		cin >> ashtarakneri_qanak;
	}
	int xoranardneri_qanak[ashtarakneri_qanak];
	int xoranardneri_gumar = 0;
	int texapoxman_qanak = 0;
	for(int i = 0; i <ashtarakneri_qanak; ++i)
	{
		cout << "tpel " << i + 1 << " ashtaraki xoranardneri qanak@ ";
		cin >> xoranardneri_qanak[i];		
		xoranardneri_gumar += xoranardneri_qanak[i];
	}
	if((xoranardneri_gumar % ashtarakneri_qanak) > 0)	
	{
		cout << " hnravor chi " << endl;
	}
	else
	{
		int mijin = xoranardneri_gumar / ashtarakneri_qanak;
		for(int i = 0; i < ashtarakneri_qanak; ++i)
		{
			if(xoranardneri_qanak[i] == mijin)
			{
				texapoxman_qanak += 0;
			}
			if(xoranardneri_qanak[i] > mijin)
			{
				texapoxman_qanak += abs(xoranardneri_qanak[i] - mijin);
			}
		}
		cout << "amenaqich@ petq e texapoxel " << texapoxman_qanak << " xoranard" << endl;
	}
	

   return 0;
}
