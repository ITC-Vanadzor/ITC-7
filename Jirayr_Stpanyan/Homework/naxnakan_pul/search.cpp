#include <iostream>
#include <string>
using namespace std;
class card
{
	string anun;   // aystex pak andamnri tesqov haytararum enq anun.......
	string azganun;
	string hasce;
	string heraxos;
	public:
		card() {}  // haytararum enq card datark konstruktor@
		card(string an, string az, string ha, string he) // ays konstrukorum arjeqavorum enq pak andamnerin
		{
			anun = an;
			azganun = az;
			hasce = ha;
			heraxos = he;
		}
		string getanun(){return anun;} // ays funkcianerum hamematabar stanum en irenc informacian
		string getazganun(){return azganun;}
	  	string gethasce(){	return hasce;}
		string getheraxos(){return heraxos;}
		void get() // hanum a ekran pntrvaci bolor tvyalner@
		{
			cout << "anun \t" << anun << "\t azganun \t" << azganun << "\t hasce \t" << hasce << "\t heraxos \t" << heraxos;
		}
};

int main()
{
	cout << "qani hogu hamar eq cucak uzum??? ";
	int n;
	cin >> n;
	card *pcard = new card[n];  // nermucvac n-i hamar dinamik hishocutyan mej nor nor tex a azatum
	for( int i = 0; i < n; i++) // ays cikli mej lracvum en cucaki andamneri tvyalner@
	{
		cout <<"tpel anun@ ";
		string an; 
		cin >> an;
		cout <<"tpel azganun@ ";
		string az; 
		cin >> az;
		cout <<"tpel hascen ";
		string ha; 
		cin >> ha;
		cout <<"tpel heraxos@ ";
		string he; 
		cin >> he;
		pcard[i] = card(an, az, ha, he); // pcard[i]- in veragrum enq arden arjeqavorvac card construktor@
	}
	
	cout << "pntrum eq @st inchi???" << endl;
	cout << "1 - anuni" << endl;
	cout << "2 - azganuni" << endl;
	cout << "3 - hascei" << endl;
	cout << "4 - heraxosi" << endl;
	int search;
	cin >> search;
	while(search < 1 || search > 4) // ete mutqagrvac tiv@ poqr e 1-ic kam mec e 4-ic uremn peq e noric mutqagrel vorovhetev menq nman hraman chunenq
		{
		cout << " tpel 1ic 4 tver@";
		}
	if(search == 1) // ete mutqagrvel e 1 uremn pntrvum e @st anuni, mutqagrvac anunov search a anu mer pcard[i] cucaki anunneri mej u hamnknelu depqum hanum a ekran nra bolor tvyalner@
		{
			cout << "tpel anun";
			string ann;
			cin >> ann;
			for(int i = 0; i < n; i++)
				if(pcard[i].getanun() == ann)
					pcard[i].get();
		}
		if(search == 2) //aystex el @st azganuni
		{
			cout << "tpel azganun";
			string azz;
			cin >> azz;
			for(int i = 0; i < n; i++)
				if(pcard[i].getazganun() == azz)
					pcard[i].get();
		}
		if(search == 3) // aystex el @st hascei
		{
			cout << "tpel hasce";
			string has;
			cin >> has;
			for(int i = 0; i < n; i++)
				if(pcard[i].gethasce() == has)
					pcard[i].get();
		}
		if(search == 4) // @st heraxosi
		{
			cout << "tpel heraxos";
			string her;
			cin >> her;
			for(int i = 0; i < n; i++)
				if(pcard[i].getheraxos() == her)
					pcard[i].get();
		}
		
		return 0;
}
