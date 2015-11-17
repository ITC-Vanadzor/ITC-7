#include <iostream>
#define chap 4
int qartez[chap][chap];
int meker;
int j_max;
int i_max;
int j_min;
void stugum(int i, int j)
{
	++meker;
	qartez[i][j] = 2;
	if(qartez[i][j + 1] == 1 && j + 1 < chap)
	{
		if(j >= j_max)
		{
			j_max = j + 1;
		}
		stugum(i, j + 1);
	}
	if(qartez[i + 1][j] == 1 && i + 1 < chap)
	{
		if(i >= i_max)
		{
			i_max = i + 1;
		}
		stugum(i + 1, j);
	}
	if(qartez[i][j - 1] == 1 && j - 1 >= 0)
	{
		if(j_min <= j)
		{
			j_min = j - 1;
		}
		stugum(i, j - 1);
	}
	if(qartez[i - 1][j] == 1 && i - 1 >= 0)
	{
		stugum(i - 1, j);
	}
}
int main()
{
	std::cout << "tpel 1 ete tvyal vayrum uzum eq nav lini hakarak depqum 0 " << std::endl;
	for(int i = 0; i < chap; ++i)
	{
		for(int j = 0; j < chap; ++j)
		{
			std::cout<<" qartez["<<i + 1<<"],["<<j + 1<<"] = ";
			std::cin >> qartez[i][j];
		}
		std::cout << std::endl;
	}
	int naver = 0;
	for(int i = 0; i < chap; ++i)
	{
		for(int j = 0; j < chap; ++j)
		{
			if(qartez[i][j] == 1)
			{
				j_max = j;
				j_min = j;
				i_max = i;
				stugum(i, j);
				if(meker == ((j_max - j_min) + 1) * (i_max + 1))
				{
					++naver;
				}				
			}
		}
	}
	std::cout << "naveri qanak@ = " << naver << std::endl;

   return 0;
}
