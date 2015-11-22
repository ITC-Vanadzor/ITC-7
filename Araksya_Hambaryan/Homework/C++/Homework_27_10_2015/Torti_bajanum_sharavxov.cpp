#include <iostream>
#include <cmath>
// Tort@ bajanel  n hyureri mej havasar ktornerov, bajanel hnaravor e sharavxov kam tramagcov

int main () {
	int n=0;
	 std::cout << "Hyureri qanak@` n= ";
	 std::cin >> n;
	
	if (n%2==0) {
		std::cout << "ktrvacqneri nvazaguyn qanakn e` " << n/2 << std::endl;
	}
	else {
		std::cout << "ktrvacqneri nvazaguyn qanakn e` " << (n-1) << std::endl;
	}
	float SektorAnkyun=360/n;
	int Sharavix=0;
	std::cout << "nermucel sharavix@` R=  ";
	std::cin >> Sharavix;
	std::cout << "(0, 0) ---  " << Sharavix <<  ", 0" <<std::endl;
	for (int i=1; i<n; ++i) {
		std::cout << "(0, 0) ---  " << (Sharavix*cos(SektorAnkyun*i*M_PI/180)) << " , " << (Sharavix*sin(SektorAnkyun*i*M_PI/180)) << std::endl;
	}
	return 0;
}