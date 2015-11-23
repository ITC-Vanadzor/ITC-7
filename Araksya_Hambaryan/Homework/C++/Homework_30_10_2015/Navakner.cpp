#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
// Qani exanakov kareli e dasavorel K tvov navakner@ N x N chapani shaxmatayin taxtaki vra aynpes, vor nranq mimyanc chharvacen

int Nermucum (std::string Anun) {
    int N=-1;
    while ((N < 0) || (N > 9)) {
	std::cout << "Nermucel " << Anun;
	std::cin >> N;
    }
    return N;
}
int Faktorial (int N) {
    return N==1 ? N : N * Faktorial(N-1);
}

int main () {
    int N = Nermucum ( "vandakneri tiv@ N= ");
    int K = Nermucum ( "Navakneri tiv@ K= ");
    if ( K > N) {
	std::cout << "Hnaravor che voch mi exanakov" << std::endl;
	exit(0);
    }
    int ExanakneriQanak = 0;
    if (N != K) {
	ExanakneriQanak = pow(N, N-K) * Faktorial (N) / Faktorial (N-K);
    } else {
	ExanakneriQanak = Faktorial (N);
    }
    std::cout << "Hnaravor Exanakneri qanakn e`  " << ExanakneriQanak << std::endl;
    return 0;
}

