#include <iostream>
#include <unistd.h>
int main()
{
	std::cout << "hello I'm the main and I'm main process and my PID is " << getpid() << std::endl;
	int x = 1;
	while(x < 3)
	{
		size_t n = fork();
		switch(n)
		{
			case -1:
				std::cout << "create process failed " << std::endl;
				break;
			case 0:
				std::cout << "hello I'm  child process and my PID is " << n << std::endl;
				std::cout << "I'm dead " << std::endl;
				break;
			default:
				std::cout << "hello i'm " << x << " process and my PID is " << n << std::endl;
		}
		++x;
		sleep(5);
	}

   return 0;
}
