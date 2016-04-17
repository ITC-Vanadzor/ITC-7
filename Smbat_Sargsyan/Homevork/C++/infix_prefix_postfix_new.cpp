#include <iostream>
#include <cstdlib>
#include <string>
#include <stack>
#include <algorithm>
int priority(char symbol) {
	switch(symbol){
		case ')':return 0;
		case '(':return 0;
		case '^':return 3;
		case '*':return 2;
		case '/':return 2;
		case '+':return 1;
		case '_':return 1;
		default: return 4;  //  -1-ov chi anum,segmentation faulta talis
	}
} 
std::string ToPrefix(std::string infix,int size) {
	std::stack<char> mystack;
	std::string prefix="";
	for(int i = size-1;i>=0;i--) {
		if(infix[i] >='0' && infix[i]<='9') {
			prefix+=infix[i];
		}
		else {
			while(!mystack.empty() && (priority(mystack.top() >= priority(infix[i]))) && mystack.top() != ')') {
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
		while(!mystack.empty()) {
			prefix+=mystack.top();
                        mystack.pop();
		}
	std::reverse(prefix.begin(),prefix.end());
	return prefix;
}
std::string ToPosfix(std::string infix,int size) {
	std::stack<char> mystack;
	std::string posfix="";
	for(int i=0;i<size;i++) {
		if(infix[i] >= '0' && infix[i] <='9') {
			posfix+=infix[i];
		}
		else {
			while(!mystack.empty() && (priority(mystack.top()) >= priority(infix[i])) && mystack.top() != '(') {
				posfix+=mystack.top();
				mystack.pop();
			}
			mystack.push(infix[i]);
			if(infix[i] == ')') {
				mystack.pop();
				while(mystack.top() != '(') {
					posfix+=mystack.top();
					mystack.pop();
				}
				mystack.pop();
			}
		}
	}
	while(!mystack.empty()) {
		posfix+=mystack.top();
		mystack.pop();
	}
	return posfix;
}
bool Stugum ( std::string infix) {
	int stugum=0;
	for(int i=0;i<infix.length();i++) {
		if (infix[i] == '(') {
			++stugum;
		}
		if (infix[i] == ')') {
			-- stugum;
			if(stugum < 0) {
				return false;
			}
		}
	if(stugum == 0) {
		std::cout << "Is correct " << std::endl;
		return true;
	}
	else return false;
}
int main() {
	std::string infix;
	std::cout << "Please input your infix exreption  ";
	std::cin >> infix;
	std::cout << "infix: " << infix << std::endl;
	std::cout << "prefix :" << ToPrefix(infix,infix.length()) << std::endl;
	std::cout << "posfix: " << ToPosfix(infix,infix.length()) << std::endl;
	return 0;
}
