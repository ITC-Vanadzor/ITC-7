//Trvats en 3 keter,,,petq e gtnel 4-rd keti koordinatner@, voroncov kkarucvi uxxankyun

# include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1=4;//nermutsum en 3 keteri koordinatner@
	float x2=6;
	float x3=9;
	float y1=8;
	float y2=10;
	float y3=7;
	

	float ab=sqrt((x2-x1,2)+pow(y2-y1,2));// voroshvum e ayd keterov kazmvox hatvatsneri erkarutyun@
	float ac=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	float bc=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	float max=ab;// voroshvum, te vor hatvatsn e amenaerkar@, vorn el kditvi vorpes ankyunagits 
	if(ac>max){
		max=ac;
		if(bc>max){
			max=bc;
		}
	}
	double X;// voronvox keti koordinatnern en
	double Y;
	if(max==ab){
		X=x2+x1-x3;//ket2 petq e lini ankyunagtsi 2 keteri sharunakutyamb kazmvox ev 3-rd ketin handipakac ket@ `x2-x3=X-x1
		Y=y2+y1-y3;// y2-y3=Y-y1;
	}
	else if(max==ac){
		X=x3+x2-x1;
		Y=y3+y2-y1;
	}
	else if(max==bc){
		 X=x3+x1-x2;
		 Y=y3+y1-y2;
	}
	cout<<"X "<<X<<" Y "<<Y<<endl;
	return 0;
}
		 
