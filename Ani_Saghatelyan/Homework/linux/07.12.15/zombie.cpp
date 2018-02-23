#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <iostream>
 
int main ()
{
  pid_t pid= fork();
 
 
  switch (pid)  
  {
	case -1 :  {
			std::cout<<"ERROR";
			break;
		   }
	case 0 :   {
		        
			std::cout<<"Child Process ID : "<<getpid()<<"  PPID :"<<getppid()<<std::endl;
                    }
	default :  {
                        sleep(15);
			std::cout<<" Process ID :"<<getpid()<<"  PPID :"<<getppid()<<std::endl; 
			std::cout<<getpid() <<" process killed\n";
                        kill(getpid(), 0);
                        std::cout<<" Process ID :"<<getpid()<<"  PPID :"<<getppid()<<std::endl;
                        
		   }

   }
 
  
  return 0;
}
