#include<iostream>
#include<cstdlib>
#include <ctime>
#define n 8
int mas[n];

void quickSort(int l, int r)
{
	int x = mas[(l + r ) / 2];
	
	int i = l;
	int j = r;
	while (i <= j)
	{
		while (mas[i] < x) i++;
		while (mas[j] > x) j--;
		if (i <= j)
		{
			std::swap(mas[i], mas[j]);
			i++;
			j--;
		}
	}
	if (i<r)
		quickSort(i, r);

	if (l<j)
		quickSort(l, j);
}

int main()
{
	
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		mas[i] = (rand() % 100);
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << mas[i] << " ";
	}
	quickSort(0, n - 1);
	std::cout << "\n";
	for (int i = 0; i < n; ++i)
	{
		std::cout << mas[i] << " ";
	}

	
	return 0;
}