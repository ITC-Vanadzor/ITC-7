#include <iostream>
int main()
{
	char array[100];
	char stack[100];
	int top = -1, i = 0;
	std::cout << "greq tox@ ";
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

		case '\'':
			if (stack[top] == '\'')
			{
				top--;
			}
			else
			{
				stack[++top] = array[i];
			}
			break;
		case '\"':
			if (stack[top] == '\"')
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
				std::cout << "sxal pakagcer" << std::endl;
				return 0;
			}

			if (array[i] == '}' && stack[top--] != '{')
			{
				std::cout << "sxal pakagcer" << std::endl;
				return 0;
			}

			if (array[i] == ')' && stack[top--] != '(')
			{
				std::cout << "sxal pakagcer" << std::endl;
				return 0;
			}

			if (array[i] == ']' && stack[top--] != '[')
			{
				std::cout << "sxal pakagcer" << std::endl;
				return 0;
			}

		}
		++i;
	}
	if (top >= 0)
	{
		std::cout << "sxal pakagcer" << std::endl;
	}
	else
	{
		std::cout << "chist pakagcer " << std::endl;
	}
	return 0;
}