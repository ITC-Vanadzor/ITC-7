#include <iostream>
#include <cstdio>
// Voroshel Kent texerum gtnvox tveric poqraguyni ev zuyg texerum gtnvox tveric Metcaguyni gumar@, ete mutqagrvum en 10000-@ chgerazancox amboxj tver
// sxal e ashxatum !!!:(((

int KentTexerumPoqraguyn (int Qanak, int Tiv[]) {
    int Poqraguyn = Tiv[0];
    for (int i = 2; i < Qanak; i += 2) {
	if (Poqraguyn > Tiv[i]) {
	    Poqraguyn = Tiv[i];
	}
    }
    return Poqraguyn;
}
int ZuygTexerumMetcaguyn (int Qanak, int Tiv[]) {
    int Metcaguyn = Tiv[1];
    for (int i = 3; i < Qanak; i += 2) {
	if (Metcaguyn < Tiv[i]) {
	    Metcaguyn = Tiv[i];
	}
    }
    return Metcaguyn;
}
 int main () {
     int Tiv[10000];
     
     std::cout << "Mutqagreq hat tver, isk verjacneluc havaxel x` " << std::endl;
     int Qanak = 0;
     do {
	 std::cin >> Tiv[Qanak];
	 ++Qanak;
	 if (Tiv[Qanak] == EOF) {
	     break;
	 }
     } while (Tiv[Qanak] < 10000);
     std::cout << "qanak " << Qanak << std::endl;
     for (int i = Qanak; i < 10000; ++i) {
	 Tiv[i] = 0;
     }
     std::cout << "Metcaguyni ev poqraguyni gumarn e `  " << (KentTexerumPoqraguyn (Qanak, Tiv) + ZuygTexerumMetcaguyn (Qanak, Tiv)) << std::endl;
     return 0;
 }
