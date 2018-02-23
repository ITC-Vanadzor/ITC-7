//a-i factorialum 0-neri qanak@ verjic
#include<iostream>

int main() {
	int a;
	std::cin >> a;
	int zeroCounts = 0;
	int hing = 5;
	while (hing<a) {
		zeroCounts += a / hing;
		hing *= hing;
					}
	
	std::cout << zeroCounts;
	return 0;
			}