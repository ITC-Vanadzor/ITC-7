#include <iostream>
#include <string>
// qani vor khaxti ayn xaxacox@ vor@ ir naxaverji qaylum kuyteric mekum ktoxni 0 @nkuyz isk myusum 2, apa isk nman payman kareli e stanal erb 2 kuyterum el @nkuyzner@ zuyg tvov en, apa xaxi elq@ kvoroshvi hetevyal kerp

int Nermucum (std::string Xumb) {
	int KuytumQanak = -1;
	while ((KuytumQanak < 1) || (KuytumQanak > 109)) {
		std::cout << Xumb << "= ";
		std::cin >> KuytumQanak;
	}
}
int main () {
	std::cout << "Mutqagreq Kuyterum @nkuyzneri qanakner@` " << std::endl;
	int A = Nermucum ("A");
	int B = Nermucum ("B");
	if ((A%2 == 0) || (B % 2 == 0)) {
		std::cout << "2, aysinqn haxtelu e Armen@" << std::endl;
	} else {
		std::cout << "1, aysinqn haxtelu e Arman@" << std::endl;
	}
	return 0;
}
