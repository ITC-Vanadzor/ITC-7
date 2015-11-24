//struct testing
#include <iostream>


struct First{//is 16 bytes
    int a;
    char c;
    int  b;
    bool f;
};
struct Second{//is 3 bytes
    char c;
    char c1;
    bool f;
};
struct Third{ //is 20 bytes
    First a;
    Second b;
    bool f;
};

int main(){

    std::cout<<"First struct size is  "<<sizeof(First)<<" bytes."<<std::endl;

    std::cout<<"Second struct size is  "<<sizeof(Second)<<" bytes."<<std::endl;

    std::cout<<"Third struct size is  "<<sizeof(Third)<<" bytes."<<std::endl;


    return 0;
}
