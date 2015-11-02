#include <iostream>
// a ev b tveric metcaguynin veragrel 7 arjeq

int& max(int& a, int& b) {
    return a > b ? a : b;
}
void anssign(int &a,int &b) {
    max(a, b) =7;
}

int main() {
    int a = 0;
    int b = 0;
    do {
	std::cout << "Mutqagrel irar voch havasar tver " << std::endl;
	std::cout << "a= ";
	std::cin >> a;
	std::cout << "b= ";
	std::cin >> b;
    } while (a == b);
    anssign(a,b);
    std::cout << "a= " << a << "  b= " << b << std::endl;
    return 0;
}
