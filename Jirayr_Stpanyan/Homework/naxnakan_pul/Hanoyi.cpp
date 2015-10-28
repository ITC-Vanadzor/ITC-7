# include <iostream>
using namespace std;
void Hanoyi(int Disk, char a, char b, char c);
int main()
{ 
	int disks;
	char a, b, c;
	cout<<"Enter number of disks: ";
	cin>>disks;
	Hanoyi(disks, a, b, c);
	
	return 0;
}

void Hanoyi(int Disk, char a, char b, char c)
{
	if(Disk==1)
	{
		cout<<a<<"-"<<b<<endl;//ete 1disk e uremn texapoxum e verjnakan dzoxi vra
	}
	else
	{
		Hanoyi(Disk-1, a,c,b);//disk-1-rd@ texapoxum e jamanakavor dzoxi vra
		Hanoyi(1,a,b,c);//verjin disk@ texapoxum e verjnakan dzoxi vra
		Hanoyi(Disk-1,c,b,a);//jamanakavor dzoxic texapoxum e verjnakan dzoxi vra
		
	}
}

