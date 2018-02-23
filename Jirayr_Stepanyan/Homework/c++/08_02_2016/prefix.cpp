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
    std::vector<char> prefix;
    std::vector<char>::iterator skizb;
    skizb = prefix.begin();
    for (int i = infix.size(); i >= 0; --i)
    {
        if (infix[i] >= '0' && infix[i] <= '9')
        {
            prefix.insert(skizb, infix[i]);
        }
        else
        {
            while (!char_stack.empty() && (priority(infix[i]) < priority(char_stack.top())) && char_stack.top() != ')')
            {
                prefix.insert(skizb, char_stack.top());
                char_stack.pop();
            }
            char_stack.push(infix[i]);
            if (infix[i] == '(')
            {
                char_stack.pop();
                while (char_stack.top() != ')')
                {
                    prefix.insert(skizb, char_stack.top());
                    char_stack.pop();
                }
                char_stack.pop();
            }
        }
    }
    while (!char_stack.empty())
    {
        prefix.insert(skizb, char_stack.top());
        char_stack.pop();
    }
    std::cout << "prefix: ";
    for(int j = 0; j < prefix.size(); ++j)
    {
        std::cout << prefix[j];
    }

  return 0;
}

