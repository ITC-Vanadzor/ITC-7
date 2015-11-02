#include <iostream>
// qani vor khaxti ayn xaxacox@ vor@ ir naxaverji qaylum kuyteric mekum ktoxni 0 @nkuyz isk myusum 2, apa isk nman payman kareli e stanal erb 2 kuyterum el @nkuyzner@ zuyg tvov en, apa xaxi elq@ kvoroshvi hetevyal kerp

int main () {
	std::cout << "Mutqagreq Kuyterum @nkuyzneri qanakner@` " << std::endl;
	int A = -1;
	int B = -1;
	while ((A < 1) || (A > 109)) {
		std::cout << "A= ";
		std::cin >> A;
	}
	while ((B < 1) || (B > 109)) {
		std::cout << "B= ";
		std::cin >> B;
	}
	if ((A%2 == 0) || (B % 2 == 0)) {
		std::cout << "2, aysinqn haxtelu e Armen@" << std::endl;
	} else {
		std::cout << "1, aysinqn haxtelu e Arman@" << std::endl;
	}
	return 0;
}
