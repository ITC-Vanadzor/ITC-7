#include <iostream>
using namespace std;
int main()
{
	int max_int,min_int;
	max_int=(1<<8*sizeof(int)-1)-1;
	min_int=-1<<(8*sizeof(int)-1);
	unsigned int a=0;
	cout<<"int tipi mecaguyn arjeq@`             "<<max_int<<endl;
	cout<<"int tipi poqraguyn arjeq@`            "<<min_int<<endl;
	cout<<"unsigned int tipi mecaguyn arjeq@`    "<<~a<<endl;
	return 0;
}
