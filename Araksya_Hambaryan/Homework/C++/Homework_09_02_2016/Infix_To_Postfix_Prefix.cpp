#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

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

bool check_priority(char flag, char a, char b) {
    if (flag == 'r') {
	return (priority(a) < priority(b));
    } else {
        return (priority(a) >= priority(b));
    }
}
// flags:  postfix --> 'o', prefix ---> 'r'
std::string convert(std::string str, char flag) {
    std::stack<char> action_stack;
    std::string output="";
    char symbol1 = '(';
    char symbol2 = ')';
    if ( flag == 'r') {
	std::string tmp = "";
	for (int i = str.length(); i>=0; --i) {
	    tmp += str[i];
	} 
	str = tmp;
	std::swap(symbol1, symbol2);
    }
    for (int i=0; i<=str.length(); ++i) {
	if (str[i] >= '0' && str[i] <= '9') {
	    output += str[i];
	} else {
	    while (!action_stack.empty() && check_priority(flag, str[i], action_stack.top()) && action_stack.top() != symbol1) {
		output += action_stack.top();
		action_stack.pop();
	    }
	    action_stack.push(str[i]);
	    if (str[i] == symbol2) {
		action_stack.pop();
		while (action_stack.top() != symbol1) {
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
    std::string output_text = convert(text, 'r');
    std::cout << "Prefix   ";
    for (int i=output_text.length(); i>=0; --i) {
     std::cout << output_text[i];
    }
    std::cout<<std::endl;
    output_text = convert(text, 'o');
    std::cout << "Postfix   " << output_text << std::endl;
    return 0;
}


