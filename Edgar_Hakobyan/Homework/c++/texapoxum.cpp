#include <iostream>
void hasce(int* x[])
{
	int m=5;
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 1; j < m; ++j)
		{
			if(x[j]>x[j-1])
			{
				std::swap(x[j],x[j-1]);
			}
		} 
		--m;
	}
}
void arjeq(int x[])
{
	int m=5;
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 1; j < m; ++j)
		{
			if(x[j]>x[j-1])
			{
				std::swap(x[j],x[j-1]);
			}
		} 
		--m;
	}
}
int main()
{
	int x[5];
	int* xx[5];
	for(int i = 0; i < 5; ++i)
	{
		std::cin >> x[i];
		xx[i]=&x[i];
	}
	for(int i = 0; i < 5; ++i)
	{
		std::cout<<x[i]<<"	"<<&x[i]<<std::endl;
	}
	std::cout<<'\n';
	hasce(xx);
	arjeq(x);
	for(int i = 0; i < 5; ++i)
	{
		std::cout << x[i] <<'\t'<<xx[i]<<std::endl;
	}

  return 0;
}
