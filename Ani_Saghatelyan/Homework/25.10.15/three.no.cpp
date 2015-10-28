// tsragir, vor@ vorooshum e, te mutqagrvats keterov karucvats bazmankyun@ kanonavor e, te che
# include <iostream>
using namespace std;

int MultVectors( int x1 , int y1 , int x2 , int y2, int x3 , int y3 ){// voroshum e vektorneri verktorakan artadryal@
	int a = ( x2 - x1 ) * ( y3 - y2 ) - ( x3 - x2 ) * ( y2 - y1 );
	return a;
  }


int main()
{
	int x ; // nermutsvox x koordinat
	int y ;//nermutsvox y koordinat
	int XandY [ 6 ] [ 6 ] = { } ;//pahum enq x ev y koordinatner@ 
		for ( int i = 0 ; i < 5 ; ++i ){
			cout << " Enter x \t " ;
		 	cin >> x ;
			XandY [ 0 ] [ i ] = x ;

			cout << " Enter y \t " ;
			cin >> y ;
			XandY  [ 1 ] [ i ] = y ;
		}
	XandY [ 0 ] [ 5 ] = XandY [ 0 ] [ 0 ] ;// arajin  keti koordinatner@ pahum enq zangvatsi verjin tarrum
	XandY[ 5 ] [ 0 ] = XandY [ 1 ] [ 0 ] ;
	

        int i ;// for-i hamar 
	    //himnakan uxxutyan voroshum
		int uxxutyun = MultVectors ( XandY[0][0], XandY[1][0] , XandY[0][1] , XandY[1][1] , XandY[0][2] , XandY[1][2]) ;
			int skizb=1;// ayn popoxakann e, vor@ pahum e sharjman skizb@` erankyan arajin gagat@
			for ( i = 2 ;  i < 5 ; ++i ){
				//  skizb gagatic skstats erankyan 2 vektorneri vektorakan artadryaln e
				int current = MultVectors( XandY[0][skizb], XandY[1][skizb] , XandY[0][i] , XandY[1][i] , XandY[0][i+1] , XandY[1][i+1]);
		          
				 cout << " uxxutyun * current " << uxxutyun << " * " << current << endl ;
		  
				 if( current * uxxutyun <0){//erb handipum e ners @nkats keti 
					      i++;
						  skizb=i-1;// skizb@ poxum e ners @nkats keti het

							
							/*XandY[0][i]=XandY[0][i+1];
							XandY[1][i]= XandY[1][i+1];
							XandY[0][i+1]=XandY[0][i+2];
							XandY[1][i+1]=XandY[1][i+2];*/
							cout <<" "<< "XandY[0]["<<skizb<<"]" <<"XandY[1]["<<skizb<<"]--" <<"  "<<" XandY[0]["<<i+1<<"] XandY[1]["<<i+1<<"]"<<endl;
						    cout <<" "<< XandY[0][skizb]<<" " <<XandY[1][skizb]<<"--" <<"  "<< XandY[0][i+1]<<" " <<XandY[1][i+1]<<endl;
							
							}
					  else {
						   // erb vektorakan artadryal@ drakan e, bazmankyun@ ktrum enq (skzbic   i+1)
						   cout <<" "<< "XandY[0]["<<skizb<<"]" <<"XandY[1]["<<skizb<<"]--" <<"  "<<" XandY[0]["<<i+1<<"] XandY[1]["<<i+1<<"]"<<endl;
						   cout <<" "<< XandY[0][skizb]<<" " <<XandY[1][skizb]<<"--" <<"  "<< XandY[0][i+1]<<" " <<XandY[1][i+1]<<endl;
                       					       
						  }


					  }
	
	return 0;
}

