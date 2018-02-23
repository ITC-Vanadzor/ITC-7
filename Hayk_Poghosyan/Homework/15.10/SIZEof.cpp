#include <iostream>
#include <cmath>
using namespace std;
int main() {

	cout << "int max=" ;
	printf("%15.0f\n", (pow(2, (8 * sizeof(int) - 1)) - 1));
	cout << "int min=";
	printf("%15.0f\n",-1*(  pow(2, (8 * sizeof(int) - 1)) - 1));
	
	cout << "unsigned int max=";
	printf("%15.0f\n", 2*(pow(2, (8 * sizeof(unsigned int ) - 1)) )-1);
	cout << "unsigned int min=" << "0" << endl;
	
	cout << "short max=";
	printf("%15.0f\n", (pow(2, (8 * sizeof(short) - 1)) - 1));
	cout << "short min=";
	printf("%15.0f\n", -1 * (pow(2, (8 * sizeof(short) - 1)) - 1));

	cout << "unsigned short max=";
	printf("%15.0f\n", 2 * (pow(2, (8 * sizeof(unsigned short) - 1))) - 1);
	cout << "unsigned short min=" << "0" << endl;

	system("Pause");

}