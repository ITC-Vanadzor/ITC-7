#include <iostream>
#include <stack>
#include <queue>


// Return true if  firstOpt priority is greater than  secondOpt priority, else return false
bool priorityGreaterThan (char firstOpt, char secondOpt) {
        char optPriority[5];
        int firstPriority, secondPriority;
        optPriority[4] = '(';
        optPriority[3] = '*';
        optPriority[2] = '/';
        optPriority[1] = '+';
        optPriority[0] = '-';
        for (int i = 0; i < 5; i++ ) {
                if (optPriority[i] == firstOpt)
                        firstPriority = i;
                if (optPriority[i] == secondOpt)
                        secondPriority = i;
        }
        return (firstPriority > secondPriority);

}

// get as argument infix expression and return it's prefix form

std::queue<char> postfixConverter (char* exp) {
	int length = sizeof(exp)/sizeof(char);
        std::stack<char> optStack;
        std::queue<char> postfixExp;

        for (int i = 0; i < length; i++) {
                if (exp[i]-48 >= 0 &&  exp[i]-48 <= 9) {
                        postfixExp.push(exp[i]);
                }
                else if (exp[i] == '(') {
                        optStack.push(exp[i]);
                }
                else if (exp[i] == ')') {
                        while ( optStack.top() != '(') {
                                postfixExp.push(optStack.top());
				optStack.pop();                 
                        }
			optStack.pop();
                }
  		else if (exp[i] == '*' || exp[i] == '/' || exp[i] == '+' || exp[i] == '-') {
                                if (priorityGreaterThan(optStack.top(), exp[i])) {
                                        postfixExp.push(optStack.top());
					optStack.pop();
                                }
                        optStack.push(exp[i]);
                }
        }

        if ( !optStack.empty() ) {
                while ( !optStack.empty() ) {
                        postfixExp.push( optStack.top() );
			optStack.pop();
                }
        }
	
 	// return result queue
       return postfixExp;
}

/* get as argument infix expression and return it's prefix form
char* prefixConverter (char* exp) {
};
*/


int main() {

       	char* infixExp;
        std::cout<<"Enter the expression : ";
        std::cin>>infixExp;

        std::cout<<"\n========== Result ==============";
        std::cout<<"\nConverted to postfix : ";
        std::queue<char> postfixExp = postfixConverter(infixExp);
                                                                                                       
	while (!postfixExp.empty()) {
                std::cout<<postfixExp.front();
		postfixExp.pop();
	}
	

return 0;
}                       
