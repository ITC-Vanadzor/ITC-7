#include<iostream>
int main()
{
	int n = 0;
	do
	{
		std::cout << "n = ";
		std::cin >> n;
	}while(n <= 0);
	
	int arr[n][n];
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			std::cout << "arr[" << i + 1 << "]" << "[" << j + 1 << "] = ";
			std::cin >> arr[i][j];
		}
	} 
	std::cout << std::endl;
	for(int j = 0; j < n; ++j)
	{
		for (int i = n - 1; i >=0; --i)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	

return 0;
}
