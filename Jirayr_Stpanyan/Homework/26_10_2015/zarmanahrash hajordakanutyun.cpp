#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int tiv = 2, qanak = 2;
	while(qanak > (tiv / 2))
	{
		cout << "tpel voreve amboxj bnakan tiv ";
		cin >> tiv;
		cin >> qanak;
	}	
	int zarm[qanak];
	zarm[qanak - 1] = 0;
	for(int i = 0; i < qanak; ++i)
	{
		zarm[i] = qanak - (qanak - (i + 1));
		if(i == (qanak - 2))
		{
			for(int j = 0; j <= i; ++j)
			{
				zarm[qanak - 1] +=zarm[j];
			}
			zarm[qanak - 1] = tiv - zarm[qanak - 1];
			cout << tiv <<"-i mej zarmanahrash hjordakanutyan tvern en ";
			for(int i = 0; i < (qanak); ++i)
			{
				cout << zarm[i] << " ";
			}
		}
	}
	
	

   return 0;
}
