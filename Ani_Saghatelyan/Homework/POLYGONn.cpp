// tsragir, vor@ vorooshum e, te mutqagrvats keterov karucvats bazmankyun@ kanonavor e, te che
# include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	int XandY[5][5]={};//pahum enq x ev y koordinatner@ 
		for(int i=0;i<5; ++i){
			cout<<"Enter x\t";
			cin>>x;
			XandY[i][0]=x;

			cout<<"Enter y\t";
			cin>>y;
			XandY[i][1]=y;
			}

int Vector[5][5]={};// pahum enq 2 hajordakan keterov ancnox vektory
		for(int j=0; j<4; ++j){
			Vector[j][0]=(XandY[j+1][0] - XandY[j][0]);
			Vector[j][1]=(XandY[j+1][1] - XandY[j][1]);
			  if(j==3){
					Vector[j+1][0]=(XandY[j+1][0] - XandY[0][0]);
					Vector[0][j+1]=(XandY[j+1][1]- XandY[0][1]);
				}
		}
	

int MultVectors[5]={};//pahum enq 2 vektoreri vektorakan artadryal@
int i;
	  for(i=0; i<4; ++i){
		    MultVectors[i]=((Vector[i][0] * Vector[i+1][1] )- (Vector[i][1] * Vector[i+1][0]));
				if(i==3){
					MultVectors[4]=((Vector[4][0] * Vector[0][1]) - (Vector[4][1] * Vector[0][0]));
					}
				if(i>=2 && (MultVectors[i-1] * MultVectors[i]<0) ){
					cout<<"Non convex polygon\n";
					break;
					}
			 }
	 if(i==4){
		 cout<<"It is convex polygon\n";
		}
	  
	return 0;
}

