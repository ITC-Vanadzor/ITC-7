#include <iostream>
using namespace std;



int about_type(char*, int,bool);
double pow(int , int);


int main()
{
	about_type("Int",sizeof(int),false);
	about_type("Unsigned Int",sizeof(int),true);
	about_type("Short",sizeof(short),false);
	about_type("Unsigned Short",sizeof(short),true);
	
	return 0;
}


int about_type(char *name, int value,bool unsg)
{
	cout<<"____Size of "<<name<<" is "<<value<<" byte_____"<<endl;
	double max,min;
	if (!unsg){
		max=pow(2,(value*8)-1)-1;
		min=(-1)*(max+1);
	}
	else {
			max=pow(2,value*8);
			max--;
			min=0;
	}

	cout.precision(15);
	cout<<"Min="<<min<<" Max="<<max<<endl<<endl;
	return 0;

}

double pow(int x, int n)
{
	double k=1;
	for(int i=1;i<=n;i++) k*=x;

	return k;

}