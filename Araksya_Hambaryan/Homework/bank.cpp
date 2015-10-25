#include <iostream>
using namespace std;
int main()
{
	int skzbnakan_gumar;
	cout<<"skzbnakan gumar ";
	cin >> skzbnakan_gumar>>" dram";
	int tokos;
	cout<<"amsakan tokosadruyq ";
	cin >> tokos;
	double verjnakan_gumar;
	cout<<"verjnakan gumar ";
	cin >> verjnakan_gumar >> " dram";
	int amis=0;
	double mnacord;
	mnacord=skzbnakan_gumar;
	do
	{
		++amis;
		mnacord=skzbnakan gumar*(1+amis*tokos/100);
	}
	while ( mnacord<verjnakan_gumar)
	cout << amis << "heto gumar@ dardzav "<<mnacord << " dram."<<endl;
	return 0;
}
