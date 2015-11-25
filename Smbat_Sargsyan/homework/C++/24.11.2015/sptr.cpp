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
Sptr(): counter(0),p(NULL) {}
Sptr(const Sptr& ptr):counter(ptr.counter),p(ptr.p) 
{
  ++(*counter);
}
~Sptr() 
{
  if(0==--(*counter)) {
     delete counter;
     delete p;
  }

}
Sptr(type1 *p1) {
 p=p1;
 counter=new int(0);
}
Sptr operator=(const Sptr &p2) {
  if(this==&p2) return *this;

          if(this->counter!=NULL){
            --(*this->counter);
            if(*this->counter==0){
                    this->~Sptr();
            }
          }
          return p2;
    }

};

Sptr test(Sptr x) {
 Sptr a(new type1);
 return a;
}

int main()
{
  type1 *q=new type1;
  {
    Sptr x(q);
    Sptr y=test(x);
    Sptr z(y);
  }
  Sptr g=new type1;
  return 0;
}
