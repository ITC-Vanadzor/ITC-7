#include<iostream>
int main()
{
	int n = 0;
	do
	{
		std::cout << "n = ";
		std::cin >> n;
	}
	while(n < 0);
	
	char arr[250];
	for(int i = 0; i < n; ++i)
	{
		std::cout << "arr[" << i + 1 << "]";
		std::cin >> arr[i];
	} 
	std::cout << std::endl;
	int qanak = 0;
	for(int j = 0; j < n; ++j)
	{
		if(arr[j] == '<' && arr[j + 1] == '-' && arr[j + 2] == '-' && arr[j + 3] == '<' && arr[j + 4] == '<') || if(arr[j] == '>' && arr[j + 1] == '>' && arr[j + 2] == '-' && arr[j + 3] == '-' && arr[j + 4] == '>')
		{
			++qanak;
			
		
		}
	}
	std::cout << qanak << std::endl;
	

return 0;
}
