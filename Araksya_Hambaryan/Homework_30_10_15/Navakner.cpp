#include <iostream>
#include <string>
// Qani exanakov kareli e dasavorel K tvov navakner@ N x N chapani shaxmatayin taxtaki vra aynpes, vor nranq mimyanc chharvacen

int Nermucum (std::string Anun) {
    int N=-1;
    while ((N < 0) || (N > 9)) {
	std::cout << "Nermucel " << Anun;
	std::cin >> N;
    }
    return N;
}

int main () {
    int N = Nermucum ( "vandakneri tiv@ N= ");
    int K = Nermucum ( "Navakneri tiv@ K= ");
    if ( K > N) {
	std::cout << 0;
    }
    int Qayl[N];
    for (int i = 0; i < N; ++i) {
	Qayl [N] = 0;
    }
    Qayl [0] = N;
    int ExanakneriQanak = Qayl [0];
    int i = 1;
    do {
	if (i <= (N-K)) {
	    Qayl [i] = Qayl [i-1]; 
	} else {
	    Qayl [i] = Qayl [i-1] - 1; 
	}
	ExanakneriQanak *= Qayl [i];
	++i;
    } while (i < N);
    std::cout << "Hnaravor Exanakneri qanakn e`  " << ExanakneriQanak << std::endl;
    return 0;
}

