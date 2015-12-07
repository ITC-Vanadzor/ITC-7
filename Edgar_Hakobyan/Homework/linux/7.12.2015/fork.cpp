#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
  pid_t pid;
  switch(pid = fork()) 
  {
  case -1:	
	std::cout << "ERROR" << std::endl;
	break;
  case 0:
	std::cout << "child: Parent ID = " << getppid() << std::endl;		
	std::cout << "child: ID = " << getpid() << std::endl;
  default:
	sleep(5);
	std::cout << "parent: ID = " << getpid() << std::endl;
	std::cout << "parent: child ID = " << pid << std::endl;
	kill(pid,-9);
  }
return 0;
}
