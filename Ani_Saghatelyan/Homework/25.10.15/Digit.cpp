//Tragir, vor hashvum e, te trvats mijakayi tverum 0-9 tvanshanneric qani hat ka
# include <iostream>
using namespace std;

int main()
{
	int  m , n ;// mijakayqn e (m,,,n)

	cout << " Enter m\t " ;
	cin >> m ;
	cout << " Enter n\t " ;
	cin >> n ;

	int Digit [ 10 ] = { };// pahvum e 0-9 tvanshanneri qanak@
		for( int i = m ; i < = n ; ++i ){//m-ic n mijakayqi tver@ hertov mod ev div anelov  tvanshani  zangvatsi hamapatasxan tarrn avelacnum enq mekov
			int number = i;//pahum enq @ntacik tiv@ mijakayqic
				while( number > 0 ){
					Digit [ number % 10 ] + = 1;// avelacnum enq verjin tvanshani hamar zangvatsi hamapatasxan tarr@
					 number / = 10;// tiv@ ktrum enq mek tvanshanov` sharjvelov dzax
					}
			}
		for( int i=0 ; i < 10 ; i++ ){
			cout << i << " " << Digit [ i ] << endl;
			}
	return 0;
}

