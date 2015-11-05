#include <iostream>
bool havasar_int(void* a, void* b)
{
	return (reinterpret_cast<int*>(a)) == (reinterpret_cast<int*>(b));
}
bool mec_double(void* a, void* b)
{
	return (reinterpret_cast<double*>(a)) > (reinterpret_cast<double*>(b));
}
int search(void* skizb, void* verj, size_t elementi_chap, void* element, bool(*hamematum)(void*, void*))
{
	for(int i = 0; skizb <= verj; skizb += elementi_chap, ++i)
	{
		if(hamematum(skizb, element))
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int andamneri_qanak = 0;
	while(andamneri_qanak == 0)
	{
		std::cout << "tpel masivi   andamneri qanak@ ";
		std::cin >> andamneri_qanak;
	}
	int double_mec[andamneri_qanak];
	double k = 3.2;
	for(int i = 0; i < andamneri_qanak; ++i)
	{
		std::cout << "tpel masivi " << i + 1 << " andam@ (kotorakain tver)";
		std::cin >> double_mec[i];
	}
	int int_havasar[andamneri_qanak];
	int x = 5;
	for(int j = 0; j < andamneri_qanak; ++j)
	{
		std::cout << "tpel masivi " << j + 1 << " andam@ (kotorakain tver)";
		std::cin >> int_havasar[j];
	}
	int result_mec = search(double_mec, double_mec + andamneri_qanak, sizeof(double), &k, double_mec);
	std::cout <<"elementi indeqs@ > 3.2 " << result_mec;
   	int result_havasar = search(int_havasar, int_havasar + andamneri_qanak, sizeof(int), &x, havasar_int);
	std::cout <<"elementi indeqs@ = 5 " << result_havasar;
   return 0;
}
