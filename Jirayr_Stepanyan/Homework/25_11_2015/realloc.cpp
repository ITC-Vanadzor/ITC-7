#include <iostream>
#include <cstdlib>
void* realloc2(void* hin_zangvac, int hin_chap, int nor_chap)
{
	int* nor_zangvac;
	if(nor_chap > 0)
	{
		if(nor_chap > hin_chap * sizeof(int))
		{
			nor_zangvac = (int*)malloc (nor_chap);
			for(int i = 0; i < hin_chap; ++i)
			{
				*(nor_zangvac + i) = *((int*)hin_zangvac + i);
			}
        	}	
		else
		{
			nor_zangvac = (int*)malloc (nor_chap);
			for(int i = 0; i < nor_chap; ++i)
			{
				*((int*)nor_zangvac + i) = *((int*)hin_zangvac + i);
			}
		}
		
		return nor_zangvac;
	}
	else
	{
		return 0;
	}
	free(hin_zangvac);
}
int main()
{
	int chap_x = 0;
	do
	{
		std::cout << "tpel arajin zangvaci chap@ ";
		std::cin >> chap_x;
	}while(chap_x <= 0);
	int* x = (int*)malloc (chap_x * sizeof(int));
	for (int i = 0; i < chap_x; ++i)
	{
		x[i] = i + 1;
	}
	for(int i = 0; i < chap_x; ++i)
	{
	std::cout << "x["<< i << "]= "<< x[i] << std::endl;
        }
	int nor_chap_x = 0;
	std::cout << "tpel erkrord zangvaci chap@ (arajinic mec) ";
	std::cin >> nor_chap_x;
	x = (int*)realloc2(x, chap_x, nor_chap_x * sizeof(int));
	if(x > 0)
	{
		for (int i = 0; i < nor_chap_x; ++i)
		{
			x[i] = i + 1;
		}
		for(int i = 0; i < nor_chap_x; ++i)
        	{
		std::cout << "new x[" << i << "]= " <<  x[i] << std::endl;
        	}
	}
	else
	{
		std::cout << "ERROR: massivi chap@ petq e lini bnakan tiv " << std::endl;
	}
	free(x);

   return 0;
}
