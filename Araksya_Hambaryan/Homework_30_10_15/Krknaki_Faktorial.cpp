#include <iostream>
// Trvac N bnakan tvi hamar voroshel krkanki faktorial` N!! = n(n-2)(n-4) ..., ete V@ zuyg tiv e verji artadrich@ havasar e 2, hakarak depqum 1

int KrknakiFaktoialZuyg (int N);
int KrknakiFaktoialKent (int N);

int KrknakiFaktorialZuyg (int N) {
    return (N == 2) ? N : N*KrknakiFaktorialZuyg (N-2);
}
int KrknakiFaktorialKent (int N) {
    return (N == 1) ? N : N*KrknakiFaktorialKent (N-2);
}
int main () {
    int N = -1;
    while (N < 0) {
	std::cout << "Mutqagrel N bnakan tiv (N > 0)`  N= ";
	std::cin >> N;
    }
    if ((N % 2) == 0) {
	std::cout << "N!! = " << KrknakiFaktorialZuyg (N) << std::endl;
    } else {
	std::cout << "N!! = " << KrknakiFaktorialKent (N) << std::endl;
    }
    return 0;
}
