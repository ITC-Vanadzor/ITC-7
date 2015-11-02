#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int sanduxqneri_qanak = 0;
	while(sanduxqneri_qanak <= 0)
	{
 		cout << "tpel sanduxqneri qanak@ (drakan amboxj) ";	
	 	cin >> sanduxqneri_qanak;
	}
	int n = sanduxqneri_qanak + 1;
	int qayleri_qanak = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5); // aranc rekursiai` ays banadzev@ 														hashvvum e tvyal andami 													arjeq@ fibonachium (bayc 														apacucvac chi)
	cout << sanduxqneri_qanak << " sanduxq@ kareli e haxtaharel " << qayleri_qanak << " qaylov" << endl;

   return 0;
}
