#include <iostream>
#include <stack>
#include <cstring>
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

void convert_postfix(char* infix) 
{
	std::stack<char> S;
	char postfix[10];
	int k = -1;
	int open_bracket = 0;
	for(int i = 0; i < strlen(infix); ++i)
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
                    postfix[++k] = S.top();
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
                    postfix[++k] = S.top();
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
            postfix[++k] = infix[i];
        }
    }
    while ( S.size() )
    {
        postfix[++k] = S.top();
        S.pop();
    }
    std::cout << "postfix expression: ";
    for( int i = 0; i <= k; ++i)
    {
        std::cout << postfix[i];
    }
	std::cout << std::endl;
}

void convert_prefix(char* infix)
{
	std::stack<char> S;
	char prefix[10];
	int close_bracket = 0;
	int k = strlen(infix);
	int kk = k;
	for(int i = k-1; i >= 0; --i)
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
                    prefix[--k] = S.top();
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
                    prefix[--k] = S.top();
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
            prefix[--k] = infix[i];
        }
    }
    while ( S.size() )
    {
        prefix[--k] = S.top();
        S.pop();
    }
    std::cout << "prefix expression: ";
    for( int i = k; i < kk; ++i)
    {
        std::cout << prefix[i];
    }
    std::cout << std::endl;
}

int main()
{
	char infix[] = "a+b*(c+d)";
	std::cout << "infix expression: " << infix << std::endl;
	convert_prefix(infix);
	convert_postfix(infix);
	return 0;
}
