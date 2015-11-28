#include <iostream>

int main () {
char  init[101], scopes[50];
int top=0;

std::cout<<"Enter the text with scopes, max 100 symbols :";
std::cin>>init;

int one_scope = 0, two_scope = 0; // counters for ' and " scopes

for (int i = 0; init[i] != '\0'; ++i) {
	
   if ( init[i]=='{' || init[i]=='[' || init[i]=='(' || init[i]=='"' || init[i]=='\'')
     {
	   scopes[++top] = init[i];
	   if (scopes[top] == '"') {
		switch (two_scope) {
			case  0: {
				    two_scope = 1;
				    continue;
				 }
			case  1: {
				     if (scopes[top-1] == '"') 
			             {
					two_scope = 0;
				     	top =0;
				     }				  
				     else 
			             {
					std::cout<<"Incorrect scopes \"";
					return 0;
				     }
				
				}
		      
		}
			
	   }
	   if (scopes[top] == '\'') {
		switch (one_scope) {
			case  0: {
				    one_scope = 1;
				    continue;
				 }
			case  1: {
				     if (scopes[top-1] == '\'') 
			             {
					one_scope = 0;
				     	top =0;
				     }				  
				     else 
			             {
					std::cout<<"Incorrect scopes \'";
					return 0;
				     }
				
				}
		      
		}
	   }
      }
      else {
			if(top<0)
			{
				std::cout << "Incorrect scopes" << std::endl;
				return 0;
			}
	
				
				if(init[i] == '}' && top-1>0 && scopes[top--] != '{')
				{
					std::cout << "Incorrect scopes" << std::endl;
					return 0;
				}
				
				if(init[i] == ')' && top-1>0 && scopes[top--] != '(')
				{
					std::cout << "Incorrect scopes" << std::endl;
					return 0;
				}
			
				if(init[i] == ']' && top-1>0 && scopes[top--] != '[')
				{
					std::cout << "Incorrect scopes" << std::endl;
					return 0;
				}
			

	  }	
}
 
	if (top>0 )
		std::cout << "Incorrect scopes "<<top<<" "<<scopes[top]<<" "<<two_scope<< std::endl;
	else
		std::cout << "Correct scopes" << std::endl;
return 0;
}
