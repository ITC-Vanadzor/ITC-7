#include <iostream>
// voroshel te qani 0-ov e verjanum N tvi faktorial@

/*int NermucelTiv(char* Tiv) {
	int N=0;
	std::cout << "Mutqagrel tiv@ (1≤N≤40000000)` N= ";
	std:: cin >> N;
	while ((N<1) || (N>40000000)) {
		std::cout << " Mutqagrvac tiv@ chi hamapatasxanum paymanin, krkin porceq" << std::endl;
		std::cout << "Mutqagrel tiv@ (1≤N≤40000000)` N= ";
		std::cin >> N;
	}
	return N;
}*/

int HinginBazmapatik (int N)   {
	int HingeriQanak=0;
	int Bazmapatik=5;
	if (Bazmapatik<=N) {
		do { 
			++HingeriQanak;
			Bazmapatik+=5;
		}
		while ( Bazmapatik<=N );
 		}
	return HingeriQanak;
}


int main() {
	int N=0;
	std::cout << "Mutqagrel tiv@ (1≤N≤40000000)` N= ";
	std:: cin >> N;
	while ((N<1) || (N>40000000)) {
		std::cout << " Mutqagrvac tiv@ chi hamapatasxanum paymanin, krkin porceq" << std::endl;
		std::cout << "Mutqagrel tiv@ (1≤N≤40000000)` N= ";
		std::cin >> N;
	}
	int ZroneriQanak=HinginBazmapatik (N);
	std::cout << ZroneriQanak << std::endl;
	return 0;
}


