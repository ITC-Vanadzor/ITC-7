//static member test

#include<iostream>

struct MyObject{

    static size_t s_counter;

    MyObject(){
        ++s_counter;
    }
    ~MyObject(){
        --s_counter;
    }

};
size_t MyObject::s_counter=0;


int main(){

    MyObject obj;
    std::cout<<"Counter is "<<MyObject::s_counter<<std::endl;//Counter is 1

    MyObject *p=new MyObject;
    std::cout<<"Counter is "<<MyObject::s_counter<<std::endl;//Counter is 2

    delete p;
    std::cout<<"Counter is "<<MyObject::s_counter<<std::endl;//Counter is 1

    return 0;

}
