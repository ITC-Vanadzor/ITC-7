#include <iostream>
#include <cstdio>
// Voroshel Kent texerum gtnvox tveric poqraguyni ev zuyg texerum gtnvox tveric Metcaguyni gumar@, ete mutqagrvum en 10000-@ chgerazancox amboxj tver


void MaxMinSum (int Qanak, int Tiv[]) {
    int Poqraguyn = Tiv[0];
    int Metcaguyn = Tiv[1];
    for (int i = 2; i < Qanak; ++i) {
	if (i%2 == 0) {
	    if (Metcaguyn < Tiv[i]) {
		Metcaguyn = Tiv[i];
	    }
	} else {
	    if (Poqraguyn > Tiv[i]) {
		Poqraguyn = Tiv[i];
	    }
	}
    }
    std::cout << "Metcaguyni ev poqraguyni gumarn e ` " << Metcaguyn + Poqraguyn << std::endl;
}

 int main () {
     int Qanak = -1;
     while ((Qanak <2) || (Qanak > 10000)) {
	std::cout << "Mutqagreq tveri qanak@ n= ";
	std::cin >> Qanak;
    }
    std::cout << "Mutqagreq tver@" << std::endl;
    int Tiv[Qanak];
    for (int i = 0; i < Qanak; ++i) {
	 std::cin >> Tiv[i];
    }
    MaxMinSum(Qanak, Tiv);
     return 0;
 }
