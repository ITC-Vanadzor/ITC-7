#include <iostream>
#include <cstdlib>
// Gtnel erku bnakan tveri amenametc @ndhanur bajanarar@

int Input (std::string digit) {
    std::cout << digit << " digit = ";
    int a = -1;
    do {
	std::cin >> a;
    } while (a < 1);
    return a;
}

int Min(int a,int b) {
    return a < b ? a : b;
} 

int GSF(int a,int b) {
    int min = Min(a, b);
    int diff = abs (a - b);
    if (a - b == 0) {
	return a;
    } else  {
	return GSF (diff, min);
    }
}

int main() {
    int FirstDigit = Input("First");
    int SecondDigit = Input ("Second");
    std::cout << "GSF (" << FirstDigit << ", " << SecondDigit << ") = " << GSF(FirstDigit, SecondDigit) << std::endl;
    return 0;
}
