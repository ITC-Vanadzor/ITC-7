#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>

// Return option prority
int priority (char opt) {
        switch (opt)
	{
		
        	case '(': return 1;
		case ')': return 1;
        	case '*': return 2;
       		case '/': return 4;
      		case '+': return 3;
        	case '-': return 3;
        }
        
}

// ============== Postfix ===========================

std::queue<char> postfixConverter (std::string exp) {
        std::stack<char> optStack;
        std::queue<char> postfixExp;

        for (int i = 0; i < exp.length(); i++) {
		
		// Add number to postfix expression
                if (exp[i]-48 >= 0 &&  exp[i]-48 <= 9) {
                        postfixExp.push(exp[i]);
                }
		//  Add '(' scope to stack
                else if (exp[i] == '(') {
                        optStack.push(exp[i]);
                }
		// If symbol is ')' 
                else if (exp[i] == ')') {
                        while ( optStack.top() != '(' ) {
                                	postfixExp.push(optStack.top());
					optStack.pop();   
				}            
                }
		// If symbol is operation symbol check priorities within stack actions
  		else if (exp[i] == '*' || exp[i] == '/' || exp[i] == '+' || exp[i] == '-') {
                        if (!optStack.empty()) {
				if ( priority(optStack.top()) >= priority(exp[i]) ) {
                                        postfixExp.push(optStack.top());
					optStack.pop();
                                }
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
			else {
                        	postfixExp.push( optStack.top() );
				optStack.pop();
			}
                }
        }	
       // return result expression
       return postfixExp;
}

//============ Prefix ================================
std::string  prefixConverter (std::string exp) {
        std::stack<char> optStack;
        std::string prefixExp;

        for (int i = exp.length(); i > 0; i--) {
		
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



int main() {
       	std::string infixExp;
        std::cout<<"Enter the expression : ";
        std::cin>>infixExp;

        std::cout<<"\n========== Result ==============";
        std::cout<<"\nConverted to postfix : ";
        std::queue<char> postfixExp = postfixConverter(infixExp);
                                                                                                       
	while (!postfixExp.empty()) {
                std::cout<<postfixExp.front();
		postfixExp.pop();
	}

	std::cout<<"\nConverted to pretfix : "<< prefixConverter(infixExp)<<std::endl;	
	

return 0;
}                       
