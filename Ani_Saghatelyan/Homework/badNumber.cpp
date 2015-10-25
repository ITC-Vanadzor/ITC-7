//  Tsragir, vor voroshum e tvi bajanararneric amenavat@ ...e
# include <iostream>
using namespace std;

  int Sum ( int a ) {// funckcian voroshum e bajanarari tvanshanneri gumar@
      int Sum = 0 ;
         while ( a > 0 ) {
         Sum += a % 10;
         a /=10 ;
         }
     return Sum;
    };

 
 
  int Stugum( int sum1, int sum2, int a, int b )  {   // funkcian veradardznum e amenavat tiv@.  ete erku tver kan, nranc mej amenavat@ tvanshanneri poqr gumar unecoxn a, isk ete erku tver unen tvanshanneri nuyn gumar@, apa amenavat@ iranc erkusi mej mec tivn 
     int min;
     if ( sum1 < sum2 ) {
           min = a ;
           }
     else if( sum1 > sum2 ) {
        	   min = b;
         		  }
     else if( sum1 == sum2 ) {
 
 	         if  (a < b) {
 	              min = b ;
 	                   }
                   else min=a;
                }
            
    return min;
}    

    


int main()
{

    int n ; //nermutsvox tiv@ pahox popoxakan 
    cout << " \n Enter n  \t " ;
    cin >> n ;
    int min=n;//amenavat tiv@ pahox popoxakan
    
  for ( int i = 1 ; i <= n / 2  ; ++i ) {

		if( n % i == 0 ){
			 int  SumI = Sum ( i ) ; 
			 cout << "i   " << i << "  SumI   "<< SumI << endl ; 
			 int SumMin = Sum ( min ) ;
			 min= Stugum ( SumMin , SumI,  min, i ) ;
	        }
     }
cout << min << endl ;
return 0;
}



 
