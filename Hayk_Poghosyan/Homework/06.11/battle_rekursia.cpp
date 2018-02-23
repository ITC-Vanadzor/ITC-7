//marskoy boy
#include<iostream>
#define n 6
short int map[n][n];
int down;
int right;
int left;
int count;
void check(int i, int j)
{
	++count;
	map[i][j] = 2;
	if (j<n && map[i][j + 1]==1) {if(j>=right) right=j+1; check(i, j+1); }
	if (j>0 && map[i][j - 1]==1) { if (j<=left) left=j+1; check(i, j-1); }
	if (map[i - 1][j]==1) check(i-1 , j);
	if (i<n && map[i + 1][j]==1) { if (i>=down) down = i+1; check(i+1, j );  }
}

int main()
{
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			map[i][j] = false;
		}
	}
	//
	map[1][1] = 1;
	map[1][2] = 1;
	map[2][1] = 1;
	map[2][2] = 1;
	map[4][4] = 1;
	map[3][4] = 1;
	map[4][3] = 1;
	//
	int ships = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			down=0;
			right=j;
			left=j;
			count=0;
			if (map[i][j] == 1)
			{
				check(i, j);
			
				if (count == (down - i+1)*(right - left+1) || count ==1)
				{
					++ships;
				}
			}
		}
	}

	std::cout << ships;
	

	return 0;
}
