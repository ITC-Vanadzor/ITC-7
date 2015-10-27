#include <iostream>
// Voroshel dxyaki K makardaknerum senyakneri qanak@, ete amen makardakn uni N-ankyan tesq, vori ankjun@ ham@nknum e naxord bazmankyan ankyan het

void SenyakneriQanak(int N, int K){
	int SenyaknerQanak=(2*N+N*(K-1))*K/2; //tvabanakn progresiayi gumari banadzev
	// int SenyaknerQanak=(2*N+N*(K-1))*K/2-(2*3+ 2* (K-2))*(K-1)/2; //1 makardakum pakasum e 0 senyak, 2rdum 3 u amen hajordum 2-ov avel
	std::cout << "bolor makardaknerum senyakneri qanakn e "<< SenyaknerQanak << std::endl;
}

int main() {
	int N; // Bazmankyan ankyunneri qanak
	int K; //Makardakneri qanak
	std::cout << "nermucel bazmankyan ankyunneri qanak@ (3<=N<=300) ` N= ";
	std::cin >> N;
	while (N<3 || N>300) {
		std::cout<< "nermucvel e sxal tvyal, krkin porceq" << std::endl;
		std::cout << "nermucel bazmankyan ankyunneri qanak@ (3<=N<=300) ` N= ";
	std::cin >> N;
	}
	std::cout << "nermucel makardakneri qanak@ (1<=K<=1000) ` K= ";
	std::cin >> K;
	while (K<1 || K>1000) {
		std::cout<< "nermucvel e sxal tvyal, krkin porceq" << std::endl;
		std::cout << "nermucel makardakneri qanak@ (1<=K<=1000) ` K= ";
		std::cin >> K;
	}
	SenyakneriQanak(N,K);
	return 0;
}
