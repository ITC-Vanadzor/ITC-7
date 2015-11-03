#include <iostream>
void sortavorum(int &a)
{
	int y[a];
	int *p[a];
	for(int i = 0; i < a; ++i)
	{
		std::cin >> y[i];
		p[i]=&y[i];
	}
	for(int i = 0; i < a; ++i)
	{
		for(int j = 1; j < a; ++j)
		{
			if(y[j] > y[j- 1])
			{
				std::swap(y[j], y[j - 1]);
			}
			if(p[j] > p[j - 1])
			{
				std::swap(p[j], p[j - 1]);
			}
		} 
	}
	for(int i = 0; i < a; ++i)
	{
		std::cout << y[i] << "	     " << p[i] << std::endl;
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
	sortavorum(x);

  return 0;
}
