#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double ab, bc, ac, am, bm, cm, Pabc, Pamc, Pabm, Pbcm, Sabc, Samc, Sabm, Sbcm;
	cout << "tpel erankyan A keti kordinatner@ " << endl;
	cout << "x1 = " << endl;
	double x1;
	cin >> x1;
	cout << "y1 = " << endl;
	double y1;
	cin >> y1;
	cout << "tpel erankyan B keti kordinatner@ " << endl;
	cout << "x2 = " << endl;
	double x2;
	cin >> x2;
	cout << "y2 = " << endl;
	double y2;
	cin >> y2;
	cout << "tpel erankyan C keti kordinatner@ " << endl;
	cout << "x3 = " << endl;
	double x3;
	cin >> x3;
	cout << "y3 = " << endl;
	double y3;
	cin >> y3;
	cout << "tpel M keti kordinatner " << endl;
	cout << "x4 = " << endl;
	double x4;
	cin >> x4;
	cout << "y4 = " << endl;
	double y4;
	cin >> y4;
	ab = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	bc= sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	ac= sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	am= sqrt(pow((x4 - x1), 2) + pow((y4 - y1), 2));
	bm= sqrt(pow((x4 - x2), 2) + pow((y4 - y2), 2));
	cm= sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
	Pabc = ab + bc + ac;
	double pabc = Pabc / 2;
	Pabm = ab + bm + am;
	double pabm = Pabm / 2;
	Pbcm = bc + bm + cm;
	double pbcm = Pbcm / 2;
	Pamc = am + cm + ac;
	double pamc = Pamc / 2;
	Sabc = sqrt(pabc * (pabc - ab) * (pabc - bc) * (pabc - ac));
	cout << Sabc << endl;  // hanum a ekran mec erankyan makeres@
	Sabm = sqrt(pabm * (pabm - ab) * (pabm - bm) * (pabm - am));
	cout << Sabm << endl; // hanum a ekran arajin poqr erankayan makeres@
	Sbcm = sqrt(pbcm * (pbcm - bc) * (pbcm - cm) * (pbcm - bm));
	cout << Sbcm << endl; // hanum a ekran erkrord poqr erankyan makeres@
	Samc = sqrt(pamc * (pamc - am) * (pamc - cm) * (pamc - ac));
	cout << Samc << endl; // hanum a ekran errord poqr erankyan makeres@
	if(Sabm + Sbcm + Samc == Sabc) 
		cout << " M ket@ gtnvum e ABC erankyan mej ";
	else
		cout << "M ket@ gtnvum e ABC erankyunic durs ";
	
return 0;
}
