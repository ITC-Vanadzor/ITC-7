#include <iostream>
#include <cstdlib>
// Gtnel erku bnakan tveri amenametc @ndhanur bajanarar@
// Tarberak 2

int Input (std::string digit) {
    std::cout << digit << " digit = ";
    int a = -1;
    do {
	std::cin >> a;
    } while (a < 1);
    return a;
}

int Mod(int a,int b) {
    return a > b ? a%b : b%a;
} 

int Min(int a, int b) {
    return a < b ? a : b;
}

int GSF(int a,int b) {
    int mod = a%b;
    if (Mod(a, b) == 0) {
	return Min(a, b);
    } else  {
	return GSF (Mod(a, b), Min(a, b));
    }
}

int main() {
    int FirstDigit = Input("First");
    int SecondDigit = Input ("Second");
    std::cout << "GSF (" << FirstDigit << ", " << SecondDigit << ") = " << GSF(FirstDigit, SecondDigit) << std::endl;
    return 0;
}
