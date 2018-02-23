#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main ()
{
 pid_t pid;
 int i;
	std::cout << "My process id = " << getpid() << std::endl;
	for (i = 1; i <= 4; i++)
	{
		switch ( pid = fork() ) 
		{
			case -1:
				std::cout << "Error in fork" << std::endl;
				break;
	  		case 0:
	    			std::cout << "Child process: My process id = " << getpid() << std::endl;
	    			std::cout << "Child process: Value returned by fork() = " << pid << std::endl;
	    			return 0;
			default:
	   			std::cout << "Parent process. My process id = " << getpid() << std::endl;
	    			std::cout << "Parent process. Value returned by fork() = " << pid << std::endl;
				if (wait(NULL) == -1) 
				std::cout << "Error in wait" << std::endl;
		}

 	}  
 return 0;
 }
