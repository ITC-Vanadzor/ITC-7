#include <iostream>
int main()
{
	int chap = 0;
	while(chap <= 0)
	{
		std::cout << "tpel qartezi chap@ (0-ic bardzr) ";
		std::cin >> chap;
	}
	int qartez[chap][chap];
	std::cout << "tpel 1 ete tvyal vayrum uzum eq nav lini hakarak depqum 0 " << std::endl;
	for(int i = 0; i < chap; ++i)
	{
		for(int j = 0; j < chap; ++j)
		{
			std::cout<<" qartez["<<i<<"],["<<j<<"] = ";
			std::cin >> qartez[i][j];
		}
	}
	int naver = 0;
	for(int i = 0; i < chap; ++i)
	{
		for(int j = 0; j < chap; ++j)
		{
			if(qartez[i][j])
			{
				if(qartez[i][j] != 2)
				{	
					int erkus = 0;
					int a = i;
					int b = j;
					int nerqev = 0;
					int max = 1;
					for (a; qartez[a][j] && i + a < chap; ++a)
					{   
                               	       		for (b; qartez[i][b] && j + b < chap; ++b) 
						{
							for(nerqev; qartez[a + nerqev][j + b] && nerqev < chap; ++nerqev)
							{
								if(qartez[a + nerqev][j + b + 1] != 2 && qartez[a+nerqev][j+b-1] !=2)
								{
									++erkus;
                                       				}
									qartez[a + nerqev][j + b] = 2;
							}
							if(nerqev > max)
							{
								max = nerqev;
							}
							nerqev = 0;
						}
					}
					if(erkus == (max * b))
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
