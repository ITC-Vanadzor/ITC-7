#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>

// Return option prority
int priority (char opt) {
        switch (opt)
	{
		
        	case '(': return 3;
		case ')': return 3;
       		case '+': return 2;
      		case '-': return 2;
        	case '/': return 1;
		case '*': return 1;
		case '^': return 1;
		default: return -1;
        }
        
}


// ===== Add stack top item to  string and pop from stack =========

void addItemToString (std::stack<char>  &optionStack, std::string &str) {
	str += optionStack.top();
	optionStack.pop();
}
// ==================== Validate scopes =============
bool validateScopes (std::string exp) {
	int scopesCount = 0;
	for (int i = 0; i < exp.length(); i++) {
		if (exp[i] == '(') 
			scopesCount++;
		if (exp[i] == ')') {
			scopesCount--;
			if (scopesCount < 0) {
				std::cout<<"\nError : Wrong number of scopes";
				return false;;
			}
		}
	}
	if (scopesCount != 0) {
		return false;
	}
	else return true;
}

// ================== Validate symbols ===============
bool validateExpSymbols (std::string exp) {
	for (int i = 0; i < exp.length(); i++) {
		if ((exp[i] <'(' && exp[i]>'9') || exp[i]!='^')
			return false;
	}
	return true;
}

// =================== Full validation ================
bool validateExp (std::string exp) {
	if (validateScopes(exp) && validateExpSymbols(exp)) {
			return true;
	}
	else {
		std::cout<<"\nERROR : Wrong expression \n";
		return false;	
	}
}
// ======================== Postfix ===============================

std::string postfixConverter (std::string exp) {
        std::stack<char> optStack;
        std::string postfixExp;

	if (validateExp(exp)) {
		std::cout<<"\nHey\n";
        	for (int i = 0; i < exp.length(); i++) {
		
			// Add number to postfix expression
                	if (exp[i] >= '0' &&  exp[i] <= '9') {
                        	postfixExp += exp[i];
				postfixExp += ' ';
                	}
			//  Add '(' scope to stack
                	else if (exp[i] == '(') {
                        	optStack.push(exp[i]);
                	}
		// If symbol is ')' 
               	 else if (exp[i] == ')') {
                        	while ( optStack.top() != '(' ) {
                                	addItemToString(optStack, postfixExp);  
				}            
                	}
			// If symbol is operation symbol check priorities within stack actions
  			else if (exp[i] == '*' || exp[i] == '/' || exp[i] == '+' || exp[i] == '-' || exp[i] == '^') {
                        	if (!optStack.empty() &&  priority(optStack.top()) <= priority(exp[i]) ) {
			        	addItemToString(optStack, postfixExp);  
				}
                        	optStack.push(exp[i]);
                	}
        	}
		// Add remained operators from stack to postfix expression
        	if ( !optStack.empty() ) {
               	 	while (!optStack.empty()) {
				if (optStack.top() == '(') {
					optStack.pop();
				}
				else	 {
                        		postfixExp += optStack.top();
					optStack.pop();
				}
                	}
        	}	
       		// return result expression
       		return postfixExp;
	}
	else exit (EXIT_SUCCESS);
}

//===================== Prefix ================================
std::string  prefixConverter (std::string exp) {
        std::stack<char> optStack;
        std::string prefixExp;
	
	if (validateExp(exp)) {
		std::cout<<"\nHey\n";
        	for (int i = exp.length()-1; i >= 0; i--) {
		
			// Add number to prefix expression
                	if (exp[i] >= '0' &&  exp[i] <= '9') {
                        	prefixExp += exp[i];
               		 }
			//  Add ')' scope to stack
                	else if (exp[i] == ')') {
                        	optStack.push(exp[i]);
                	}
			// If symbol is '(' 
                	else if (exp[i] == '(') {
                        	while ( optStack.top() != ')' ) {
                                	prefixExp += optStack.top();
					optStack.pop();   
				}         
                	}
			// If symbol is operation symbol check priorities within stack actions
  			else if (exp[i] == '*' || exp[i] == '/' || exp[i] == '+' || exp[i] == '-') {
                        	if (!optStack.empty()) {
					if ( priority(optStack.top()) >= priority(exp[i]) ) {
                                        	prefixExp += optStack.top();
						optStack.pop();
                                	}
			
				}
                        	optStack.push(exp[i]);
              		 }	
        	}
		// Add remained operators from stack to prefix expression
        	if ( !optStack.empty() ) {
                	while (!optStack.empty() ) {
				if ( optStack.top() == ')' ) {
					optStack.pop();
				}
				else {
                        		prefixExp += optStack.top();
					optStack.pop();
				}
                	}
        	}	
       		// return result expression
 		reverse(prefixExp.begin(), prefixExp.end());
		return prefixExp;
	}
	else exit (EXIT_SUCCESS);
};
// ===================== Compute postfix expression =========================

void  computePostfixExp (std::string exp) {
	std::stack<int> numberStack;
	std::string tmpStr="";
	int tmpVal=0, num1=0, num2=0;
	for (int i = 0; i< exp.length(); i++) {
		if (exp[i]>='0' && exp[i]<='9') {
			std::cout<<"\nExp [i] : "<<exp[i];
			tmpStr += exp[i]; 
			tmpVal =tmpVal*10+ std::stoi(tmpStr);
			std::cout<<"\ntmpVal : "<<tmpVal;
		}
		else  if ( exp[i] == ' ') {
			numberStack.push(tmpVal);
			std::cout<<"Stack top after each push : "<<numberStack.top();
			tmpStr="";
			tmpVal=0;
		}	
		else if (numberStack.size()==2 &&
			(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/' || exp[i]=='^')) { 
				std::cout<<"\nSize of stack :"<<numberStack.size();
				num2 = numberStack.top();
				numberStack.pop();
				std::cout<<"\n Num2 : "<<num2;
				num1 = numberStack.top();
				numberStack.pop();
				std::cout<<"\n Num1 : "<<num1;	 
				std::cout<<"\nSize of stack :"<<numberStack.size();
	
				switch (exp[i]) {
					case '+': {
							numberStack.push(num1+num2);
							std::cout<<"After + push top : "<<numberStack.top();
		}
					case '-': numberStack.push(num1-num2);
					
					case '*': numberStack.push(num1*num2);
					
					case '/': numberStack.push(num1/num2);
					
					case '^': numberStack.push(num1^num2);
					default: {};
				}		

		}
	std::cout<<"\n=================================\n";
	}

	std::cout<<numberStack.top()<<std::endl;	
	numberStack.pop();
	std::cout<<"\n for check1 :  "<<numberStack.top()<<std::endl;	
	numberStack.pop();
	std::cout<<"\n for check2 :  "<<numberStack.top()<<std::endl;	
	std::cout<<"\n Stack size : " <<numberStack.size();	
}



// ******************* Main program **************************************

int main() {
       	std::string infixExp;
        std::cout<<"Enter the expression : ";
        std::cin>>infixExp;

        std::cout<<"\n========== Result ==============";
        std::cout<<"\nConverted to postfix : "<< postfixConverter(infixExp);
                                                                                                       
	std::cout<<"\nConverted to prefix : " << prefixConverter(infixExp)<<std::endl;
	//computePostfixExp(postfixConverter(infixExp));	
	
return 0;
}                       
