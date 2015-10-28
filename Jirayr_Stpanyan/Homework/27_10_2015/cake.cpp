#include <iostream>
using namespace std;
int main()
{
	int hyureri_qanak = 0;
	while(hyureri_qanak <= 0)
	{
		cout << "tpel hyureri qanak@ ";
		cin >> hyureri_qanak;
	}
	if(hyureri_qanak % 2 == 0)
	{	
		int chaps = 360 / (hyureri_qanak / 2);
		cout << "tort@ petq e ktrel tramagcov` " << hyureri_qanak / 2 << " gcov" << endl;
		cout << "ev ktorner@ petq e ktrel torti yuraqanchyur "<< chaps << "rd astijan@ mek" << endl;
	}
	else
	{
		int hyureri_qanak_minus_mek = hyureri_qanak - 1;
		cout << "tort@ petq e ktrel uxix ` " << hyureri_qanak_minus_mek << " gcov" << endl;
	}
	
   return 0;
}
