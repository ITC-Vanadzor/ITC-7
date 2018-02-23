//Parent and child processes

#include <iostream>
#include <unistd.h>

int main(){

    std::cout<<"Start main function..."<<std::endl;
    pid_t new_id=fork();

    if(new_id==0){
        //child process
        std::cout<<"Hello I'm child of main process , my ID is  "<<(int)getpid()<<std::endl;
        std::cout<<"And now I'm ZOMBIE! ;)"<<std::endl;
        sleep(8);
        std::cout<<"Child process dead."<<std::endl;
    }
    else if(new_id>0){
        //parent process
        std::cout<<"Hello I'm parent process , my ID is  "<<(int)getpid()<<std::endl;
        std::cout<<"Parent process dead."<<std::endl;
    }
    else{
        //sorry
        std::cout<<"I'm sorry, I have no children."<<std::endl;

    }
    return 0;

}
