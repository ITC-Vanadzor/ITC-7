#include <iostream>
#include <stack>
#include <string>

int priority(char x) {
    switch (x) {
	case '(': return 0;
	case '^': return 1;
	case '*': return 2;
	case '/': return 2;
	case '+': return 3;
	case '-': return 3;
    }
}

int main() {
    std::string str="3+4*2/(1-5)^2";
    std::stack<char> action_stack;
    std::string output ="";
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
    std::cout << output << std::endl;
    return 0;
}


