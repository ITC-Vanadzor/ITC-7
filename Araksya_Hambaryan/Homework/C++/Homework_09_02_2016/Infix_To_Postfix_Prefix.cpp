#include <iostream>
#include <stack>
#include <string>

int priority(char x) {
    switch (x) {
	case '^': return 1;
	case '*': return 2;
	case '/': return 2;
	case '+': return 3;
	case '-': return 3;
	default: return 4;
    }
}
std::string prefix(std::string str) {
    std::stack<char> action_stack;
    std::string output="";
    for (int i=str.length(); i>=0; --i) {
	if (str[i] >= '0' && str[i] <= '9') {
	    output += str[i];
	} else {
	    while (!action_stack.empty() && (priority(str[i]) < priority(action_stack.top())) && action_stack.top() != ')') {
		output += action_stack.top();
		action_stack.pop();
	    }
	    action_stack.push(str[i]);
	    if (str[i] == '(') {
		action_stack.pop();
		while (action_stack.top() != ')') {
		    output += action_stack.top(); 
		    action_stack.pop();
		}
		action_stack.pop();
	    }
	}
    }
    while (!action_stack.empty()) {
	output += action_stack.top();
	action_stack.pop();
    }
    return output;
}

std::string postfix(std::string str) {
    std::stack<char> action_stack;
    std::string output="";
    for (int i=0; i<=str.length(); ++i) {
	if (str[i] >= '0' && str[i] <= '9') {
	    output += str[i];
	} else {
	    while (!action_stack.empty() && (priority(str[i]) >= priority(action_stack.top())) && action_stack.top() != '(') {
		output += action_stack.top();
		action_stack.pop();
	    }
	    action_stack.push(str[i]);
	    if (str[i] == ')') {
		action_stack.pop();
		while (action_stack.top() != '(') {
		    output += action_stack.top(); 
		    action_stack.pop();
		}
		action_stack.pop();
	    }
	}
    }
    while (!action_stack.empty()) {
	output += action_stack.top();
	action_stack.pop();
    }
    return output;
}

int main() {
    std::string text="((5/(7-(1+1)))*3)-(2+(1+1))";
    std::string output_text = prefix(text);
    std::cout << "Prefix   ";
    for (int i=output_text.length(); i>=0; --i) {
     std::cout << output_text[i];
    }
    std::cout<<std::endl;
    output_text = postfix(text);
    std::cout << "Postfix   " << output_text << std::endl;
    return 0;
}


