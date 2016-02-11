#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <stdlib.h>

bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch =='^')
        return true;
    else
        return false;
}

bool validation(std::string str)
{
	int count_bracket = 0;
	for(int i = 0; i < str.length(); ++i)
	{
		if ( str[i]-48 >= 0 && str[i]-48 <= 9)
		{
			continue;
		}
		else if ( isOperator(str[i]) )
		{
			if ( isOperator(str[i+1]) )
			{
                return 0;
			}
		}
		else if ( str[i] == '(' )
		{
			++count_bracket;
		}
		else if ( str[i] == ')' )
		{
			--count_bracket;
			if ( count_bracket < 0 )
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int value_operand(int op1, int op2, char op)
{
    int tmp;
    switch(op)
	{
    	case '+':
    	    tmp = op1 + op2;
        	break;
    	case '-':
        	tmp = op1 - op2;
        	break;
    	case '*':
        	tmp = op1 * op2;
        	break;
    	case '/':
        	tmp = op1 / op2;
        	break;
		case '^':
			tmp = pow(op1,op2);
			break;
    }
    return tmp;
}

int priority(char symbol)
{
	switch (symbol)
	{
		case '+': return 1;
		case '-': return 1;
		case '*': return 2;
		case '/': return 2;
		case '^': return 3;
	}
}

std::string convert_postfix(std::string infix) 
{
	if ( validation(infix) )
	{
	std::stack<char> S;
	std::string postfix = "";
	int open_bracket = 0;
	for(int i = 0; i < infix.length(); ++i)
    {
    	if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^' || infix[i] == '(' || infix[i] == ')')
        {
            if ( infix[i] == '(' )
            {
                S.push(infix[i]);
                ++open_bracket;
            }
            else if ( infix[i] == ')' )
            {
                while ( S.top() != '(' )
                {
                 	postfix += S.top();
					S.pop();
                }
                S.pop();
                --open_bracket;
            }
            else if ( S.size() == 0 )
            {
                S.push(infix[i]);
            }
            else if ( open_bracket > 0 )
            {
                S.push(infix[i]);
            }
            else if ( priority(S.top()) > priority(infix[i]) )
            {
                while ( priority(S.top()) >= priority(infix[i]) )
                {
					postfix += S.top();
                    S.pop();
                    if (S.size() == 0) break;
                }
                S.push(infix[i]);
            }
            else
            {
                S.push(infix[i]);
            }
        }
	 	else
        {
			postfix += infix[i];
        }
    }
    while ( S.size() )
    {
		postfix += S.top();
        S.pop();
    }
    return postfix;
	}
	else
	{
		std::cout << "sintax error!" << std::endl;
		exit(0);
	}
}

int value_postfix(std::string p)
{
	int value;
	std::stack<int> value_stack;
	for(int i = 0; i < p.length(); ++i)
	{
		if ( isOperator(p[i]) )
		{
			int op2 = value_stack.top();
			value_stack.pop();
			int op1 = value_stack.top();
			value_stack.pop();
			value = value_operand(op1,op2,p[i]);
			value_stack.push(value);
		}
		else
		{
			int tmp = p[i] - 48;
			value_stack.push(tmp);
		}
	}
	return value;
}

std::string convert_prefix(std::string infix)
{
	if ( validation(infix) )
	{
	std::stack<char> S;
    std::string prefix = "";
	int close_bracket = 0;
	for(int i = infix.length()-1; i >= 0; --i)
    {
        if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^' || infix[i] == '(' || infix[i] == ')')
        {
            if ( infix[i] == ')' )
            {
                S.push(infix[i]);
                ++close_bracket;
            }
            else if ( infix[i] == '(' )
            {
                while ( S.top() != ')' )
                {
                    prefix.insert(0,1,S.top());
                    S.pop();
                }
                S.pop();
                --close_bracket;
            }
            else if ( S.size() == 0 )
            {
                S.push(infix[i]);
            }
            else if ( close_bracket > 0 )
            {
                S.push(infix[i]);
            }
            else if ( priority(S.top()) > priority(infix[i]) )
            {
                while ( priority(S.top()) >= priority(infix[i]) )
                {
					prefix.insert(0,1,S.top());
                    S.pop();
                    if (S.size() == 0) break;
                }
                S.push(infix[i]);
            }
            else
            {
                S.push(infix[i]);
            }
        }
     else
        {
			prefix.insert(0,1,infix[i]);
        }
    }
    while ( S.size() )
    {
		prefix.insert(0,1,S.top());
        S.pop();
    }
	return prefix;
	}
	else 
	{
		std::cout << "sintax error!" << std::endl;
		exit(0);
	}
}

int main()
{
	std::string expression = "2+(3*2)-8/2*2^2";
//  std::getline(std::cin,expression);
	std::string postfix = convert_postfix(expression);
	std::string prefix = convert_prefix(expression);
	int value = value_postfix(postfix);
	std::cout << "infix_expression " << expression << std::endl;
	std::cout << "postfix_expression " << postfix << std::endl;
	std::cout << "prefix_expression " << prefix << std::endl;
	std::cout << "value = " << value << std::endl;
	return 0;
}
