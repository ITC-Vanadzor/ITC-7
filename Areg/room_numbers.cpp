#include <iostream>
#include <string>

int inputRoomNumber(std::string room) {
    std::cout << room << " room number = ";
    int n = -1;
    std::cin >> n;
    while (n < 1) {
        std::cout << "Room number should be greater than 0, please repeat" 
            << std::endl;
        std::cout << room << " room number = ";
        std::cin >> n;
    }
    return n;
}

int determineDigits(int n, int digits[]) {
    int countOfDigits = 0;
    while (n > 0) {
        digits[countOfDigits] = n % 10;
        n /= 10;
        ++countOfDigits;
    }
    return countOfDigits;
}

int determineDigitCount(int digit, 
        int digits[], 
        int countOfDigits) {
    int sum = 0;
    for (int i = countOfDigits - 1; i >= 0; --i) {
        // TODO - add main logic here ;)
    }
    return sum;
}

void countAllDigits(int n, int counts[]) {
    int digits[10];
    int countOfDigits = determineDigits(n, digits);
    for (int digit = 0; digit <= 9; ++digit) {
        int count = determineDigitCount(digit, digits, countOfDigits);
        counts[digit] = count;
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void subtractCounts(int countsM[], int countsN[], int countsFinal[]) {
    for (int i = 0; i < 10; ++i) {
        countsFinal[i] = countsM[i] - countsN[i];
    }
}

int main() {
    int n = inputRoomNumber("first");
    int m = inputRoomNumber("second");
    int countsN[10];
    int countsM[10];
    int countsFinal[10];
    countAllDigits(n, countsN);
    printArray(countsN, 10);
    countAllDigits(m, countsM);
    printArray(countsM, 10);
    subtractCounts(countsM, countsN, countsFinal);
    printArray(countsFinal, 10);
    return 0;
}
