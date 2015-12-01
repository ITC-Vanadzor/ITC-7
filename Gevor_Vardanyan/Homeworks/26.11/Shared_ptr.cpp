#include <iostream>

struct my_type{
    my_type(){
        std::cout<<"Created my_type variable."<<std::endl;
    }
    ~my_type(){
        std::cout<<"Deleted my_type variable."<<std::endl;
    }
};

struct Sptr{
    int *counter;
    my_type *ptr;
    //constructor
    Sptr():counter(NULL),ptr(NULL){}
    //not default constructor
    Sptr(my_type *p){
        ptr=p;
        counter=new int(0);
    }
    //copy constructor
    Sptr(const Sptr &p){
        ptr=p.ptr;
        counter=p.counter;
        ++(*counter);
    }
    //operator =
    Sptr operator=(const Sptr  &p ){
          if(this==&p) return *this;

          if(counter!=NULL){
            --(*counter);
            if(*counter==0){
                    clean_up;
            }
          }
          return p;
    }
    //destructor
    ~Sptr(){
        clean_up();
    }
    void clean_up(){
        if(counter==NULL) return;
        if(*counter==0){
            delete counter;
            delete ptr;
        }
        else {
            --(*counter);
        }
    }
};

Sptr func(Sptr x){//test function

    Sptr q(new my_type);

    return q;

}

int main(){
    //testing
    my_type *t=new my_type;
    {
    Sptr x(t);

    Sptr y=func(x);

    Sptr z(y);
    }
    Sptr g=new my_type;

    return 0;
}
