#include <iostream>
using namespace std;
int main()
{   
	int int_max = 1<<(sizeof(int)*8-1);
	cout << "max -> " << ~int_max << endl;
	
	int int_min = int_max-1;
	cout << "min -> " <<~int_min << endl;

	return 0;

}
