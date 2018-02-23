#include <unistd.h>
#include <signal.h>
#include <iostream>
int main()
{
	int a = fork();
	switch(a)
	{
		case -1:
			std::cout << "copy failed " << std::endl;
			break;
		case 0:
			std::cout << "the child's proc id is " << a << "\n\n";
			std::cout << "the child proc is zombie now " << "\n\n";
			sleep(30);
			std::cout << "the child proc is dead " << "\n\n";	
			break;
		default:
			
			std::cout << "the parent's proc id is " << getpid() << " the child's proc id is " << a << "\n\n";
			kill(getpid(), -9);
			std::cout << "parent proc is dead \n the NEW parent's proc id is " << a << "\n\n";
			//std::cout << "the NEW parent's id is " << a << "\n\n";
			
	}	

   return 0;
}
