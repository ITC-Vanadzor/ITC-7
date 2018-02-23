//operator +  testing
//A+B+C+D  Left to right
#include<iostream>

struct Plus{
    int value;
    char *name;
    Plus(char p[]):value(1),name(p){}//constructor

    Plus operator+(const Plus &a){
        std::cout<<"Process... "<<name<<" + "<<a.name<<std::endl;
        Plus tmp("TMP");
        tmp.value=value+a.value;
        return tmp;
    }

    Plus operator=(const Plus &a){

        value=a.value;
        return *this;
    }
    void show(){
        std::cout<<name<<".value:"<<value<<std::endl;
    }
};
int main(){

    Plus a("A"),b("B"),c("C"),d("D");
    std::cout<<"Command a=b+c"<<std::endl;
    a=b+c;
    a.show();
    std::cout<<"Command a=b+c+d"<<std::endl;
    a=b+c+d;
    a.show();
    return 0;
}
