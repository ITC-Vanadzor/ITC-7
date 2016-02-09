#include <iostream>
#include <cstring>
void Prefix(string &);
void Postfix(string &);
int main()
{
	string str;
	std::cout << "Please import expression: ";
	std::cin >> str;
	Prefix(str);
	Postfix(str);
	return 0;
}

void Prefix(string &str)
{
	char stack[30];
	int top = 0;
	char array[100];
	int i = 0;
	int size = 0;
	while(str[size] != '0')
	{
		++size;
	}
	while(str[i] != '0')
	{
		array[i] = str[size-i];
	}
	char prefix[size];
	for(int j = 0; j <= size; ++j)
	{
		switch(array[j])
		{
			case '+':
			if ( stack[top] == '-' || stack[top] == '+' )
				{
					stack[++top] = '+';
				}
			if ( stack[top] == '*' || stack[top] == '/' || stack[top] == '^' || stack[top] == '(' || stack[top] == ')' )
				{
					while( stack[top] == '*' || stack[top] == '/' || stack[top] == '^' || stack[top] == '(' || stack[top] == ')' )
						{	
							prefix[size-j] = stack[top--];
							++j;
						}
				}
			break;
			case '-':
			  if ( stack[top] == '-' || stack[top] == '+' )
                                {
                                        stack[++top] = '-';
                                }
                        if ( stack[top] == '*' || stack[top] == '/' || stack[top] == '^' || stack[top] == '(' || stack[top] == ')' )
                                {
                                        while( stack[top] == '*' || stack[top] == '/' || stack[top] == '^' || stack[top] == '(' || stack[top] == ')' )
                                                {
                                                        prefix[size-j] = stack[top--];
                                                        ++j;
                                                }
                                }
                        break;
			case '*':
			if ( stack[top] == '+' || stack[top] == '-' )
				{
					stack[++top] == '*';
				}
			if ( stack[top] == '*' || stack[top] == '/')
				{
					stack[++top] == array[j];
				}	
			case '/':
			case '^':
			case '(':
			case ')':
			default :
			prefix[size-j] = array[j];
			break; 
		}
	}
	
}

void Postfix(string &str)
{
        char stack[30];
        char array[100];
        int i = 0;
        int size = 0;
        while(str[size] != '0')
        {
                ++size;
        }
        while(str[i] != '0')
        {
                array[i] = str[i];
        }
	char postfix[size];
	 for(int j = 0; j <= size; ++j)
        {
                switch(array[j])
                {
                        case '+':
                        case '-':
                        case '*':
                        case '/':
                        case '^':
                        case '(':
                        case ')':
                }
        }

	
}

