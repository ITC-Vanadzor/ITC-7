#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <signal.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
    std::cout << "Starting Process"<<std::endl;
    int pid = fork();
    switch (pid) {
	case -1:
	    perror ("fork");
	    exit (1); 
	case 0:
	    std::cout << "Child process is running! PID =" << getpid()<<std::endl;
	    sleep(300);
	    std::cout << "Child process is exiting!"<<std::endl;
	    exit(2);
	default:
	    std::cout << "Parent process is continuing child's pid is " << pid <<std::endl;
	    sleep(5); 
	    std::cout << "Parent process is sending SIGKILL to child process...\n"<<std::endl;
	    if (kill(pid, SIGKILL) != 0) 
	    {
		perror("kill");
		// waitpid(pid, NULL, 0);  // uncomment this to avoid zombie child process
	    }
	    std::cout << "Parent process is sleeping... ps aux should show process" << pid << " is a zombie now" << std::endl;
	    sleep(500);  // just for clarity
	    std::cout <<"Parent process is exiting!"<<std::endl;
	    exit(2);
    }

}
