//  tsragir, vor@ voroshum e dxyakum arka senyakneri qanaky. Yuraqanchyur makardakum ka n-ankyun bzamankyun,vori amen koxmum ka mekakan senyak, hajord makardakum yuraqanchyur koxmum avelanum e evs mek senyak,,petq e voroshel senyakneri qanak@ trvats n-ankyan bazmankyan hamar ev trvats makardaki hamar
// Tsragir@ grvel e tvabanakan progresiayi himan  vra

# include <iostream>
using namespace std;


 int  SenyakneriQanak( int ankyun, int makardak)
 {
	 int Sum=(2*ankyun+(makardak-1)*ankyun)/2*makardak;
	 return Sum;
 }

int main(){

	cout<<"Nermutsel ankyunneri qanak@\t";
	int ankyun=0; 
	cin>>ankyun;
	int makardak=0;
	cout<<"Nermutsel makardakneri qanak@\t";
	cin>>makardak;
	while(ankyun<=2 || makardak<=0){
		cout<<"Xndrumenq makardakneri hamar nermutsel 0-ic mets, ankyunneri hamar`  2-ic mets tiv\t";
		
		cout<<"Nermutsel makardakneri qanak@\t";
	    cin>>makardak;

		cout<<"Nermutsel ankyunneri qanak@\t";
	    cin>>ankyun; 
	}

	cout << "Senyakneri qanak@ klini\t"<<SenyakneriQanak(ankyun,makardak)<<endl;
	return 0;
}