#include <iostream>

int main ()
{
	int N = 10;
	int a[10][10]; 
	for (int i = 0; i < N; ++i) 
	{
		for (int j = 0; j < N; ++j)
		{
			a[i][j]=0;
		}
	}
	a[1][1]=1;
	a[1][2]=1;
	a[1][3]=1;
	a[2][4]=1;
	a[3][5]=1;
	a[4][2]=1;
	a[4][3]=1;
	a[5][2]=1;
	a[5][3]=1;

	int count = 0; 
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (a[i][j] == 1) 
			{
				if (i==0) 
				{
					if (j==0)  
					{
						++count;
					}
					if ((j!= 0) &&  ( a[i][j-1] ==0)) 
					{
						++count; 
					}
				}  
				else 
				{
					if ((j == 0) && (a[i-1][j] == 0))
					{
						++count; 
					}
					if ((j != 0) && (a[i-1][j] == 0) && (a[i][j-1] == 0))
					{
						++count;
					}
				}
			}
		}
	}


	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << count << std::endl;

	return 0;
}
