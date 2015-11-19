#include <iostream>
#include <cstring>
int main()
{ 
	int x,y;
	int bac_pak1 = 0;
	int pak_pak1 = 0;
	int bac_pak2 = 0;
	int pak_pak2 = 0;
	int bac_pak3 = 0;
	int pak_pak3 = 0;
	char tox[]= "[ju]tt{itu(uik)kmk";
    std::cout<<tox<<std::endl;
	int n = strlen(tox);
	for(int i = 0; i < n; ++i)
	{
		if(tox[i] == '[')
		{
			x = i;
			++bac_pak1;
			for(int i = x+1; i < n; ++i)
			{
				if(tox[i] == ']')
				{
					y = i;
					++pak_pak1;
					break;
				}
			}
			for(int i = x+1; i < y; ++i)
			{
				if(tox[i] == '{' || tox[i] == '}' || tox[i] == '(' || tox[i] == ')' )
				{
					std::cout << "sxal pakagcer" << std::endl;
					return 0;
				}
			}
		}
		else if(tox[i] == '{')
		{
			x = i;
			++bac_pak2;
			for(int i = x+1; i < n; ++i)
			{
				if(tox[i] == '}')
				{
					y = i;
					++pak_pak2;
					break;
				}
			}
			for(int i = x+1; i < y; ++i)
			{
				if(tox[i] == '[' || tox[i] == ']' || tox[i] == '(' || tox[i] == ')' )
				{
					std::cout << "sxal pakagcer" << std::endl;
					return 0;
				}
			}
		}
		else if(tox[i] == '(')
		{
			x = i;
			++bac_pak3;
			for(int i = x+1; i < n; ++i)
			{
				if(tox[i] == ')')
				{
					y = i;
					++pak_pak3;
					break;
				}
			}
			for(int i = x+1; i < y; ++i)
			{
				if(tox[i] == '{' || tox[i] == '}' || tox[i] == '[' || tox[i] == ']')
				{
					std::cout << "sxal pakagcer" << std::endl;
					return 0;
				}
			}
		}
	}

		if(bac_pak1 == pak_pak1 && bac_pak2 == pak_pak2 && bac_pak3 == pak_pak3)
		{
			std::cout << "chist pakagcer " <<std::endl;
		}
		else
		{
			std::cout << "sxal pakagcer" << std::endl;
		}


	return 0;
}
