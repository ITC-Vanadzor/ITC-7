#include <iostream>
#include <string>

int main()
{
	char string1[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int str;
	string number;
	
	std::cin >> number;

	for(int i = 0; i < 10; i++)
	{
		str = 0;
		for(int j = 0; j < int(number.length()); j++)
		{
			if(string1[i]==number[j])
			{	
				str = 1;
				break;
			}
		}
		    if (str == 0)
			std::cout << string1[i] << " ";
	}
	
	std::cout << endl;
	return 0;
} 
