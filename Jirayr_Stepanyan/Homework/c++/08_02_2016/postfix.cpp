#include <iostream>
#include <stack>
#include <vector>

int priority(char x) 
{
    switch (x) 
    {
	case '^': return 3;
	case '*': return 2;
	case '/': return 2;
	case '+': return 1;
	case '-': return 1;
    }
}

int main() 
{
    std::string infix = "3+4*2/(1-5)^2";
    std::stack<char> char_stack;
    std::vector<char> postfix;
    
    // under this is postfix

    for (int i = 0; i <= infix.size(); ++i) 
    {
	if (infix[i] >= '0' && infix[i] <= '9') 
	{
	    postfix.push_back(infix[i]);
	} 
	else 
	{
	    while (!char_stack.empty() && (priority(infix[i]) <= priority(char_stack.top())) && char_stack.top() != '(') 
	    {
		postfix.push_back(char_stack.top());
		char_stack.pop();
	    }
	    char_stack.push(infix[i]);
	    if (infix[i] == ')') 
	    {
		char_stack.pop();
		while (char_stack.top() != '(') 
		{
		    postfix.push_back(char_stack.top()); 
		    char_stack.pop();
		}
		char_stack.pop();
	    }
	}
    }
    while (!char_stack.empty()) 
    {
	postfix.push_back(char_stack.top());
	char_stack.pop();
    }
    std::cout << "postfix: ";
    for(int j = 0; j < postfix.size(); ++j)
    {
	std::cout << postfix[j];
    }

  return 0;
}
