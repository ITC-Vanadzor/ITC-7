#include <iostream>
int main()
{
	char a[250], str1[6] = "<--<<", str2[6] = ">>-->";
	char* str;
	int count = 0;
	std::cout << "Please import string ";
	std::cin >> a;

	for(int i = 0; i < 246; ++i)
	{
		switch(a[i])
		{
			case '<':
			str = &str1[0];
			break;

			case '>':
			str = &str2[0];
			break;

			default:
			continue;
		}
		for(int j = 1; j < 5; ++j)
			{
				if(a[i + j] != str[j]) 
				{
					break;
				}
				if(j == 4) 
				{
					++count;
					i += 3;
				}
			}
		
	}
	std::cout << "For quantity of darts we will have  " << count << std::endl; 

return 0;
}
