# include <iostream>
using namespace std;

#define Calculate {  int static a=0; ++a;  cout<<"The Function "<<__FUNCTION__<<" "<<"Entered "<<a<<" times"<<endl;}

void F(){
	Calculate
		Calculate
};

int main()
{
	Calculate
	F();
	Calculate
	F();
	F();
	return 0;
}
