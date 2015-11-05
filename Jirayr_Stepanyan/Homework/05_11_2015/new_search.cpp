#include <iostream>
int search(int* skizb, int* mijin, int* verj, size_t elementi_chap, void* element, int(*stugum)(void*, void*))
{
	if(stugum(mijin, element) == 0)
	{
		return mijin;
	}
	if(stugum(mijin, element) == 1)
	{
		search(skizb, mijin / 2, mijin, elementi_chap, element, stugum);
	}
	if(stugum(mijin, element) == 2)
	{
		search(mijin,(mijin + mijin / 2),verj, elementi_chap, element, stugum);
	}
}
int stugum(void* a, void* b)
{
	if (*(int*)a == *(int*)b)
	{
		return 0;
	}
	if (*(int*)a > *(int*)b)
	{
		return 1;
	}
	if (*(int*)a < *(int*)b)
	{
		return 2;
	}
	
}


int main()
{
	int massiv[8] = {1,3,5,9,13,20,25,56};
	int element = 20;
	int mijin = (massiv + 8) / 2;
	int result = search(massiv, mijin, massiv + 8, sizeof(int), &element, stugum);
	std::cout << result << std::endl;

   return 0;
}
