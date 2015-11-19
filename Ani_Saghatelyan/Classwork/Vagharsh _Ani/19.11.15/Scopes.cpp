# include <iostream>


void Checking(char *Symbols){
    int flag1=0;
    int flag2=0;
	int flag3=0;
	int flag4=0;
	for(int i=0; Symbols[i]!='\0'; ++i){
		if( Symbols[i]=='{'){
			++flag1;
		}
		else if( Symbols[i]=='}'){
			--flag1;
		}
		else if( Symbols[i]=='['){
			++flag2;
		}
		else if( Symbols[i]==']'){
			--flag2;
		}
		else if(Symbols[i]=='"') {
			++flag3;			
	      }
		else if(Symbols[i]==39) {
			++flag4;			
	      }
     }
    
   if( flag1==0 && flag2==0 && flag3%2==0 && flag4%2==0){
	std::cout<<"correct string\n";
      }
    else {
	std::cout<<"Incorrect string!!!\n";
    } 
}
	 

int main()
{
	char Symbols[100];
	std::cin>>Symbols;
	Checking(Symbols);
	
return 0;
}