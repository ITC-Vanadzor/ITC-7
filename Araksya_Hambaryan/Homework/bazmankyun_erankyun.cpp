#include <iostream>
#include <cmath>
#include <limits>

int vektorakan (int x1, int y1, int x2, int y2, int x3, int y3) {
		return (x2-x1)*(y3-y2)-(x3-x2)*(y2-y1);
	}
	
int GagatiDirqiStugum (int x1, int y1, int x2, int y2, int x3, int y3, int AzatKet, int n, int* ket) {
	int S=fabs(vektorakan (x1, y1, x2, y2, x3, y3));
	int j=AzatKet;
	while (j<n) {
		if (S-fabs(vektorakan (x1, y1, x2, y2, ket[2 * 3 + j], ket[3*3+j]))-fabs(vektorakan (ket[2 * 3 + j], ket[3*3+j], x2, y2, x3, y3))-fabs(vektorakan (x1, y1, ket[2 * 3 + j], ket[3*3+j], x3, y3 ))==0) {
			return true;
			break;	// gagat@ patkanum e verji gcvox erankyan@
	} else {
		++j;
	}
}
return false; // voch mi ayl gagat chi patkanum verji gcvox erankyan@
}

int main()
{
	int n;
	std::cout << "n= ";
	std::cin >> n;
	int ket[3][n];
	std::cout << "Mutqagrenq keteri koordinatner@" << std::endl;
	for (int j = 0; j < n; ++ j)
	{
		std::cout <<"x" << j << "= ";
		std::cin >> ket[2][j];
		std::cout << "y" << j << "= ";
		std::cin >> ket[3][j];
		ket[1][j] = j;
	}
	// entadren araji 3 keter@ bazmankyan "urucik" masic en
	bool stugum = (vektorakan(ket[2][1], ket[3][1], ket[2][2], ket[3][2], ket[2][3], ket[3][3])>0);
	
	int j=0;
	int m=j+2;
	int qanak = n;
	while (qanak>3)
	{
		do
		{
			int AzatKet=m+1;
			if (((vektorakan(ket[2][j], ket[3][j], ket[2][m-1], ket[3][m-1], ket[2][m], ket[3][m])>0) == stugum) && (GagatiDirqiStugum(ket[2][j], ket[3][j], ket[2][m-1], ket[3][m-1], ket[2][m], ket[3][m], AzatKet, n, *ket)==false))
			{
				std::cout<< ket[1][j] << " --> " << ket[1][m] << std::endl;
				ket[1][j+1] = ket[2][j+1] = ket[3][j+1] = 0;
				++m;
			}
			else
			{
				j=m-1;
				if (ket[1][j] ==0)
				{
					++j;
				}
				m = j+2;
			}
		}
		while (m < n);
		for (int j=0; j < n; ++j)
		{
			if ((ket[1][j] ==0) && (ket[1][j+1] !=0))
			{
				--qanak;
				for (int m=j; m < n; ++m)
				{
					ket[1][m] = ket[1][m+1];
					ket[2][m] = ket[2][m+1];
					ket[3][m] = ket[3][m+1];
				}
			}
			else {
				--qanak;
				for (int m=j; m < n; ++m)
				{
					ket[1][m+1] = ket[1][m+2];
					ket[2][m+1] = ket[2][m+2];
					ket[3][m+1] = ket[3][m+2];
				}
			}
		}
	}
return 0;
}










