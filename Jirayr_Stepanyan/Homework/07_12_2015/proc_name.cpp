#include <cstdlib>
#include <iostream>
int main()
{
	char proc_name [100];	
	std::cin >> proc_name;
	system("ps -ef | grep proc_name");	

   return 0;
}
