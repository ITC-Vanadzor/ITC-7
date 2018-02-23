#include <iostream>
#include <cstdlib>

int ArajiVerjiAndamner(int N,  int K) {
	int ArajiAndam=1;
	int VerjiAndam;
	VerjiAndam=K-(2*ArajiAndam+N-2)*(N-1)/2;
	if (VerjiAndam<ArajiAndam+N-2) {
		do {
			++ArajiAndam;
			VerjiAndam=K-ArajiAndam*(N-1)*(N-2)/2;
			}
		while ((VerjiAndam<ArajiAndam+N-2) && (ArajiAndam<K));
	}
	return ArajiAndam;
}


void Hajordakanutyun(int ArajiAndam, int N, int K) {
	int Zarmanahrash[N];
	int VerjiAndam;
	if (ArajiAndam==0) {
		std::cout << "nman hajordakanutyun hnaravor che"<< std::endl;
		exit(1);
	}
	Zarmanahrash[1]=ArajiAndam;
	VerjiAndam=K-ArajiAndam;
	for ( int i=2; i<=(N-1); ++i) {
		Zarmanahrash[i]=Zarmanahrash[i-1]+1;
		VerjiAndam-=Zarmanahrash[i];
	}
	Zarmanahrash[N]=VerjiAndam;
	for (int i=1; i<=N; ++i ) {
		std::cout << Zarmanahrash[i] << "   ";

	}
}

int main() {
	int N; //Hajordakanutyan andamneri qanak
	int K; //Hajordakanutyan andamneri gumar
	std::cout << "nermucel hajordakanutyan andamneri gumar@ (K<=10^4) ` K= ";
	std::cin>> K;
	while (K>10000) {
		std::cout << "nermucvel e sxal tvyal, krkin porceq" << std::endl;
		std::cout << "nermucel hajordakanutyan andamneri gumar@ (K<=10^4) ` K= ";
		std::cin >> K;
	}
	std::cout << "nermucel hajordakanutyan andamneri qanak@ (1<=N) ` N= ";
	std::cin >> N;
	while (N<1) {
		std::cout << "nermucvel e sxal tvyal, krkin porceq" << std::endl;
		std::cout << "nermucel hajordakanutyan andamneri qanak@ (1<=N) ` N= ";
		std::cin >> N;
	}

	int ArajiAndam=ArajiVerjiAndamner(N, K);
	Hajordakanutyun(ArajiAndam, N, K);
	return 0;
}


