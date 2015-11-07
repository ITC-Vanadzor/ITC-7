//search 20 visual studio-um Hamo jan qo u Hasmiki grac cragir@ compil chi ancnum void* patcharov


#include<iostream>


int search(/*void*/int* first, int n, size_t sizeoft, void* elem, int(*compare)(void*, void*))
{
	/*void*/int* mijin = first + sizeoft*n / 2;
	if (compare(mijin, elem) == 0) { return sizeoft*n / 2; }
	if (compare(mijin, elem) == 1) { search(mijin, n / 2,sizeoft, elem, compare); }
	if (compare(mijin, elem) == 2) { search(first, n / 2, sizeoft, elem, compare); }
}

int indexqsan(void* x, void* y)
{
	if (*(int*)x == *(int*)y)return 0;
	if (*(int*)x < *(int*)y)return 1;
	return 2;
}



int main()
{
	int intarr[5] = { 1,15,20,25,30 };
	int elm = 20;
	std::cout<<search(intarr, 5, sizeof(int), &elm, indexqsan);

	return 0;
}