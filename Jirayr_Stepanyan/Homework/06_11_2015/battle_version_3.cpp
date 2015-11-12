#include <iostream>
#define chap 4
int qartez[chap][chap];
int meker;
int aj;
int dzax;
int nerqev;

void stugum(int i, int j)
{
	++meker;
	qartez[i][j] = 2;
	if(qartez[i][j + 1] == 1 && j + 1 != chap)
	{
		++aj;
		stugum(i, j + 1);
	}
	if(qartez[i + 1][j] == 1 && i + 1 != chap)
	{
		++nerqev;
		stugum(i + 1, j);
	}
	if(qartez[i][j - 1] == 1 && j - 1 >= 0)
	{
		++dzax;
		stugum(i, j - 1);
	}
	if(qartez[i - 1][j] == 1 && i - 1 >= 0)
	{
		stugum(i - 1, j);
	}
}
int main()
{
	/*chap = 0;
	while(chap <= 0)
	{
		std::cout << "tpel qartezi chap@ (0-ic bardzr) ";
		std::cin >> chap;
	}
	qartez[chap][chap];*/
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
	meker = 0;
	for(int i = 0; i < chap; ++i)
	{
		for(int j = 0; j < chap; ++j)
		{
			if(qartez[i][j] == 1)
			{
				aj = 0;
				dzax = 0;
				nerqev = 0;
				stugum(i, j);
				if(dzax > aj)
				{
					dzax = dzax + aj;
					if(meker == (dzax + 1) * (nerqev + 1))
					{
						++naver;
					}
				}
				else
				{
					if(meker == (aj + 1) * (nerqev + 1))
					{
						++naver;
					}
				}				
			}
		}
	}
	std::cout << "naveri qanak@ = " << naver << std::endl;

   return 0;
}
