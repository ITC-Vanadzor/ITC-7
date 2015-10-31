#include <iostream>
#include <cmath>
// Tort@ bajanel  n hyureri mej havasar ktornerov, bajanel hnaravor e larerov kam tramagcov

double SegemntiAnkyun (double KtoriMakeres, int KtoriHamar, double AnkyunSkzbi) {
	double AnkyunVerji = AnkyunSkzbi;
	while (AnkyunVerji<360) {
		if (fabs((AnkyunVerji *M_PI/180 - (double)sin ((double)(AnkyunVerji*M_PI/180)) - 2* KtoriMakeres* KtoriHamar)) <0.1) {
			return AnkyunVerji;
			std::cout << "Ankyun` " << AnkyunVerji;
			break;
		}
		else {
			AnkyunVerji+=0.01;
		}
	}
}
	
 int main () {
	 int n=0;
	 std::cout << "Hyureri qanak@` n= ";
	 std::cin >> n;
	 double AnkyunSkzbi = 0*M_PI/180;
	 double KtoriMakeres = M_PI/n;
	 int KtoriHamar = 1;
	 double Ket[2][n];
	 while (KtoriHamar<=n) {
		AnkyunSkzbi= SegemntiAnkyun (KtoriMakeres, KtoriHamar, AnkyunSkzbi);
		 Ket[1][KtoriHamar]=cos(AnkyunSkzbi*M_PI/180);
		 Ket[2][KtoriHamar]=sin(AnkyunSkzbi*M_PI/180);
		 std::cout << "Ankyun` " << AnkyunSkzbi << ", koordinatner " << KtoriHamar << "   "<< "x= " << Ket[1][KtoriHamar] << " y= " << Ket[2][KtoriHamar] << std::endl;
		++KtoriHamar;
	 }
	 return 0;
 }