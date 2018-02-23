//creating 5 processes every 3 seconds. 
// proces duration 60 seconds

#include <unistd.h>
#include <iostream>

int main(){

        std::cout<<"Hello I'm main process, my PID:"<<getpid()<<std::endl;

        int x=0;

        while(x<5){

            pid_t a=fork();
            ++x;

            if(a){
                    std::cout<<"Created process N: "<<x<<"   PID:"<<a<<std::endl;
            }
            else{
                    sleep(60);
                    std::cout<<"My PID is "<<getpid()<<".   I am DEAD!"<<std::endl;
                    break;
            }
            sleep(3);
        }



    return 0;
}
