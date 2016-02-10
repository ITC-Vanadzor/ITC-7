#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

int priority(char x) {
    switch (x) {
	case '^': return 4;
	case '*': 
	case '/': return 3;
	case '+': 
	case '-': return 2;
	case ')': 
	case '(': return 1;
	default: {
	    if (x >= '0' && x <= '9') {
		return 0;
	    } else {
		return -1;
	    }
	}
    }
}

void correct_string (std::string text) {
    int bracket_open = 0;
    int bracket_close = 0;
    for (int i = 0; i < text.length(); ++i) {
	if (priority(text[i]) == -1) {
	    std::cout << "Incorrect string! Try again. " << std::endl;
	    exit(1);
	}
	if (text[i] == '(' ) {
	    ++bracket_close;
	}
	if (text[i] == ')' ) {
	    ++bracket_open;
	}
    }
    if ( bracket_open != bracket_close || priority(text[0]) > 1 || priority(text[text.length()-1]) > 1 ) {
        std::cout << "Incorrect string! Try again. " << std::endl;
	exit(1);
    } else {
        std::cout << "Correct string " << std::endl;
    }
}

void pop_stack (std::stack<char> &action_stack, std::string &output) {
    output += action_stack.top();
    action_stack.pop();
}

std::string prefix(std::string str) {
    std::stack<char> action_stack;
    std::string output = "";
    for (int i = str.length(); i > 0; --i) {
	if (str[i] >= '0' && str[i] <= '9') {
	    output += str[i];
	} else {
	    if (str[i] != '(' && str[i] != ')') {
		while (!action_stack.empty() && action_stack.top() != ')' && priority(str[i]) > priority(action_stack.top())) {
		    pop_stack (action_stack, output);
		}
	    }
	    if (str[i] == '(') {
		while (action_stack.top() != ')') {
		    pop_stack (action_stack, output);
		}
		action_stack.pop();
	    } else {
	    action_stack.push(str[i]);
	    }
	}
    }
    while (!action_stack.empty()) {
	pop_stack(action_stack, output);
    }
    std::string tmp = "";
    for (int i = output.length(); i > 0; --i) {
	tmp += output[i];
    }
    return tmp;
}

std::string postfix(std::string str) {
    std::stack<char> action_stack;
    std::string output="";
    for (int i=0; i<str.length(); ++i) {
	if (str[i] >= '0' && str[i] <= '9') {
	    output += str[i];
	} else {
	    if (str[i] != ')' && str[i] != '(') {
		while (!action_stack.empty() && (priority(str[i]) >= priority(action_stack.top())) && action_stack.top() != '(') {
		    pop_stack(action_stack, output);
		}
	    }
	    if (str[i] == ')') {
		while (action_stack.top() != '(') {
		    pop_stack(action_stack, output);
		}
		action_stack.pop();
	    } else {
		action_stack.push(str[i]);
	    }
	}
    }
    while (!action_stack.empty()) {
	pop_stack(action_stack, output);
    }
    return output;
}

int main() {
    std::string text = "((5/(7-(1+1)))*3)-(2+(1+1))";
    correct_string(text);

    std::string output_text = prefix(text);
    std::cout << "Prefix   " << output_text << std::endl;

    output_text = postfix(text);
    std::cout << "Postfix   " << output_text << std::endl;
    return 0;
}
