#include <iostream>
#include <cstdlib>
#include <cmath>
// Gtnel erku bnakan tveri amenametc @ndhanur bajanarar@, voeoncic mek@ kazmvac e N hat 1-eric, myus@` M

int Input (std::string digit) {
    std::cout << digit << " digit = ";
    int a = -1;
    do {
	std::cin >> a;
    } while (a < 1);
    return a;
}

int HowManyOneGSF(int N,int M) {
    if (N == M) {
	return N;
    }
    if ((N == 0) || (M == 0 )) {
	return N+M;
    } else  {
	return HowManyOneGSF (N-2*M, M);
    }
}

int main() {
    int N = Input("N");
    int M = Input ("M");
    int K = 0;
    if (N >M) {
	K = HowManyOneGSF (N, M);
    } else {
	K = HowManyOneGSF(M, N);
    }
    int GSF = 0;
    for (int i = 0; i < K; ++i) {
	GSF += pow(10, i);
    }   
    std::cout << "GSF = " << GSF << std::endl;
    return 0;
}
