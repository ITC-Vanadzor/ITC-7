#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stack>
int priaritet(char symbol) {
	switch(symbol){
		case ')':return 0;
		case '(':return 0;
		case '^':return 3;
		case '*':return 2;
		case '/':return 2;
		case '+':return 1;
		case '_':return 1;
		default: return 3;
	}
} 
std::string ToPrefix(std::string infix,int size) {
	stack<char> mystack;
	std::string prefix="";
	for(int i = size-1;i>=0;i--) {
		if(infix[i] >='0' && infix[i]<='9') {
			prefix+=infix[i];
		}
		else {
			while(!mystack.empty() && (priaritet(mystack.top() >= priaritet(infix[i]))) && mystack.top() != '(') {
				prefix+=mystack.top();
				mystack.pop();
			}
			mystack.push(infix[i]);
			if(infix[i]=='(') {
				mystack.pop();
				while(mystack.top() != ')') {
					prefix+=mystack.top();
					mystack.pop();
				}
			mystack.pop();
			}
		}
	}
		while(!mystack.top()) {
			prefix+=mystack.top();
                        mystack.pop();
		}
	return prefix;
}
std::string ToPosfix(std::string infix,int size) {
	stack<char> mystack;
	std::string posfix="";
	for(int i=0;i<size;i++) {
		if(infix[i] >= '0' && infix[i] <='9') {
			posfix+=infix[i];
		}
		else {
			while(!mystack.empty() && (priaritet(mystack.top()) >= priaritet(infix[i])) && mystack.top() != '(') {
				posfix+=mystack.top();
				mystack.pop();
			}
			posfix+=infix[i];
			if(infix[i] == ')') {
				mystack.pop();
				while(mystack.top() != '(') {
					posfix+=mystack.top();
					mystack.pop();
				}
				mystack.pop();
			}
			while(!mystack.empty()) {
				posfix+=mystack.top();
				mystack.pop();
			}
		}
	}
	return posfix;
}
int main() {
	std::string infix="(2+3)*7-5*2-4/(2*5)+1-4+2/2+1";
	std::cout << "infix: " << infix << std::endl;
	std::cout << "prefix :" << ToPrefix(infix,infix.length()) << std::endl;
	std::cout << "posfix: " << ToPosfix(infix,infix.length()) << std::endl;
	return 0;
}
