//tsragir, vor voroshum e N tvum arka mekeri qanak@ 2-akan hamakargi
# include <iostream>
using namespace std;
int main()
{
	 unsigned int number;
	cout<<"Enter Number\t";
	cin>>number;
	int count=0;//voroshum e 1-eri qanak@
    while(number!=0)
	{ 
		if((number & 1)){//ete tvi ev 1-i &-@ mek e` (1&1)==1, uremn countn avelanum e mekov
			++count;}
		number=number>>1;
		
	}
	cout<<" There are "<<count<<" one in this number \n";
	return 0;
}

