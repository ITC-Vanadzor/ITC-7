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

 
 
  int VatTivStugum( int sum1, int sum2, int a, int b )  {   // funkcian veradardznum e amenavat tiv@.  ete erku tver kan, nranc mej amenavat@ tvanshanneri poqr gumar unecoxn a, isk ete erku tver unen tvanshanneri nuyn gumar@, apa amenavat@ iranc erkusi mej mec tivn 
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

  
  int LavTivStugum( int sum1, int sum2, int a, int b )  {   // funkcian veradardznum e amenavat tiv@.  ete erku tver kan, nranc mej amenavat@ tvanshanneri poqr gumar unecoxn a, isk ete erku tver unen tvanshanneri nuyn gumar@, apa amenavat@ iranc erkusi mej mec tivn 
     int min;
     if ( sum1 > sum2 ) {
           min = a ;
           }
     else if( sum1 < sum2 ) {
        	   min = b;
         		  }
     else if( sum1 == sum2 ) {
 
 	         if  (a > b) {
 	              min = b ;
 	                   }
                   else min=a;
                }
            
    return min;
}    

    


int main()
{

    int n=0 ; //nermutsvox tiv@ pahox popoxakan 
    cout << " \n Nermutsel tiv@  \t " ;
	cin >> n ;
	 while(n<=0){
		    cout<<"Xndrum enq nermutsel bnakan tiv(mets 0-ic)";
			cin>>n;
	      }
	int tarberak=0;
	cout<<"Nermutsel 1 vat tvanshani hamar ev 0` lav tvanshani hamar\n";
    cin>>tarberak;
	 while(tarberak<0 && tarberak>1){
		    cout<<"Xndrum enq nermutsel 1 vat tvanshani hamar ev 0` lav tvanshani hamar\n" ;
			cin>>tarberak;
	      }

    
	 
    int BadorGood=n;//amenavat  kam lav tiv@ pahox popoxakan
    
  for ( int i = 1 ; i <= n / 2  ; ++i ) {

		if( n % i == 0 ){
			 int  SumI = Sum ( i ) ;
			 int SumBadorGood = Sum ( BadorGood ) ;
  
					
				switch(tarberak){
					 case 0:  BadorGood= LavTivStugum ( SumBadorGood , SumI,  BadorGood, i ) ;
						 break;
					 case 1:  BadorGood= VatTivStugum ( SumBadorGood , SumI,  BadorGood, i ) ;
						 break;
					 }
		}
  }
			
cout <<"Tiv@ klini\t"<< BadorGood << endl ;
return 0;
}



 
