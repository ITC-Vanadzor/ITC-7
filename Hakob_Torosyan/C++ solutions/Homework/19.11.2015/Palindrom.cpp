#include <iostream>
int main()
{	int  size = 1, i;
	char string[100];
	std::cout << "Please import string " << std::endl;
	std::cin >> string;
	while(string[size] != '\0')
	{
		size++;
	} 
	for(i = 1; i < size; ++i)
	{
		if(string[0] != string[i])
		{
			break;
		}	
	}
	
	if(i == size)
		{
		std::cout << "We have not solution " << std::endl;
		return 0;
		}else{
	for(i = 0; i < size/2 - 1; ++i)
		{
			if(string[i] != string[size - 1 - i])
			{
			std::cout << "This is not palindrom " << std::endl;
			break;	
			}
			
		}
	if(i == size/2 - 1)
	{
		std::cout << "For needed subset we will have ";
		for(int j = 0; j < size-1; ++j)
		{
			std::cout << string[j];		
		}
		std::cout << std::endl;
	}
	}

	return 0;
}
