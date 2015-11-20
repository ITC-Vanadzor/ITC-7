# include <iostream>
# include <cstdlib>
# include "string.h"


void Flags(char* Symbols, int i, int& flagLeft1, int& flagRight1,  int& flagLeft2, int& flagRight2 ){// increments the flag for that element
          switch(Symbols[i]){
              case '{':
			++flagLeft1;
                        break;
		
	      case '}':
			++flagRight1;
		        break;
	      case '[':
                      ++flagLeft2;
                      break;
	      case ']':
		  	++flagRight2;
                      break;
             }
		
         }


void Check(char *Symbols, int start, int end){// cheks if or not there are incorrect brackets in opened and closed brackets 
           int fLeft1=0;
           int fRight1=0;
           int fLeft2=0;
           int fRight2=0;
   for(int i=start+1; i<end; ++i){
           
           Flags(Symbols, i,fLeft1, fRight1,fLeft2,fRight2);
             
          }
 
   if(fLeft1==fRight1 && fLeft2==fRight2){ // if inside the scopes all is correct
          
          return;
        }
    else {
           std::cout<<"Incorrect string!!!\n";
                              std::exit(1);
         }
    
     }
         

	 

int main()
{
	 char Symbols[100];
	 std::cin>>Symbols;
         int flagLeft1=0;
         int flagRight1=0;
         int flagLeft2=0;
         int  flagRight2=0; 
         int startLeft1=0;
         int endRight1=0;
         int endRight2=0;
         int startLeft2=0;
	
	for(int i=0; i<strlen(Symbols)-1; ++i){
            Flags(Symbols, i,flagLeft1, flagRight1, flagLeft2, flagRight2);
            switch(Symbols[i]){
             
           	 case'{':       // decides the first scope for checking
		    startLeft1=i;
                    break;
	        case '}':
                     if(flagLeft1==0 || flagLeft1<flagRight1){// checks if  } scope is at first or is wased
			std::cout<<" } at first or is wasted\n";
                        std::exit(1);
                      }
                	endRight1=i;
                	 Check(Symbols,startLeft1,endRight1);
                 	break;  
             
 	    	case'[':        // decides the first scope for checking
			startLeft2=i;
                        break;
		    
	        case']':
                  	 if(flagLeft2==0 || flagLeft2<flagRight2){// checks if  ] scope is at first or is wased
				std::cout<<" ] at first or is waste\n";
                        	std::exit(1);
                          }
                      endRight2=i;
                      Check(Symbols,startLeft1,endRight1);
                      break;
               }
                       
                  }
        std::cout<<"correct string\n";
		
	
return 0;
}
