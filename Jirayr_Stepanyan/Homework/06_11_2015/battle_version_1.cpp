#include <iostream>
int aj(int i, int j, int j_meker, int i_meker, int** qartez, int chap);
int nerqev(int i, int j, int i_meker, int j_meker, int** qartez, int chap);
int dzax(int i, int j, int j_meker = 0, int i_meker, int** qartez, int j_meker_old, int chap);
void verev(int i, int j, int j_meker, int i_meker, int** qartez, int chap);
int mekeri_qanak = 0;

int aj(int i, int j, int j_meker, int i_meker, int** qartez, int chap)
{
	if(qartez[i][j] == 1)
	{
		qartez[i][j] = 2;
		++mekeri_qanak;
		++j_meker;
	}
	if(j == chap - 1 || qartez[i][j] == 0 || qartez[i][j] == 2)
	{
		return (j_meker + 1) * (i_meker + 1);
	}
	aj(i, j + 1, j_meker, i_meker, qartez, chap);
	i_meker = nerqev(i + 1, j, j_meker, i_meker, qartez, chap);
	verev(i - 1, j, j_meker, i_meker, qartez, chap);
}
int nerqev(int i, int j, int i_meker, int j_meker, int** qartez, int chap)
{
	if(qartez[i][j] == 1)
	{
		qartez[i][j] = 2;
		++mekeri_qanak;
		++i_meker;
	}
	if(i == chap - 1 || qartez[i][j] == 0 || qartez[i][j] == 2)
	{
		return i_meker;
	}
	nerqev(i + 1, j, j_meker, i_meker, qartez, chap);
	j_meker = (aj(i, j + 1, j_meker, i_meker, qartez, chap)) + (dzax(i, j - 1, j_meker, i_meker, qartez, j_meker, chap));
}
int dzax(int i, int j, int j_meker = 0, int i_meker, int** qartez, int j_meker_old, int chap)
{
	if(qartez[i][j] == 1)
	{
		qartez[i][j] = 2;
		++mekeri_qanak;
		++j_meker;
	}
	if(j == 0 || qartez[i][j] == 0 || qartez[i][j] == 2)
	{
		if(j_meker > j_meker_old)
		{
			return j_meker;
		}
		else
		{
			return j_meker_old;
		}
	}
	dzax(i, j - 1, j_meker, i_meker, qartez, j_meker, chap);
	nerqev(i + 1, j, j_meker, i_meker, qartez, chap);
	verev(i - 1, j, j_meker, i_meker, qartez, chap);
}
void verev(int i, int j, int j_meker, int i_meker, int** qartez, int chap)
{
	if(qartez[i][j] == 1 && i >= 0)
	{
		qartez[i][j] = 2;
		++mekeri_qanak;
		verev(i - 1, j, j_meker, i_meker, qartez, chap);
		aj(i, j + 1, j_meker, i_meker, qartez, chap);
		dzax(i, j - 1, j_meker, i_meker, qartez, j_meker, chap);
	}
	
}
int main()
{
	int chap = 0;
	while(chap <= 0)
	{
		std::cout << "tpel qartezi chap@ (0-ic bardzr) ";
		std::cin >> chap;
	}
	int** qartez;
	qartez = new int *[chap];
	std::cout << "tpel 1 ete tvyal vayrum uzum eq nav lini hakarak depqum 0 " << std::endl;
	for(int i = 0; i < chap; ++i)
	{
		qartez[i] = new int [chap];
		for(int j = 0; j < chap; ++j)
		{
			std::cout<<" qartez["<<i<<"],["<<j<<"] = ";
			std::cin >> qartez[i][j];
		}
		std::cout << std::endl;
	}
	int j_meker = 0;
	int i_meker = 0;
	int makeres = 0;
	int naver = 0;
	for(int i = 0; i < chap; ++i)
	{
		for(int j = 0; j < chap; ++j)
		{
			if(qartez[i][j] && qartez[i][j] != 2)
			{
				makeres = aj(i, j, j_meker, i_meker, qartez, chap);
				if(makeres == mekeri_qanak)
				{
					++naver;
				}				
			}
		}
	}
	std::cout << "naveri qanak@ = " << naver << std::endl;
	for (int i = 0; i<chap; ++i)
        delete qartez[i];
 	delete qartez;

   return 0;
}
