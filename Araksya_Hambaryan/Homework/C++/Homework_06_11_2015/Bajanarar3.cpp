#include <iostream>
#include <cstdlib>
// Gtnel erku bnakan tveri amenametc @ndhanur bajanarar@
// Tarberak 3

int Input (std::string digit) {
    std::cout << digit << " digit = ";
    int a = -1;
    do {
	std::cin >> a;
    } while (a < 1);
    return a;
}

int GSF(int a,int b) {
    if ((a == 0) || (b == 0 )) {
	return a+b;
    } else  {
	return GSF (a % b, b % a);
    }
}

int main() {
    int FirstDigit = Input("First");
    int SecondDigit = Input ("Second");
    std::cout << "GSF (" << FirstDigit << ", " << SecondDigit << ") = " << GSF(FirstDigit, SecondDigit) << std::endl;
    return 0;
}
