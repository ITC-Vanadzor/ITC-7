#include <iostream>
#include <cstdio>

#ifdef calculate
	#define C \
	{ \
		static int x = 0; \
		x++; \
		std::cout << __FUNCTION__<<" funkcian " << x << " angam"<< std::endl; \
	} \
#endif
int Gumar(int a,int b)
{
	calculate;
	return a+b;
}

int main()
{
	calculate;
	int a;
	int b;
	Gumar(a,b);
	return 0;
}
