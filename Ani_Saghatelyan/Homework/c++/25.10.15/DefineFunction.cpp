# include <iostream>
using namespace std;

#define Calculate  cout<<"The Function "<<__FUNCTION__<<" "<<"Entered "<<a<<" times"<<endl;

void F(){
	static int a=1; 
	Calculate
    a++;
};

int main()
{
	static int a=1;
	Calculate
	F();
	F();
	F();
	a++;
	return 0;
}
