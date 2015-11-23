#include <iostream>

int main () {
char  init[101], scopes[50];
int top=0;

std::cout<<"Eter the text with scopes, max 100 symbols :";
std::cin>>init;

for (int i = 0; init[i] != '\0'; ++i) {
	// adding begin scopes into begin array
	if ( init[i]=='{' || init[i]=='[' || init[i]=='(')
	   scopes[++top]= init[i];
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
	if(top > 0)
		std::cout << "Incorrect scopes" << std::endl;
	else
		std::cout << "Correct scopes " << std::endl;
return 0;
}
