#include<iostream>
#include<cstdlib>
#include<ctime>
#define n 5

bool havasar(void* a,int element_size)
{
	
	int*  aa = reinterpret_cast<int*>(a);
	
	if (*aa == 5)return true;
	else return false;
}

bool mec(void* a, int element_size)
{
	int*  aa = reinterpret_cast<int*>(a);
	if (*aa > 7)return true;
	else return false;

}

int search(void *b, void *c, int element_size,  bool(*Compare)(void *,int))
{
	int*  bb = reinterpret_cast<int*>(b);
	int*  cc = reinterpret_cast<int*>(c);

	int j = 0;
	while(bb<cc)
	{
		
		
		if (Compare(bb, element_size))
		{
			return j;
			std::cout << j;
		}
		++bb;
		++j;
	}
	return 777;
}



int main()
{
	double darr[n];
	int iarr[n];
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		darr[i] = rand() % 100;
		iarr[i] = rand() % 10;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << darr[i]<<"	";
		std::cout << iarr[i] << "\n";
	}

	bool(*functionPtrm)(void*, int);
	functionPtrm = mec;
	bool(*functionPtrh)(void*, int);
	functionPtrh = havasar;

	std::cout<<"hingi havasar elementi indexs@ "<<search(&iarr[0], &iarr[n - 1], sizeof(iarr[0]), functionPtrh);
	std::cout << "\n7-ic mec el indexs@ "<<search(&iarr[0], &iarr[n - 1], sizeof(iarr[0]), functionPtrm);

	system("Pause");
	return 0;
}