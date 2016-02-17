#include <iostream>
#include <sstream>
#include <stack>
#include <cstdlib>
#include <cmath>
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
		return (x>47 && x<58)?1:-1;
	}
}

bool is_number(int q){
	return (q==1)?true:false;
}

bool is_operator(int q){
	return (q>=8 && q<=10)?true:false;
}

bool is_brk_open(int q){
	return (q==7)?true:false;
}

bool is_brk_close(int q){
	return (q==6)?true:false;
}

bool is_space(int q){
	return (q==0)?true:false;
}

void save(std::stack<char> &ch_stack,std::vector<std::string> &vec){
	char buff[2]={'\0','\0'};
	buff[0]=ch_stack.top();
	vec.push_back(buff);
	ch_stack.pop();
}
bool infix_is_correct(std::string infix_str){
	int brk_k=0;	
	int opr_k=0;
	for(int i=0;i<infix_str.length();++i){
		if(prior(infix_str[i])==-1){
			 return false;
		}
		
		if(infix_str[i]=='('){
			++brk_k;
		}
		else if(infix_str[i]==')'){
			--brk_k;
		}
		else if(infix_str[i]==' '){
			++opr_k;
		}
		else if(is_operator(prior(infix_str[i]))){
			opr_k-=2;
		}
		
		if(brk_k<0){	
			return false;
		}

	}
	
	return (brk_k==0 && opr_k==1 )?true:false;
}	
std::vector<std::string>  postfix(std::string infix_str){
	if(!infix_is_correct(infix_str)){
		std::vector<std::string> err;
		err.push_back(infix_str);
		return err;
	}

	std::stack<char> char_stack;
 	std::vector<std::string> result;
	char  clean_number[5];
	int clean_index=0;
	
	for(int i=0;i<infix_str.size() ;++i){
		int q=prior(infix_str[i]);
	
		if(is_number(q)){
			clean_number[clean_index++]=infix_str[i];
		}
		else if(is_space(q) && clean_index>0){

			clean_number[clean_index]='\0';
			result.push_back(clean_number);
			clean_index=0;
		}
		else if(is_operator(q)){
			
			while(!char_stack.empty() && prior(char_stack.top())>q){
				save(char_stack,result);
			}
			char_stack.push(infix_str[i]);
		}
		else if(is_brk_open(q)){
			char_stack.push(infix_str[i]);
		}else if(is_brk_close(q)){
			while( char_stack.top()!='('){
				save(char_stack,result);
			}	
			char_stack.pop();		
		}

	}
	
	while(!char_stack.empty()){
		save(char_stack,result);
	}

	return result;
}
std::vector<std::string>  prefix(std::string infix_str){
	
	std::vector<std::string> tmp=postfix(infix_str);
	std::vector<std::string> stack;
	for(int i=0;i<tmp.size();++i){
		if(!is_number(prior(tmp[i][0]))){
			int n=stack.size()-1;
			std::string tmp1=stack[n];
			std::string tmp2=stack[n-1];
			
			stack.pop_back();
			stack.pop_back();
			
			stack.push_back(tmp[i]+" "+tmp2+" "+tmp1);
			
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

void two_number(std::stack<double> &double_stack,double &a, double &b){
	b=double_stack.top();
	double_stack.pop();
	a=double_stack.top();
	double_stack.pop();
}
	
double postfix_value(std::vector<std::string> postfix){
	int value=0;
	std::stack<double> double_stack;
	
	for(int i=0;i<postfix.size();++i){
		double a,b;
		switch (postfix[i][0]){
		
			case '+':
				two_number(double_stack,a,b);
				double_stack.push(a+b);
				break;
			case '-':
				two_number(double_stack,a,b);
				double_stack.push(a-b);
				break;
			case '*':
				two_number(double_stack,a,b);
				double_stack.push(a*b);
				break;		
			case '/':
				two_number(double_stack,a,b);
				double_stack.push(a/b);
				break;
			case '^':
				two_number(double_stack,a,b);
				double_stack.push(pow(a,b));
				break;
			case ' ':
				break;
			default:
				double x;
				std::istringstream obj(postfix[i]);
				obj >> x;
				double_stack.push(x);
		}
	}		
	return double_stack.top();
}

int main(){

	std::string  infix_str;
	std::cout<<"Input INFIX expression (space between chars..)-> ";
	std::getline(std::cin,infix_str);
	std::cout<<"\n\nINFIX: "<<infix_str<<std::endl;
	
	if (infix_is_correct(infix_str)){
	std::vector<std::string> tmp;
	tmp=prefix(infix_str);
	print_vector(tmp,"PREFIX: ");
	tmp=postfix(infix_str);
	print_vector(tmp,"POSTFIX: ");
	
	std::cout<<"VALUE: "<<postfix_value(tmp)<<std::endl;
	}
	else{
		std::cout<<"Incorrect INFIX expression!"<<std::endl;
	}
	return 0;
}
