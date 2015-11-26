#include <iostream>

struct obj
{
  int a;
  obj(int b):a(b)
  {
	  std::cout <<this<< " konstructor" << std::endl;
  };
  obj& operator+(const obj& tmp)
  {
	  std::cout << this << '\t' << &tmp << std::endl;
	  this -> a += tmp.a;
	  return *this;
  };
  ~obj()
  {
	  std::cout <<this<< " destructor" << std::endl;
  };
};


int main() {
obj a(3);
obj b(5);
obj c(6);
a+b+c;


return 0;
}