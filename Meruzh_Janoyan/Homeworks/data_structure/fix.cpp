#include <iostream>
#include <stack>
#include <cstring>
#include <cstdlib>
#include <vector>

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

	
std::vector<std::string>  postfix(std::string infix_str){
	std::stack<char> char_stack;
 	std::vector<std::string> result;
	char  clean_number[5];
	int clean_index=0;
	char buff[2]={'\0','\0'};

	for(int i=0;i<infix_str.size() ;++i){
		int q=prior(infix_str[i]);
	
		if(q==-1){
			clean_number[clean_index++]=infix_str[i];
		}
		else if(q==0 && clean_index>0){
			clean_number[clean_index]='\0';
			result.push_back(clean_number);
			clean_index=0;
		}
		else if(q>=8 && q<=10){

			while(!char_stack.empty() && prior(char_stack.top())>q){
					buff[0]=char_stack.top();
					result.push_back(buff);
					char_stack.pop();
			}
			char_stack.push(infix_str[i]);
		}
		else if(q==7){
			char_stack.push(infix_str[i]);
		}else if(q==6){
			while( char_stack.top()!='('){
				buff[0]=char_stack.top();
				result.push_back(buff);
				char_stack.pop();
			}	
			char_stack.pop();		
		}

	}
	
	while(!char_stack.empty()){
		buff[0]=char_stack.top();
		result.push_back(buff);
		char_stack.pop();
	}

	return result;
}
std::vector<std::string>  prefix(std::string infix_str){
	
	std::vector<std::string> tmp=postfix(infix_str);
	std::vector<std::string> stack;
	for(int i=0;i<tmp.size();++i){
		if(prior(tmp[i][0])!=-1){
			int n=stack.size()-1;
			std::string tmp1=stack[n];
			std::string tmp2=stack[n-1];
			
			stack.pop_back();
			stack.pop_back();
			
			stack.push_back(tmp[i][0]+tmp2+tmp1);
			
		}
		else{
			stack.push_back(tmp[i]);
		}
	}
	return stack;
}
	
void print_vector(std::vector<std::string> tmp, char name[]){

	std::cout<<name;
	for(int i=0;i<tmp.size();++i){
		std::cout<<tmp[i]<<' ';
	}
	std::cout<<std::endl;
}

int main(){

	std::string  infix_str;
	std::cout<<"Input INFIX expression (space between chars..)-> ";
	std::getline(std::cin,infix_str);
	std::cout<<"\n\nINFIX: "<<infix_str<<std::endl;
	
	std::vector<std::string> tmp;
	tmp=postfix(infix_str);
	print_vector(tmp,"POSTFIX: ");
	tmp=prefix(infix_str);
	print_vector(tmp,"PREFIX: ");

	return 0;
}
