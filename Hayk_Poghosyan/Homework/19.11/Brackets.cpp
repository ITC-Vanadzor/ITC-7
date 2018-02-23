// pakagcer 
#include <iostream>
#include<string>
#include<cstdlib>
int main()
{
	std::string x;
	std::cin >> x;
	int aj_dz = 0;
	int dz_dz = 0;
	int aj_ux = 0;
	int dz_ux = 0;
	int chakert1 = 0;
	int chakert2 = 0;
	for (int i = 0;i<x.length(); ++i)
	{
		if (x[i] == '"')
		{
			if (!(dz_dz >= aj_dz && dz_ux >= aj_ux))
			{
				std::cout << "false";
				exit(1);
			}
		}
		if (x[i] == '\'')
		{
			if (!(dz_dz >= aj_dz && dz_ux >= aj_ux))
			{
				std::cout << "false";
				exit(1);
			}
		}
		////////dzevavor////////
		if (x[i] == '{' )
		{
			++dz_dz;
		}
		if (x[i] == '}')
		{
			if (dz_dz == 0 || dz_ux!=0)
			{
				std::cout << "false";
				exit(1);
			}
			++aj_dz;
			if (aj_dz == dz_dz && dz_ux == 0)
			{
				dz_dz = 0;
				aj_dz = 0;
			}
		}
		////////uxix///////////
		if (x[i] == '[')
		{
			++dz_ux;
		}
		if (x[i] == ']')
		{
			if (dz_ux == 0 || dz_dz != 0)
			{
				std::cout << "false";
				exit(1);
			}
			++aj_ux;
			if (aj_ux == dz_ux && dz_dz==0)
			{
				dz_ux = 0;
				aj_ux = 0;
			}
		}
	}
	if (dz_dz == 0 && aj_dz == 0)
		std::cout << "true"; else
		std::cout << "false";

	
	return 0;
}