#include <iostream>
int main()
// hashvel tvi erkuakan nerkayacman mej 1-eri qanak@
{
	int n;
	std::cout << "n= ";
	std::cin >>n;
	int qanak=0;
	int i=0;
	while (i<sizeof(int)*8)
	{
		int b=(1<<i);
		if ((n&b)!=0)
		{
		     ++qanak;
		}
	++i;
	}
	std::cout << qanak << std::endl;
	return 0;
} 

