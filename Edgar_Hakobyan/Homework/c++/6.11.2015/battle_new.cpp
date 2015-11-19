#include <iostream>
int length;
int height;
int i = 0;
int j = 0;
int navak;
const int n=5;
int array[n][n];
void naveri_stugum(int i, int j)
{
	array[i][j] = 2;
	if( (j < n) && (array[i][j+1] == 1) )
	{
		++navak;
		++length;
		naveri_stugum(i, j+1);	
	}
	if( (i < n) && (array[i+1][j] == 1) )
	{
		++navak;
		++height;
		naveri_stugum(i+1, j);
	}
	if( (j > 0) && (array[i][j-1] == 1) )
	{
		++navak;
		if(array[i-1][j-1] != 2)
		{
				++length;
		}
		naveri_stugum(i, j-1);
	}
	if( (i > 0) && (array[i-1][j] == 1) )
	{
		++navak;
		if(array[i-1][j+1] !=2)
		{
			++height;
		}
		naveri_stugum(i-1, j);
	}
}
int main()
{
	int qanak = 0;
	for(i=0; i<n; ++i)
	{
		for(j=0; j<n; ++j)
		{
			std::cout<<"array["<<i<<"]["<<j<<"] = ";
			std::cin>>array[i][j];
		}
	}
	for(i=0; i<n; ++i)
	{
		for(j=0; j<n; ++j)
		{
			std::cout<<array[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
	
	for(i=0; i<n; ++i)
	{
		for(j=0; j<n; ++j)
		{
			if(array[i][j] == 1)
			{
				height = 1;
				length = 1;
				navak = 1;
				naveri_stugum(i, j);
				if( (height * length) == navak )
				{
					++qanak;
				}
			}
		}
	}
	std::cout<<"navakneri qanak@ havasar e "<<qanak<<"-i"<<std::endl;
	return 0;
}
