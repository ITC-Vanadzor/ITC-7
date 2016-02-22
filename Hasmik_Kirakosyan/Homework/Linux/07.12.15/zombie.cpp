#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <iostream>
 
int main ()
{
  std::cout<<"\nNew process created "<<std::endl;
  pid_t pid= fork();
  pid_t child;
  switch (pid) {
	case -1 : {
			std::cout<<"\nERROR";
			break;
		}
	case 0 : {
			child = getpid();
			//std::cout<<"\nChild process ID(case 0) : "<<child;
			//std::cout<<" Parent process ID for child : "<<getppid();
		}
	default : {
			sleep(15);
			std::cout<<"\nParent process ID :"<<getpid()<<" Child process ID :  "<<pid;
			std::cout<<"\n\nParent process killed ";
			kill(getpid(), 0);
		}

}
 
  
  return 0;
}
