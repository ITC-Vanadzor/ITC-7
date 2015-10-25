#include <iostream>
#include <cstdlib>
int vektorakan (int x1, int y1, int x2, int y2, int x3, int y3)
	{
		return (x2-x1)*(y3-y2)-(x3-x2)*(y2-y1);
	}
int main()
{
	int n;
	std::cout << "n= ";
	std::cin >> n;
	int ket[2][n];
	std::cout << "Mutqagrenq keteri koordinatner@" << std::endl;
	for (int j=1; j<=n; ++j)
	{
		std::cout <<"x" << j << "= ";
		std::cin >> ket[1][j];
		std::cout << "y" << j << "= ";
		std::cin >> ket[2][j];
	}
	bool stugum;
	if (vektorakan(ket[1][1], ket[2][1], ket[1][2], ket[2][2], ket[1][3], ket[2][3])>0)
	{
		stugum = true;
	}
	else
	{
		stugum = false;
	}
	
	int j=2;
	do
	{
		if ((vektorakan(ket[1][j], ket[2][j], ket[1][j+1], ket[2][j+1], ket[1][j+2], ket[2][j+2])>0) == stugum)
		{
		++j;
		}
		else
		{
			std::cout << "trvac bazmankyunn urucik che";
			exit(1);
		}
	}
	while (j<=(n-2));
	std::cout << "trvac bazmankyunn urucik e" << std::endl;
	return 0;
}

