#include <iostream>
#include <cstdlib>
int vektorakan (int x1, int y1, int x2, int y2, int x3, int y3)
	{
		return (x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);
	}
int main()
{
	int n;
	std::cout << "n= ";
	std::cin >> n;
	int ket[3][n];
	std::cout << "Mutqagrenq keteri koordinatner@" << std::endl;
	for (int j=1; j<=n; ++j)
	{
		std::cout <<"x" << j << "= ";
		std::cin >> ket[2][j];
		std::cout << "y" << j << "= ";
		std::cin >> ket[3][j];
	}
	for (int j=1; j<=n; ++j)
	{
		ket[1][j]=j;
	}
	bool stugum;
	// entadren araji 3 keter@ bazmankyan "urucik" masic en
	stugum=(vektorakan(ket[2][1], ket[3][1], ket[2][2], ket[3][2], ket[2][3], ket[3][3])>0);
	
	int j=1;
	int m=j+2;
	int qanak;
	qanak=n;
	while (qanak>3)
	{
		do
		{
			if ((vektorakan(ket[2][j], ket[3][j], ket[2][j+1], ket[3][j+1], ket[2][m], ket[3][m])>0) = stugum)
			{
				std::cout<< ket[1][j] << " --> " << ket[1][m] << std::endl;
				ket[1][j+1]=ket[2][j+1]=ket[3][j+1]=0;
				++m;
			}
			else
			{
				j=m-1;
				if (ket[1][j]=0)
				{
					++j
				}
				m=j+2;
			}
		}
		while (m<=n);
		for (int j=1; j<=n; ++j)
		{
			if (ket[1][j]==0)
			{
				--qanak;
				for (int m=j; m<=n; ++m)
				{
					ket[1][m]=ket[1][m+1];
					ket[2][m]=ket[2][m+1];
					ket[3][m]=ket[3][m+1];
				}
			}
		}
	}
return 0;
}










