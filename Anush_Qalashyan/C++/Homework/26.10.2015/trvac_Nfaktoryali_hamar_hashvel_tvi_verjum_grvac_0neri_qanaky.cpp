//trvac N!-i hamar hashvel tvi verjum grvac 0_neri qanaky...

#include <iostream>
    
int main () 
{
    	int N;
	int number5=0;
    	int number10=0;
    std::cout << "N=";
    std::cin >> N; 
    
    for (int i=1; i<=N; ++i) {
     	  if (i % 10 == 0) {
	   ++number10; }
        	    else    
                    	if (i % 10 == 5) {
			  ++number5; }
  	                     }        
       
    std::cout<<"0-neri qanak ->> " << number5 + number10 << std::endl;
return 0;
}
