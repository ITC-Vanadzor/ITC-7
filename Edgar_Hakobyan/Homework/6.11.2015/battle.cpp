#include <iostream>
int main()
{
	int array[10][10];
	int n;
	std::cout<<"greq dashti chap@:";
	std::cin>>n;
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			std::cout<<"array["<<i<<"]["<<j<<"]=";
			std::cin>>array[i][j];
		}
	}
	int navak = 0;
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			if(array[i][j] != 2)
			{
				if(array[i][j] == 0) continue;
				if(array[i][j] == 1)
				{
					for(int nerqev = i; array[nerqev][j] != 0; ++nerqev)
					for(int aj=j; array[i][aj] != 0; ++aj)
					{
						array[nerqev][aj] = 2;
					}
					++navak;
				}
			}
		}
	}
	std::cout<<"ka "<<navak<<" navak"<<std::endl;
	return 0;
}