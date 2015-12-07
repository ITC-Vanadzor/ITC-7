#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <cstdlib>
#include <cstring>

const char* get_process_name_by_pid(const int pid)
{
    char* name = (char*)calloc(1024,sizeof(char));
    if(name){
        sprintf(name, "/proc/%d/comm",pid);
        FILE* f = fopen(name,"r");
        if(f){
            size_t size;
            size = fread(name, sizeof(char), 1024, f);
            if(size>0){
                if('\n'==name[size-1])
                    name[size-1]='\0';
            }
            fclose(f);
        }
    }
    return name;
}

int main (void)
{
	int pid;
	std::string pname;
        std::cout<<"Process name :";
        std::cin>>pname;
	pid=1;

	while(pid<32768) {  // max_pid = 32768 
		if(pname == get_process_name_by_pid(pid)) {
			std::cout<<"Process id : "<<pid<<std::endl;
			break;
		}
		pid++;
	}
	if (pid>=32768) {
		std::cout<<"No process with this name "<<std::endl;
	}
        return 0;
}
   
