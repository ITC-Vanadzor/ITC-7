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
int main()
{
	std::stack<char> S;
	char infix[] = "((a+b)*c)+d*e";
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
			else if ( priority(S.top()) >= priority(infix[i]) )
			{
				postfix[++k] = S.top();
				S.pop();
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
	std::cout << "infix expression: " << infix << std::endl;
	std::cout << "postfix expression: ";
	for( int i = 0; i <= k; ++i)
	{
		std::cout << postfix[i];
	}
	std::cout << std::endl;
	return 0;
}
