#include <iostream>

void Quickssort (int skizb, int verj, int Element[]) {
    int mijin=(skizb+verj)/2;
    int i= skizb;
    int j = verj;
    if (verj > skizb) {
	while (i<=j) {
	    while (Element[i]<=Element[mijin]) {
		++i;
	    }
	    while (Element[j]>Element[mijin]) {
		--j;
	    }
	    if ((i<=j) && (Element[i]>Element[j]) ) {
		std::swap(Element[i], Element[j]);
	    }
	}
	Quickssort (skizb, mijin, Element);
	Quickssort (mijin+1, verj, Element);
    }
}
int main () {
    int n=-1;
    do {
	std::cout << "Elementneri qanak@` n= ";
	std::cin >> n;
    } while (n < 1);
    int Element[n];
    std::cout << "Mutqagreq elementner@` " <<std::endl;
    for (int i = 0; i < n; ++i) {
	std::cout << "Element[" << i << "]= ";
	std::cin >> Element[i];
    }
    Quickssort(0, n-1, Element);
    for (int i = 0; i< n; ++i) {
	std::cout << Element[i] << "\t";
    }
    return 0;
}
