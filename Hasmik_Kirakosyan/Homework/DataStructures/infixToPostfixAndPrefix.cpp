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

// ======================== Postfix ===============================

std::string postfixConverter (std::string exp) {
        std::stack<char> optStack;
        std::string postfixExp;

        for (int i = 0; i < exp.length(); i++) {
		
		// Add number to postfix expression
                if (exp[i]-48 >= 0 &&  exp[i]-48 <= 9) {
                        postfixExp += exp[i];
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
			if (exp[i+1]>='0' && exp[i+1]<='9')
				postfixExp += ' ';	
                        optStack.push(exp[i]);
                }
        }
	// Add remained operators from stack to postfix expression
        if ( !optStack.empty() ) {
                while (!optStack.empty()) {
			if (optStack.top() == '(') {
				optStack.pop();
			}
			else {
                        	postfixExp += optStack.top();
				optStack.pop();
			}
                }
        }	
       // return result expression
       return postfixExp;
}

//===================== Prefix ================================
std::string  prefixConverter (std::string exp) {
        std::stack<char> optStack;
        std::string prefixExp;

        for (int i = exp.length()-1; i >= 0; i--) {
		
		// Add number to prefix expression
                if (exp[i]-48 >= 0 &&  exp[i]-48 <= 9) {
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
};
// ===================== Compute postfix expression =========================

void  computePostfixExp (std::string exp) {
	std::stack<int> numberStack;
	std::string tmpStr;
	int tmpVal=0, num1, num2;
	for (int i = 0; i< exp.length(); i++) {
		if (exp[i]-48 >= 0 && exp[i]-48 <= 9) {
			std::cout<<"\nNum"<<exp[i];
			tmpStr += exp[i]; 
			std::cout<<tmpStr;
		}
		else  if ( exp[i] == ' ') {
			tmpVal = std::stoi(tmpStr);
			//std::cout<<tmpVal;
			numberStack.push(tmpVal);
			//std::cout<<numberStack.top();
			tmpStr.clear();
		}	
		else {
			if (!numberStack.empty()) { 
				//std::cout<<"\n3";
				num1 = numberStack.top();
				numberStack.pop();
				num2 = numberStack.top();
				numberStack.pop();	 
				switch (exp[i]) {
					case '+': numberStack.push(num1+num2);
		
					case '-': numberStack.push(num1-num2);
					
					case '*': numberStack.push(num1*num2);
					
					case '/': numberStack.push(num1/num2);
					
					case '^': numberStack.push(num1^num2);
					default: {};
				}		

			}
		}
	}
//	std::cout<<numberStack.top();	
}



// ==================== Validate if infix expression is correct =============
bool validateExp (std::string expression) {
}




// ******************* Main program **************************************

int main() {
       	std::string infixExp;
        std::cout<<"Enter the expression : ";
        std::cin>>infixExp;

        std::cout<<"\n========== Result ==============";
        std::cout<<"\nConverted to postfix : "<< postfixConverter(infixExp);
                                                                                                       
	std::cout<<"\nConverted to prefix : "<< prefixConverter(infixExp)<<std::endl;
	computePostfixExp(postfixConverter(infixExp));	
	

return 0;
}                       
