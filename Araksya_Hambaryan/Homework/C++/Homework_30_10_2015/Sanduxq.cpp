#include <iostream>
// Voroshel te qani dzevov kareli e ancnel N astichan unecox sanduxq@, ete cankacac astichanic kareli e ancnel 1 kam 2 qaylov
// kaxvac asichanneri qanakic exanakneri qanakn irenic nerkayacnum e Fibonachchii sharq texapoxvac 1 andamov

int Fibonachchi (int N) {
    return ((N==1) || (N==2)) ? N : (Fibonachchi(N-2)+Fibonachchi(N-1));
}
int main () {
    int N=-1;
    while ((N <= 1) || (N >=30)) {
	std::cout << "Mutqagreq sanduxqi N astichanneri tiv@ (1<= N <= 30)` N= ";
	std::cin >> N;
    }
    std::cout << "Sanduxq@ kareli e ancnel  " << Fibonachchi(N) << "  tarberakov" << std::endl;
    return 0;
}
