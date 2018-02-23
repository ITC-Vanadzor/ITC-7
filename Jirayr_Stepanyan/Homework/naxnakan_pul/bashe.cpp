#include <iostream>
using namespace std;
int main()
{
	int gndak, qayl, player = 0, comp = 0;
	cout << "partvum e na ov vercnum e verjin gndak@" << endl;
	cout << "tpel gndakneri qanak@: ";
	cin >> gndak;
	cout << "tpel qayleri qanak@ (maximum gndakneric 2 hat qich): ";
	cin >> qayl;
	if(qayl >= (gndak - 1))
	{
		while(qayl >= (gndak -1)) //krknu e aynqan jamanak minchev mutq arvi gndakic 2 hatov qich qayl
		{
			cout << "qayler@ tpel gndakneric 2 hat qich" << endl;
			cin >> qayl;
		}
	}
	cout <<"\t\t\t\t\t\t" << "player \t" << "gndakner \t" << "comp" << endl; //hanum a ekran mnacac gndakner@ ev xaxacoxneri qashac gndakner@
	cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;
	if((gndak - (qayl + 1) * (gndak / (qayl + 1))) == 0) // ete gndakner@ (qayl + 2)-i patik e uremn hanum a ekran sksum e player@
		cout << "sksum e player@" << endl;
	else
		cout << "sksum e hamakargich@" << endl; // hakarak depqum hamakargich@
	
	while(gndak > 1)
	{
		if((gndak - (qayl + 1) * (gndak / (qayl + 1))) == 0) // ete gndakner@ (qayl + 2)-i patik e uremn sksum e player@
		{
			cout << "player: ";
			cin >> player;
			if(player > qayl || player == 0) //ete payman@ jisht e uremn petq e player@ eli tiv mutq ani hakarak depqum ekranin ktesnenq 49rd toxi grvac@
			{
				cout << "tpel 0-ic mec ev qaylic poqr tiv" << endl;
				while(player > qayl || player == 0)
					{						 
						cout << "player: ";
						cin >> player;
					}
				gndak -= player; //gndaknerin veragrel gndakneric hanac playeri vercrac gndakner@
				if(gndak == 1) // ete gndakner@ havasar en 1-i qaylis heto uremn hakarakord@ partvum e u ktesnenq ekranin duq haxteciq tox@
					cout << "duq haxteciq!!!" << endl;
				else
					cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;
			}
			else
			{
				gndak -= player;
				cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;
			}
		}
		else
			if(gndak < (2*(qayl + 1))) 
				{
					comp = gndak - (qayl + 2);// ete gndakner@ qich en 2 * (qayl + 2) uremn computer@ kvercni aynqan gndak vorpeszi mna qayl + 2 gndak
					gndak -= comp;
					
					cout << "hamakargich: " << endl;
					cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;
					cout << "player:";
					cin >> player;
					if(player > qayl || player == 0)
						{
							cout << "tpel 0-ic mec ev qaylic poqr tiv" << endl;
							while(player > qayl || player == 0)
								{						 
									cout << "player: ";
									cin >> player;
								}
							gndak -= player;
							if(gndak == 1)
								cout << "duq haxteciq!!!" << endl;
							else
								cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;
							comp = (gndak - 1); // compyuter@ khani aynqan gndak vor mna 1 ev player@ partvi
							gndak -= comp;
							if (gndak == 1)
							{
								cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;
								cout << "haxtec hamakargich@!!!"; break;
							}
						}
					else
						{
							gndak -= player;
							cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;
							comp = (gndak - 1);// compyuter@ khani aynqan gndak vor mna 1 ev player@ partvi
							gndak -= comp;
							if (gndak == 1)
							{
								cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;
								cout << "haxtec hamakargich@!!!"; break;
							}
						}
				}
			else
		{
			comp = (gndak - (qayl + 1) * (gndak / (qayl + 1))); // computer@ vercnum e aynqan gndak vor na qay + 1 -i patik
			gndak -= comp;	
			cout << "haakargich" << endl;
			cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;	
			cout << "player: ";
			cin >> player;
			if(player > qayl || player == 0)
			{
				cout << "tpel 0-ic mec ev qaylic poqr tiv" << endl;
				while(player > qayl || player == 0)
					{						 
						cout << "player: ";
						cin >> player;
					}
				gndak -= player;
				if(gndak == 1)
					cout << "duq haxteciq!!!" << endl;
				else
					cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;
			}
			else
			{
				gndak -= player;
				cout <<"\t\t\t\t\t\t" << player <<"\t" << gndak << "\t\t" << comp << endl;
			}
		}
	}
	
	return 0;
}
