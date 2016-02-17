#include <iostream>
#include <cstring>
#include <vector>

void Prefix(std::string);
//void Postfix(std::string);
int forsize(std::string);
int priority(char &);
int main()
{
	std::string exprn;
	std::cout << "Please import expression: ";		
	std::cin >> exprn;
	Prefix(exprn);
	//Postfix(exprn);
	return 0;
}

void Prefix(std::string exprn){
	char stack[10];
	int top = 0;
	int j = 0;
	int size = forsize(exprn);
	char array[size];
std::cout << "Size of exprn " << size << std::endl;
	for(int i = 0; i < size; ++i){
		if (priority(exprn[size-i]) >= priority(stack[top]))
			{
				stack[++top] = exprn[size-i];
			}else
		if (priority(exprn[size-i]) < priority(stack[top]) && priority(exprn[size-i]) != 1 && priority(exprn[size-i]) != -1)
			{
				while( top != -1)
				{
					array[j++] = stack[top--];
					std::cout << "Vector[j] " << array[j] << std::endl; 
				}
				top = 0;
				stack[top] = exprn[size-i];
			}else
		if (priority(exprn[size-i]) == 1)
			{
				array[j++] = exprn[size-i];
				std::cout << "Vector[j] " << array[j] << std::endl;
			}else
		if (priority(exprn[size-i]) == -1)
			{
				std::cout << "We have not correct expression :-( " << std::endl;
				break;
			}
	}
	std::cout << "For prefix: " << std::endl;
	while(j != -1)
	{
		std::cout << array[j];
		--j;
	}
}

int priority(char &symbol){
	switch(symbol){
	case '+': case '-':
	return 2;
	case '*': case '/':
	return 3;
	case '^':
	return 4;
	case '0': case '1': case '2': case '3': case '4': 
	case '5': case '6': case '7': case '8': case '9':
	return 1;
	default:
	return -1;
	}
}

int forsize(std::string str){
	int size = 0;
	while(str[size] != '\0')	
	{
		++size;
	}
	return size;
}





