#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
void hashvark(const int &a, const int &b)
{
	if(a == 1 && b > 1)
	{
		cout << " hnaravor chi " << endl;
		exit(1);
	}
	if(b == 1)
	{
		cout << "navakner@ hnaravor e dasavorel " << a << "dzevov "<<endl; 
	}
	int qayleri_qanak = 1;
	for(int i = 2; i <= a; ++i)
	{
		qayleri_qanak *= pow(i, 2); 
	}
	int krknvox_qayler = 1;
	for(int j = 2; j <= b; ++j)
	{
		krknvox_qayler *= j; 
	}
	qayleri_qanak /= krknvox_qayler;
	cout << b  << " hat navak@ kareli dasavorel " << a << " chapani shaxmati sexani vra " << qayleri_qanak << " dzevov ";
}
int main()
{
	int shaxmati_sexan = 0, navakneri_qanak = 0;
	while(shaxmati_sexan <= 0, navakneri_qanak <= 0)
	{
		cout << "tpel shaxmati sexani chapser@ (NxN) ";
		cin >> shaxmati_sexan;
		cout << "tpel navakneri qanak@ ";
		cin >> navakneri_qanak;
	}
	hashvark(shaxmati_sexan, navakneri_qanak);

   return 0;
}
