#include <iostream>

int main () {
char  init[101], scopes[50];
int top=0;

std::cout<<"Enter the text with scopes, max 100 symbols :";
std::cin>>init;

int one_scope = 0, two_scope = 0; // counters for ' and " scopes

for (int i = 0; init[i] != '\0'; ++i) {

	// adding begin scopes into begin array

	
	if ( init[i]=='{' || init[i]=='[' || init[i]=='(' || init[i]=='"' || init[i]=='\'')
	{
	   scopes[++top] = init[i];
	/*
	   if (init[i] == '"' && scopes[top--] != '"' && two_scope == 2)
	   {
		std::cout<< "Incorrect scopes | number of \" " <<two_scope<< std::endl;
		return 0;
	   }
	   else 
	   {
		if (two_scope == 2 && scopes[top--] == '"' )
			two_scope = 0;
		else
			two_scope++;
		continue;	
	   } 
		 
	   if (init[i] == '\'' && scopes[top--] != '\'' && one_scope == 2)
	   {
		std::cout << "Incorrect scopes | number of \' " <<one_scope<< std::endl;
		return 0;
	   }
	   else
	   {	
		if (one_scope == 2 && scopes[top--] == '\'' )
			one_scope = 0;
		else   
			one_scope++;
		continue;
	  }
	*/
	}
	else {
			if(top<0)
			{
				std::cout << "Incorrect scopes" << std::endl;
				return 0;
			}	
				
			if(init[i] == '}' && scopes[top--] != '{')
			{
				std::cout << "Incorrect scopes" << std::endl;
				return 0;
			}
				
			if(init[i] == ')' && scopes[top--] != '(')
			{
				std::cout << "Incorrect scopes" << std::endl;
				return 0;
			}
			
			if(init[i] == ']' && scopes[top--] != '[')
			{
				std::cout << "Incorrect scopes" << std::endl;
				return 0;
			}

	  }	
} 
	if (top > 0)
		std::cout << "Incorrect scopes"<< std::endl;
	else
		std::cout << "Correct scopes" << std::endl;
return 0;
}
