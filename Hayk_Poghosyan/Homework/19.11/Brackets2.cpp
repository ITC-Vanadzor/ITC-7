#include <iostream>
int main()
{
	char array[100], stack[100];
	int top = -1, i = 0;
	std::cout << "Please import string ";
	std::cin >> array;
	while (array[i] != '\0')
	{
		switch (array[i])
		{
		case '{':
		case '(':
		case '[':
			stack[++top] = array[i];
			break;

		case 39:
			if (stack[top] == 39)
			{
				top--;
			}
			else
			{
				stack[++top] = array[i];
			}
			break;
		case 34:
			if (stack[top] == 34)
			{
				top--;
			}
			else
			{
				stack[++top] = array[i];
			}
			break;

		case '}':
		case ']':
		case ')':
			if (top < 0)
			{
				std::cout << "ERROR" << std::endl;
				return 0;
			}

			if (array[i] == '}' && stack[top--] != '{')
			{
				std::cout << "ERROR" << std::endl;
				return 0;
			}

			if (array[i] == ')' && stack[top--] != '(')
			{
				std::cout << "ERROR" << std::endl;
				return 0;
			}

			if (array[i] == ']' && stack[top--] != '[')
			{
				std::cout << "ERROR" << std::endl;
				return 0;
			}

		}
		++i;
	}
	if (top >= 0)
	{
		std::cout << "ERROR" << std::endl;
	}
	else
	{
		std::cout << "We have right string " << std::endl;
	}
	return 0;
}