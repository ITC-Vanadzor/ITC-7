#include <iostream>
#include <cmath>
#include <limits>

double makeres (double xA, double yA, double xB, double yB, double xC, double yC) // erankayn makeresn @st mi gagatic elnox 2 vektorneri vektorakan artadryali kesi
{
	double A=(xC-xA)*(yB-yA)-(yC-yA)*(xB-xA);
	return fabs (A);
}

double kotorakayin_mas (double SABD, int amboxj_mas_SABD) // kotprakajin masi arandznacum
 {
	return SABD-amboxj_mas_SABD;
 }

int main ()
{
	double xA;
	double yA;
	double xB;
	double yB;
	double xC;
	double yC;
	double xD;
	double yD;
	std::cout << "mutqagrel erankyan gagatneri ev keti koordinatner@" << '\n';
	std::cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;
	double SABC=makeres(xA, yA, xB, yB, xC, yC);
	double SABD=makeres(xA, yA, xB, yB, xD, yD);
	double SDAC=makeres(xD, yD, xA, yA, xC, yC);
	double SDBC=makeres(xD, yD, xB, yB, xC, yC);
	int amboxj_mas_SABD= SABD;
	int amboxj_mas_SDAC= SDAC;
	int amboxj_mas_SDBC= SDBC;
	double S=SABC - (amboxj_mas_SABD+amboxj_mas_SDAC+amboxj_mas_SDBC);
	if ((S-kotorakayin_mas(SABD, amboxj_mas_SABD)-kotorakayin_mas (SDAC, amboxj_mas_SDAC)-kotorakayin_mas (SDBC, amboxj_mas_SDBC))<std::numeric_limits<double>::epsilon())
	{
		std::cout << "patkanum e"<< std::endl;
	}
	else 
	{
 		std::cout << "chi patkanum" << std::endl;
	}
 return 0;
}
 
