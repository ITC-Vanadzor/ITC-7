#include <iostream>
#include <stack>
#include <cstring>
#include <cstdlib>


int prior(char x){
	
	switch (x){
	case '^':
		return 10;
	case '/': case '*':
		return 9;
	case '+': case '-':
		return 8;
	case ' ':
		return 0;
	case '(':
		return 7;
	case ')':
		return 6;
	default:
		return -1;
	}
} 
int main(){
	std::stack<char> char_stack;
	std::stack<char> to_prefix;

	std::string  infix_str;
	std::cout<<"Input INFIX expression (space between chars..)-> ";
	std::getline(std::cin,infix_str);
	int n=infix_str.length();
	std::cout<<"\n\nINFIX: "<<infix_str<<"\nPOSTFIX: ";
	
	

	char  clean_number[5];
	int clean_index=0;
	for(int i=0;infix_str[i]!='\0' && i<n ;++i){
		int q=prior(infix_str[i]);
		if(q==-1){
			clean_number[clean_index++]=infix_str[i];
		}else if(q==0 && clean_index>0){
			clean_number[clean_index]='\0';
			std::cout<<atoi(clean_number)<<' ';
			to_prefix.push(clean_number[0]);
			clean_index=0;
		}else if(q>=8 && q<=10){

			while(!char_stack.empty()){
				if(prior(char_stack.top())>q){
					std::cout<<char_stack.top()<<' ';
					to_prefix.push(char_stack.top());
					char_stack.pop();
				}else{
					break;
				}		
			}
			char_stack.push(infix_str[i]);
		}else if(q==7){
			char_stack.push(infix_str[i]);
		}else if(q==6){
			while( !char_stack.empty()){
				if(char_stack.top()!='('){
				std::cout<<char_stack.top()<<' ';
				to_prefix.push(char_stack.top());
				}
				char_stack.pop();
			}
		}

	}
	while(!char_stack.empty()){
		std::cout<<char_stack.top()<<' ';
		to_prefix.push(char_stack.top());
		char_stack.pop();
	}
	std::cout<<std::endl;

	std::cout<<"PREFIX: ";
	while(!to_prefix.empty()){
		std::cout<<to_prefix.top()<<' ';
		to_prefix.pop();
	}

	std::cout<<std::endl;
	
	return 0;
}
