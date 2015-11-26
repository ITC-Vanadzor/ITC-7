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

	   if (init[i] == '"' && top-1>=0 && scopes[top--] != '"' )
	   {
		std::cout<< "Incorrect scopes"<< std::endl;
		return 0;
	   }
	   else 
	   {
		if (two_scope == 2 && top-1>=0 && scopes[top--] == '"' )
		{
			two_scope = 0;
			top-=2;
		}
		else    
			two_scope++;
			continue;
				
	   } 
	// Scopes ' ',  counter is One_scope
		 
	   if (init[i] == '\'' && top-1>=0 && scopes[top--] != '\'')
	   {
		std::cout << "Incorrect scopes"<< std::endl;
		return 0;
	   }
	   else
	   {	
		if (one_scope == 2 && top-1>=0 && scopes[top--] == '\'' )
		{
			one_scope = 0;
			top-=2;
		}
		else   
		        one_scope++;
			continue;
		       
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
		std::cout << "Incorrect scopes"<< std::endl;
	else
		std::cout << "Correct scopes" << std::endl;
return 0;
}
