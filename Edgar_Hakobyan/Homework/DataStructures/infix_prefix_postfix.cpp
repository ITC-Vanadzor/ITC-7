#include <iostream>
int count = 0;
char stack[10];
char infix[10];
char postfix[10];
int compare(char symbol)
{
	if (symbol == '+' || symbol == '-') return 1;
	if (symbol == '*' || symbol == '/') return 2;
	if (symbol == '^') return 3;
	if (symbol == '(' || symbol == ')') return 4;
	return 0;
}
void push(char sumbol)
{
	stack[count] = sumbol;
	++count;
}
char pop()
{
	--count;
	return (stack[count]);
}
int check()
{
	int i = 0;
	int count_postfix_value = 0;
	int count_postfix_symbol = 0;
	while ( postfix[i] != '\0')
	{
		if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/' || postfix[i] == '^')
		{
			break;
		}
		else
		{
			++count_postfix_value;
			++i;
		}
	}
	while ( postfix[i] != '\0' )
	{
		++count_postfix_symbol;
		++i;
	}
	return (count_postfix_value - count_postfix_symbol);
}
int main()
{
	int i = 0;
	int k = 0;
	char temp;
	std::cout << "Enter infix expression:" << std::endl;
	std::cin >> infix; 
	while(infix[i] != '\0')
	{
		if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^' || infix[i] == '(' || infix[i] == ')')
		{
			if (count == 0)
			{	
				push(infix[i]);
			}
			else
			{
				if (infix[i] == '(' || infix[i] == ')')
				{
					if (infix[i] == '(') push(infix[i]);
                    if (infix[i] == ')')
					{
						temp = pop();
						while(temp != '(')
						{
							postfix[k++] = temp;
							temp = pop();
						}
					}
				}
			else
			{
				if (stack[count-1] != '(')
				{
					if ( compare(infix[i]) <= compare(stack[count-1]) )
					{
						int kk = check();
						while( kk > 1 )
						{
							temp = pop();
							postfix[k++] = temp;
							kk = check();
						}
					}
				}
				push(infix[i]);
			}
			}
		}
		else
		{
			postfix[k++] = infix[i];
		}
		++i;
	}
	while(count != 0)
	{
		postfix[k++] = pop();
	}
	std::cout << "Postfix expression:"  << postfix << std::endl;
	return 0;
}
