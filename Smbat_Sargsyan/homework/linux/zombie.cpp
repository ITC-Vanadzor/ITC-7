#include <iostream>
#include <stdio.h>
#include <signal.h>
#include <pthread.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
	std::cout << "Starting program " << std::endl;
	int pid = fork();
	switch(pid) {
		case -1: { std::cout <<"fork()" << std::endl; }
		case 0: {  std::cout << "Child process is running" << "PID= " << getpid() << std::endl; 
				sleep(300);
				std::cout << "Child process is exiting" << "PID= " << getpid() << std::endl;
				return 0;
			}
		default:  {
				  std::cout<< "Parent process is contiuning,child's pid is " << pid << std::endl;
				  sleep(5);
				  std::cout <<"Parent process is sending SIGKILL to child process..." << std::endl;
				  if (kill(pid, 1) != 0) std::cout <<"kill" << std::endl;
				  std::cout <<"Parent process is sleeping... ps aux should show process  is a zombie now" << pid << std::endl;
				  sleep(500);
				  std::cout << "Parent process is exiting" << std::endl;
			  }
	}
}
