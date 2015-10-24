#include <iostream>
using namespace std;
void swap(int x,int y)
{
	x=x^y;
	y=x^y;
	x=x^y;
	cout<<"x= "<<x<<endl;
	cout<<"y= "<<y<<endl;
}
int main()
{
	int x,y;
	cout<<"x= "; cin>>x;
	cout<<"y= "; cin>>y;
	swap(x,y);
	return 0;
}
