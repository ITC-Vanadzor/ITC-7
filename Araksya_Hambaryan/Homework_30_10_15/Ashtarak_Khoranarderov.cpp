#include <iostream>
// trvac h1, h2, .. hn bardzrutyan n hat ashtarakneric nvazaguyn@ qani xoranardi texapoxmamb kareli e stanal havasar bardzrutyan ashtarakner

int MijinBarcrutyanVoroshum(const int& n, int h[]) {
    int Khoranard = 0;
    for (int i = 0; i < n; ++i) {
	Khoranard += h[i];
    }
    return Khoranard/n;
}
    

int main () {
    int n=0;
    while ((n < 1) || (n > 50)) {
	std::cout << "Mutqagreq ashtarakneri qanak@ (1 <= n <= 50)`  n= ";
	std::cin >> n;
    }
    int h[n];
    std::cout << "Mutqagrenq ashtarakneri bardzrutyunner@ ";
    for (int i = 0; i < n; ++i) {
	do {
	    std::cin >> h[i];
	} while (h[i] <= 0);
    }
    int Khoranard = 0;
    int MijinBarcrutyun = MijinBarcrutyanVoroshum(n, h);
    for (int i = 0; i <n; ++i) {
	if (h[i] > MijinBarcrutyun) {
	    Khoranard += (h[i] - MijinBarcrutyun);
	}
    }
    std::cout << "Anhrajesht e texapoxel " << Khoranard << " khoranard " << std::endl;
    return 0;
}
