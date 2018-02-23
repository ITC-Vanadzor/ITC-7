#include <iostream>
// n-ic m hamari senyaknerum tvanshanneri qanaki voroshum n-ic m bolor tver@ @st tvanshanneri verlucelov -- tarberak 1

int main()
{
	int n;
	std::cout << "n= ";
	std::cin >> n;
	int m;
	std::cout << "m= ";
	std::cin >> m;
	int tvanshan[9];
	for (int i=0; i<=9; ++i)
	{
		tvanshan[i]=0;
	}
	do
	{
		int ncopy;
		ncopy=n;
		do
		{
			++tvanshan[ncopy%10];
			ncopy/=10;
		}
		while (ncopy>0);
		++n;
	}
	while (n<=m);
	for (int i=0; i<=9; ++i)
	{
		std::cout << tvanshan[i] << '\t';
	}

	return 0;
}
