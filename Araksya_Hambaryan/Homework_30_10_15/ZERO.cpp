#include <iostream>
#include <cmath>

int main () {
    int K = -1;
    while ((K <2) || (K > 10)) {
	std::cout << "Hashvarkayin hamakarg (2 <= K <= 10)` K= ";
	std::cin >> K;
    }
    int N = -1;
    while ((N < 2) || (N+K < 4) || (N+K > 18)) {
	std::cout << "Nisheri qanak@ (2 <= N, 4 <= N+K <= 18)` N= ";
	std::cin >> N;
    }
    //K-akan hamakargum bolor N-anish tveri qanak@ klini (K-1)*pow(K, N-1), isk an@ndmej 2 0 unecox tveri qanak@` (K-1)*pow(K, N-3)*(N-2)

    std::cout << "aranc erku an@ndmej zronerov tveri qanakn e`  " << (K-1) * pow(K, N-1) - (K-1) * pow(K, N-3)*(N-2) << std::endl;
    return 0;
}
