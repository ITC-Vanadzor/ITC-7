//Find  process PID by name and print it

#include <unistd.h>
#include <dirent.h>
#include <sys/types.h> 
#include <sys/stat.h> 

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>

#define PROC_DIRECTORY "/proc/"


int IsNumeric(const char* ccharptr_CharacterList)
{
    for ( ; *ccharptr_CharacterList; ccharptr_CharacterList++)
        if (*ccharptr_CharacterList < '0' || *ccharptr_CharacterList > '9')
            return 0; // false
    return 1; // true
}

int main()
{
    char proc_name[50];
    std::cout<<"Input process name: ";
    std::cin>>proc_name;

    struct dirent* dirEntity = NULL ;
    DIR* dir_proc = NULL ;

    dir_proc = opendir(PROC_DIRECTORY) ;
    if (dir_proc == NULL)
    {
        perror("Couldn't open the " PROC_DIRECTORY " directory") ;
        return (pid_t) -2 ;
    }

    while ((dirEntity = readdir(dir_proc)) != 0) {
        if (dirEntity->d_type == DT_DIR) {
            if (IsNumeric(dirEntity->d_name)) {
                std::string path = std::string(PROC_DIRECTORY) + dirEntity->d_name + "/status";

                std::ifstream cmdLineFile(path.c_str());
                std::string cmdLine;
                if (cmdLineFile) {

                    std::getline(cmdLineFile, cmdLine);

                }
                size_t position=cmdLine.find(proc_name);
                if(position!=std::string::npos){
                    std::cout<<cmdLine<<std::endl<<"PID:     "<<dirEntity->d_name<<std::endl;
                }
            }
        }
    }
    closedir(dir_proc) ;
    return 0;
}
