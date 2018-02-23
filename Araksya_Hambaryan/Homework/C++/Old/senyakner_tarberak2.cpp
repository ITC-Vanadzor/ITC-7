#include <iostream>
// n-ic m hamari senyakneri hamarnerum tvanshanneri qanaki voroshum(minchev m=99 depqi hamar) -- tarberak 2
int main()
{
	int n;
	std::cout << "n= ";
	std::cin >> n;
	int m;
	std::cout << "m= ";
	std::cin >> m;
	int tvanshan[9];
	for (int i=0; i<=9; ++i)
	{
		tvanshan[i]=0;
	}
	int ncopy;
	ncopy=n;
	int miavor;
	do
	{
		miavor=ncopy%10;
		++tvanshan[miavor];
		ncopy/=10;
	}
	while (ncopy>0);
	for (int i=0; i<=9; ++i)
	{
		tvanshan[i]+=(m-n)/10;
	}
	int mnacord;
	int mnacord1;
	int mnacord2;
	mnacord=(m-n)%10;
	if (mnacord+miavor<=9)
	{
		mnacord1=mnacord;
		mnacord2=0;
	}
	else
	{
		mnacord1=9-miavor;
		mnacord2=mnacord+miavor-9;
	}
	for (int i=miavor+1; i<=(miavor+mnacord1); ++i)
	{
		++tvanshan[i];
	}
	if (mnacord2!=0)
	{
		for (int i=0; i<=mnacord2; ++i)
		{
		++tvanshan[i];
		}
	}
	int ntasnavor;
	ntasnavor=(n-miavor)/10;
	int mtasnavor;
	mtasnavor=(m-m%10)/10;
	if (ntasnavor>0)
	{
		if ((m-n)/10!=0)
		{
			tvanshan[ntasnavor]+=9-miavor;
		}
		else
		{
			tvanshan[ntasnavor]+=mnacord1;
		}
	}
	++ntasnavor;
	while (ntasnavor<mtasnavor)
	{
		
		tvanshan[ntasnavor]+=10;
		++ntasnavor;
	}
	if ((m-n)/10!=0)
	{
		if (mnacord2!=0)
		{
			tvanshan[mtasnavor]+=mnacord2;
		}
		else
		{
			tvanshan[mtasnavor]+=m%10;
		}
	}
	for (int i=0; i<=9; ++i)
	{
		std::cout<< tvanshan[i] <<'\t';
	}

	return 0;
}
