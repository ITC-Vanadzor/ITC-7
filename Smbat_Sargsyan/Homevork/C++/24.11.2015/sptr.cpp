#include <iostream>
using std::cout;
using std::cin;
using std::endl;

struct type1 {
type1() { cout << "New " << endl; }
~type1() { cout << "Delete " << endl; }
};

struct Sptr {
type1 *p;
int *counter;
Sptr();
Sptr(Sptr& ptr):counter(ptr.counter),p(ptr.p) 
{ 
  std::cout << "copy constructor " << std::endl;
  if(counter != 0)
  {
  ++(*counter);
  std::cout << "counter= " << counter << std::endl;
  }
}
~Sptr() 
{
  if(0==--(*counter)) {
     delete counter;
     delete p;
  }

}
Sptr(type1 *p1);
Sptr operator=(const Sptr &p2) {
  if(this==&p2) return *this;

          if(this->counter!=NULL){
            --(*this->counter);
            if(*this->counter==0){
                            
                    this->~Sptr();
                    delete p;
                    delete counter;
            }
          }
          
    }

};
Sptr::Sptr(): counter(0),p(NULL) {std::cout << "default constructor" << std::endl;}

Sptr::Sptr(type1 *p1):counter(0),p(p1) {
 std::cout << "constructor " << std::endl;
 if(p != 0)
 {
 counter=new int(1); 
 std::cout << "counter=" << counter << std::endl;
 }
}
Sptr test(Sptr x) {
 Sptr a(new type1);
 return a;
}

int main()
{
  type1 *q=new type1;
  {
    Sptr x(q);
    //Sptr y=test(x);
    Sptr z(x);
  }
  type1* g=new type1;
  return 0;
}
