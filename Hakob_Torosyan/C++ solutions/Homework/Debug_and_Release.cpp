#include <iostream>

#ifdef DEBUG
#define D(x) std::cout << x << __PRETTY_FUNCTION__  << " line is "<<__LINE__ << std::endl
#else
#define D(x) 
#endif

int main(int argc, char *argv[])
{
	if(argv[1][0] == 'E') {
		D("Entering ");
	}
	else {
		if(argv[1][0] == 'L')
		D("Leaving ");
	}

	return  0;
}
