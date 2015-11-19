// tsragir, vor voroshum e, te trvats gumar@ trvats tokosadruyqov avand nerdnelis qani amis anc kgerazanci naxoroq mutqagrvats gumar@  ev hamapatasxabnabar kartatsi amis@ ev ggerazancox gumar@
# include <iostream>
using namespace std;

int main()
{
	double Amount;// avand nerdrvox gumar
	cout<<"\n Enter amount ";
		cin>>Amount;
	double  Percent;
	cout<<"\n Enter Percent ";
		cin>>Percent;//tokosadruyq
	double  MaxAmount;
	cout<<"\n Enter MaxAmount ";
		cin>>MaxAmount;// max gumar@, vor@ erb gerazancvi, artatsi gerazancats gumar@ ev amis@
	int month=0;// amis@
	for(; Amount<=MaxAmount; ++month)
	{

     Amount=Amount*(1+ Percent/100);//hashvarkum e yuraqanchyur amis anc nerdrvats gumar@+ velacvats chap
	}
	cout<<"After " <<month<<" month the amount will be "<< Amount<<endl;
	return 0;
}