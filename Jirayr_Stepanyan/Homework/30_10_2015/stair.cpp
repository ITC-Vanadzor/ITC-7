#include <iostream>
using namespace std;
int fib(int n);
int main()
{
	int sanduxqneri_qanak = 0;
	while(sanduxqneri_qanak <= 0)
	{
 		cout << "tpel sanduxqneri qanak@ (drakan amboxj) ";	
	 	cin >> sanduxqneri_qanak;
	}
	sanduxqneri_qanak += 1;
 	int qayleri_qanak = fib(sanduxqneri_qanak);
 	cout << sanduxqneri_qanak - 1 << " sanduxq@ kareli e haxtaharel " << qayleri_qanak << " qaylov" << endl;
	
	return 0;	
}
int fib(int c)
{
	if(c < 3)
		return 1;
	else 
		return fib(c - 1) + fib(c - 2);
}
