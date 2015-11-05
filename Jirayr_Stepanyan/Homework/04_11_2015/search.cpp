#include <iostream>
bool mec(void *a)
{
	*a = reinterpret_cast<int*>(a)
	if(*a > 7)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool havasar(void *b)
{
	*b = reinterpret_cast<double*>(b)
	if(*b == 5.5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int search(void *skizb, void *verj, int elementi_chap, bool(*compare)(void *, void *))
{
	
}
int main()
{
	int n = 5;
	int da[n];
	for(int i = 0; i < n; ++i)
	{
		std::cout << "tpel masivi " << i + 1 << " andam@ (kotorakain tver);
		std::cin >> da[i];
	}
	int ia[n];
	for(int j = 0; j < n; ++j)
	{
		std::cout << "tpel masivi " << j + 1 << " andam@ (kotorakain tver);
		std::cin >> ia[j];
	}
	bool(*mec)(void*);
	bool(*havasar)(void*);
	std::cout << "havasar 5.5 " << search (da[0], da[n - 1], sizeof(double), havasar) << endl;
	std::cout << "mec 7 " << search (ia[0], ia[n - 1], sizeof(int), mec) << endl;
	

   return 0;
}
