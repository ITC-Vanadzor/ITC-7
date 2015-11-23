#include <iostream>

#ifdef Debug
	#define E std::cout << "Entering" << __FUNCTION__ << __LINE__ << std::endl; 
	#define L std::cout << "Leaving" << __FUNCTION__ << __LINE__ << std::endl; 
	#define X
#elif Release
	#define E
	#define L 
	#define X
#else 
	#define E
	#define L 
	#define X std::cout << "ERROR" << std::endl;
#endif

int Gumar(int a,int b)
{
	E;
	L;
	X;
	if(a>b)
	return a+b;
}

int main()
{	int a;
	int b;
	E;
	L;
	Gumar(a,b);
	X;
	return 0;
}
