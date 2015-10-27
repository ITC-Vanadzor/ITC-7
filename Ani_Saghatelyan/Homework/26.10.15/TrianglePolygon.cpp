// tsragir, vor@ vorooshum e, te mutqagrvats keterov karucvats bazmankyun@ kanonavor e, te che
# include <iostream>
using namespace std;

int MultVectors( int x1 , int y1 , int x2 , int y2, int x3 , int y3 ){// voroshum e vektorneri verktorakan artadryal@
	int a = ( x2 - x1 ) * ( y3 - y2 ) - ( x3 - x2 ) * ( y2 - y1 );
	return a;
  };


int main()
{
	int x ; // nermutsvox x koordinat
	int y ;//nermutsvox y koordinat
	cout<<"Count of points is 5\n";
	int XandY [ 6 ] [ 6 ] = { } ;//pahum enq x ev y koordinatner@ 
		for ( int i = 0 ; i < 5 ; ++i ){
			cout << " Enter x \t " ;
		 	cin >> x ;
			XandY [ 0 ] [ i ] = x ;

			cout << " Enter y \t " ;
			cin >> y ;
			XandY  [ 1 ] [ i ] = y ;
		}
	//XandY [ 0 ] [ 5 ] = XandY [ 0 ] [ 0 ] ;// arajin  keti koordinatner@ pahum enq zangvatsi verjin tarrum
	//XandY[ 5 ] [ 0 ] = XandY [ 1 ] [ 0 ] ;	    
		int uxxutyun = MultVectors ( XandY[0][0], XandY[1][0] , XandY[0][1] , XandY[1][1] , XandY[0][2] , XandY[1][2]) ;
			int skizb=1;
		  for (int i = 2 ;  i < 4 ; ++i ){
				int current = MultVectors( XandY[0][skizb], XandY[1][skizb] , XandY[0][i] , XandY[1][i] , XandY[0][i+1] , XandY[1][i+1]);
		        cout << "i "<<i<<" uxxutyun * current " << uxxutyun << " * " << current << endl ;
					  int j=i+2;
						 for(; j<5; ++j){
								 int PointInorOut = MultVectors( XandY[0][i], XandY[1][i] , XandY[0][i+1] , XandY[1][i+1] , XandY[0][j] , XandY[1][j]);
									 if(uxxutyun*PointInorOut<0){
										 break;
					  				}
						        }
									
					 if((j==5)&&(current * uxxutyun>=0)) {
                    	//	cout <<" "<< "XandY[0]["<<skizb<<"]" <<"XandY[1]["<<skizb<<"]--" <<"  "<<" XandY[0]["<<i+1<<"] XandY[1]["<<i+1<<"]"<<endl;
							cout <<" "<< XandY[0][skizb]<<" " <<XandY[1][skizb]<<"--" <<"  "<< XandY[0][i+1]<<" " <<XandY[1][i+1]<<endl;

							XandY[0][i]=XandY[0][i+1];
							XandY[1][i]= XandY[1][i+1];
							XandY[0][i+1]=XandY[0][i+2];
							XandY[1][i+1]=XandY[1][i+2];

							}
				 
					  else {
						    XandY[0][skizb]=XandY[0][i];
						    XandY[1][skizb]=XandY[1][i];
						    XandY[0][i]=XandY[0][i+1];
							XandY[1][i]= XandY[1][i+1];
							XandY[0][i+1]=XandY[0][i+2];
							XandY[1][i+1]=XandY[1][i+2];
						   
                       					       
						  }
						 }
	
	return 0;
}