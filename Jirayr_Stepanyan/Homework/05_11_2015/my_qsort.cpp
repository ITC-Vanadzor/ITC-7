#include <iostream>
 
void qsort(int a[], int skizb, int verj)
{
  int i = skizb, j = verj;
  int x;
  int kentron = a[(i + verj) / 2];
  while (i <= j)
    {
      while (a[i] < kentron)
	{
	  ++i;
	}
      while (a[j] > kentron)
	{
	  --j;
	}
      if (i <= j)
	{
	  std::swap(a[i], a[j]);
	  ++i;
	  ++j;
	}
    }
  if (skizb < j)
    {
      qsort(a, skizb, j);
    }
  if (i < verj)
    {
      qsort(a, i, verj);
    }
}

void Print(int a[], int n)
{
  for (int i = 0; i <n; i++)
    {
      std::cout << a[i] << "; ";
    }
  std::cout << std::endl;
}

int main ()
{
 	int andamneri_qanak = 0;
	while(andamneri_qanak == 0)
	{
		std::cout << "tpel masivi   andamneri qanak@ ";
		std::cin >> andamneri_qanak;
	}
	int massiv[andamneri_qanak];
	double k = 3.2;
	for(int i = 0; i < andamneri_qanak; ++i)
	{
		std::cout << "tpel masivi " << i + 1 << " andam@ (kotorakain tver)";
		std::cin >> massiv[i];
	}
 	for(int i = 0; i < andamneri_qanak; ++i)
	{
		std::cout << massiv[i] << "  ";
	}
  	
  	qsort(massiv, 0, andamneri_qanak-1);
	std::cout << std::endl;
 	for(int i = 0; i < andamneri_qanak; ++i)
	{
		std::cout << massiv[i] << "  ";
	}
	
 
}
