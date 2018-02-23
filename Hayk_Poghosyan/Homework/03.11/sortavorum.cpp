#include <iostream>

void sortirovka(int b[5])
{
	
	for (int i = 0; i < 5 ; ++i)
	{
		for (int j = 1; j < 5-i; ++j)
		{
			if (b[j] > b[j - 1])
			{
				std::swap(b[j], b[j - 1]);
			}
			
		}
	}

}

void sortirovka(int *b[5])
{

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 1; j < 5 - i; ++j)
		{
			if (b[j] > b[j - 1])
			{
				std::swap(b[j], b[j - 1]);
			}

		}
	}

}


int main()
{
	int b[5];
	int *p[5];
	for (int i = 0; i < 5; ++i)
	{
		std::cin >> b[i];
		p[i] = &b[i];
	}

	sortirovka(b);
	sortirovka(p);

	for (int i = 0; i < 5; ++i)
	{
		std::cout << b[i] << "	  " << p[i] << std::endl;
	}

	
	return 0;
}
