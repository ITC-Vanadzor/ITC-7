#include <iostream>
using namespace std;
int main()
{
	int number = 0;	
	while(number <= 0)
	{
		cout <<"tpel voreve drakan amboxj tiv" << endl;
		cin >> number;
	}
	int qanak = 0; // qanak@ da zroyov verjacox tveri qanakn e
 
	if((number / 5) >= 1)
	{
		qanak += number / 5; // yuraqanchyur tiv bajanac 5-i stacvum e nra faktoriali 0-ov verjacox artadryalneri qanak@
		cout <<"zroyov verjacox tveri qanak@ = " << qanak << endl;
	}
	else
	{
		cout <<"zroyov verjacox artadryal chka" << endl;
	}

   return 0;
}
