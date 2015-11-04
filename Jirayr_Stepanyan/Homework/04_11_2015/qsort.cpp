#include <iostream>
void qsort(int a[], int andamneri_qanak, int kentron)
{
	a[kentron];
	if((kentron - 1) == 0)
	{
		std::swap (a[0], a[1]);
	}
	if((kentron + 1) == andamneri_qanak - 1)
	{
		std::swap(a[andamneri_qanak - 1], a[andamneri_qanak - 2]);
	}
	if((andamneri_qanak % 2) != 0)
	{
		for(int i = 1; i < andamneri_qanak; ++i)
		{
			if(a[kentron - 1] > a[kentron + 1])
			{
				std::swap (a[kentron - 1], a[kentron + 1]);
			}
		}
	andamneri_qanak = kentron - 1;
	kentron = andamneri_qanak / 2;
	}
	else
	{
		for(int i = 0, j = 1; j < andamneri_qanak; ++i, ++j)
		{
			if(a[kentron - i] > a[kentron + j])
			{
				std::swap (a[kentron - i], a[kentron + j]);
			}
		}
	andamneri_qanak = andamneri_qanak / 2;
	kentron = andamneri_qanak / 2;
	}
	if(kentron - 1 != 0)
	{
		qsort(a, andamneri_qanak, kentron); 
	}
}
int main()
{
	int andamneri_qanak = 0;
	while(andamneri_qanak <= 0)
	{
		std::cout << "tpel voreve drakan amboxj tiv ";
		std::cin >> andamneri_qanak;
	}
	int tver[andamneri_qanak];
	for(int i = 0; i < andamneri_qanak; ++i)
	{
		std::cout << "tpel masivi " << i + 1 << " andami arjeq@ ";
		std::cin >> tver[i]; 
	}
	int kentron = (andamneri_qanak / 2) + 1; // gtnum enq masivi kentron@
	int x = andamneri_qanak;
	for(int i = 0; i < x; ++i)
	{
		std::cout << tver[i] << std::endl;
	}
	qsort(tver, andamneri_qanak, kentron); 
	for(int i = 0; i < x; ++i)
	{
		std::cout << "		" << tver[i] << std::endl;
	}
	

   return 0;
}
