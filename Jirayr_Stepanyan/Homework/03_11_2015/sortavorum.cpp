#include <iostream>
void sortavorum(int *b[], int a)
{
	
	for(int i = 0; i < a; ++i)
	{
		for(int j = 1; j < a; ++j)
		{
			if(b[j] > b[j- 1])
			{
				std::swap(b[j], b[j - 1]);
			}
			if(*b[j] > *b[j - 1])
			{
				std::swap(*b[j], *b[j - 1]);
			}
		} 
	}
	for(int i = 0; i < a; ++i)
	{
		std::cout << b[i] << "	     " << *b[i] << std::endl;
	}
}
int main()
{
	int x = 0;
	while(x <= 0)
	{
		std::cout << "qani tiv eq mutq anelu???(1-ic bardzr) ";
		std::cin >> x;
	}
	int y[x];
	int *p[x];
	for(int i = 0; i < x; ++i)
	{
		std::cin >> y[i];
		p[i]=&y[i];
	}
	sortavorum(p, x);

  return 0;
}
