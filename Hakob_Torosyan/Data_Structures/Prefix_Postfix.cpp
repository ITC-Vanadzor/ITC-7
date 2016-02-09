#include <iostream>
#include <string>
void Prefix(std::string &);
//void Postfix(string &);
int main()
{
	std::string str;
	std::cout << "Please import expression: ";
	std::cin >> str;
	Prefix(str);
	//Postfix(str);
	return 0;
}

void Prefix(std::string &str)
{
	char stack[30];
	int top = 0;
	char array[100];
	int i = 0;
	int size = 0;
	while(str[size] != '\0')
	{
		++size;
	}
	std::cout << size << " size " << std::endl;
	while(str[i] != '\0')
	{
		array[i] = str[size-i-1];
		std::cout << array[i] << " ";
		++i;
	}
	char prefix[size];
	for(int j = 0; j < size; ++j)
	{	
		
		switch(array[j])
		{
			case '+':
			if ( stack[top] == '-' || stack[top] == '+' )
				{
					stack[++top] = array[j];
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
                                        stack[++top] = array[j];
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
			if ( stack[top] == '+' || stack[top] == '-' ||  stack[top] == '*' || stack[top] == '/' )
				{
					stack[++top] = array[j];
				}
			if ( stack[top] == '^' )
				{	while(stack[top] == '^' ) 
						{
						prefix[size-j] = stack[top--];
						++j;
						}
					stack[++top] = '*';	
				}        
			if ( stack[top] == '(' )
				{
					stack[++top] = array[j];
				}
			break;
			
			case '/':
			if ( stack[top] == '+' || stack[top] == '-' ||  stack[top] == '*' || stack[top] == '/' )
				{
					stack[++top] = array[j];
				}
			 if ( stack[top] == '^' )
                                {       while(stack[top] == '^' )
                                                {
                                                prefix[size-j] = stack[top--];
                                                ++j;
                                                }
                                        stack[++top] = '/';
                                }
                        if ( stack[top] == '(' )
                                {
                                        stack[++top] = array[j];
                                }
                        break;

			case '^':
			if ( stack[top] == '+' || stack[top] == '-' ||  stack[top] == '*' || stack[top] == '/' || stack[top] == '^' )
				{
					stack[++top] = array[j];
				}
			if ( stack[top] == '(' )
                                {
                                        stack[++top] = array[j];
                                }
                        break;

			case '(':
			if ( stack[top] == '+' || stack[top] == '-' ||  stack[top] == '*' || stack[top] == '/' || stack[top] == '^' || stack[top] == '(' )
				{
					stack[++top] = '(';
				}
			break;
			
			case ')':
			 while( stack[top] != '(' ) 
				 {
					 prefix[size-j] = stack[top--];
                                         ++j;
                                 }
                         --top;
			break;
			default:
			prefix[size-j] = array[j];
			break; 
		}
	}
	for(int k = 0; k < size; ++k)
		{
			std::cout << prefix[k];
		}	
}

/*void Postfix(string &str)
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
*/
