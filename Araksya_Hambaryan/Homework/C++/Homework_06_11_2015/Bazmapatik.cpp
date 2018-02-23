#include <iostream>
#include <cstdlib>
// Gtnel erku bnakan tveri amenapoqr @ndhanur bazmapatik@

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

int Max (int a, int b) {
    return a > b ? a : b;
}

int LCM(int a,int b) {    
    static int ab = a*b;
    if ((a==0) || (b==0)) {
	return ab/(a+b);
    } else  {
	return LCM (a%b, b%a);
    }
}

int main() {
    int FirstDigit = Input("First");
    int SecondDigit = Input ("Second");
    std::cout << "LCM (" << FirstDigit << ", " << SecondDigit << ") = " << LCM(FirstDigit, SecondDigit) << std::endl;
    return 0;
}
