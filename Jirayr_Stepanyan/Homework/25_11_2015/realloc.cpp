#include <iostream>
#include <cstdlib>
void* realloc2(void* hin_zangvac, int hin_chap, int nor_chap)
{
	int* nor_zangvac;
	if(nor_chap > hin_chap * sizeof(int))
	{
		nor_zangvac = (int*)malloc (nor_chap);
		for(int i = 0; i < 4; ++i)
		{
			*((int*)nor_zangvac + i) = *((int*)hin_zangvac + i);
		}
	
	free(hin_zangvac);
        }
	return nor_zangvac;
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
	do
	{
		std::cout << "tpel erkrord zangvaci chap@ (arajinic mec) ";
		std::cin >> nor_chap_x;
	}while(nor_chap_x <= chap_x);
	x = (int*)realloc2(x, chap_x, nor_chap_x * sizeof(int));
	for (int i = 0; i < nor_chap_x; ++i)
	{
		x[i] = i + 1;
	}
	for(int i = 0; i < nor_chap_x; ++i)
        {
	std::cout << "new x[" << i << "]= " <<  x[i] << std::endl;
        }
	free(x);

   return 0;
}
