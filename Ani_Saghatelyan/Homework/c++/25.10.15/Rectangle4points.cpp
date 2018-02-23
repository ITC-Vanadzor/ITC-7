
// uxxaknyun linely voroshum enq @st ankyunagtseri.ete ankyunagtser@ havasar en, uremn uxxankyun e

# include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

  
 float Side(float x1,float y1 ,float  x2,float y2){// hashvum e uxxankyan voreve koxmi kam ankyunagtsi qarakusin
	return  sqrt(pow(x2-x1,2)+pow(y2-y1,2));
};

int main()
{
	float x1;
	float x2;
	float x3;
	float x4;
	float y1;
	float y2;
	float y3;
	float y4;

	cout<<"Enter the coordinates of points X than Y\n";
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

	
	float koxm1=Side(x1,y1,x2,y2);// voroshvum e 3 ketov kazmvox koxmer@(2koxm+ankyunagits)
	float koxm2=Side(x1,y1,x3,y3);
	float koxm3=Side(x3,y3,x2,y2);

	float Ankyunagits1=koxm1;//naxnakan ankyunagits1 enq hamarum arajin koxm@
	float Ankyunagits2=Side(x3,y3,x4,y4);// myus ankyunagits@ klini arajini koordinatner@ bacaselov mnacats keterov kazmvox hatvats@

	if(koxm2>Ankyunagits1){// voroshvum e, te vor koxmn e amenamets@,vorn el klini  ankyunagits@
		Ankyunagits1=koxm2;
		Ankyunagits2=Side(x2,y2,x4,y4);
	     }
	   else if(koxm3>Ankyunagits1){
		    Ankyunagits1=koxm3;
			Ankyunagits2=Side(x1,y1,x4,y4);
	     }
	   cout<<"Ankyunagits1  "<<Ankyunagits1<<endl;
	   cout<<"Ankyunagits2  "<<Ankyunagits2<<endl;
   	 
	 if( Ankyunagits1==Ankyunagits2){
		cout<<"It's a rectangle\n";
	     }
	    else cout<<"No..It isn't rectangle\n";

	return 0;
}