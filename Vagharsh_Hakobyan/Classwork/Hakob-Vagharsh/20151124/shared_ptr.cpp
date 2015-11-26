//shared_ptr function
#include <iostream>

struct shared_ptr
{
  int* ptr;
  int* counter;

 shared_ptr()
 :ptr(NULL), counter(new int(1))
  {
    std::cout << "Pointer = " << ptr << std::endl;
    std::cout << "Counter pointer = " << counter << std::endl;
    *counter = 1;
    std::cout << "Counter = " << *counter << std::endl;
  };
  shared_ptr& operator = (shared_ptr & a)
  {
    ptr=a.ptr;
    counter=a.counter;
    *counter=*counter+1;
    std::cout << "Gived Pointer " << ptr <<" after '=' operation" << std::endl;
    std::cout << "Gived Counter pointer " << counter <<" after '=' operation" << std::endl;
    std::cout << "Set new value of Counter = " << *counter <<" after '=' operation" << std::endl;
  }
  shared_ptr(shared_ptr& a)
  {
    ptr=a.ptr;
    std::cout << "Created and gived " <<ptr <<" pointer to the next object " << std::endl;
    std::cout << a.ptr << std::endl;
    counter=a.counter;
    *counter=*counter+1;
    std::cout << "New value of counter = " << *counter << std::endl;
  };
  ~shared_ptr()
  {
    std::cout << ptr << std::endl;
    std::cout << counter << std::endl;
    *counter=*counter-1;
    std::cout << "New value of counter after delete = " <<*counter << std::endl;
    if (*counter==0)
    {
    delete ptr;
    delete counter;
    std::cout << "Deleted " << std::endl;
    }
  };
};

int main()
{
  shared_ptr a;
  shared_ptr b;
  a.ptr = new int;
  std::cout << "Pointer before =" << a.ptr << std::endl;
  std::cout << "Counter pointer before =" << a.counter << std::endl;
  std::cout << "Counter before =" << *a.counter << std::endl;
  shared_ptr d(a);
  std::cout << "Pointer after =" << a.ptr << std::endl;
  std::cout << "Counter pointer after =" << a.counter << std::endl;
  std::cout << "Counter after =" << *a.counter << std::endl;
  shared_ptr e(d);
  shared_ptr f(e);
  shared_ptr c;
  c = f;
  std::cout << "Counter =" << *a.counter << std::endl;
  return 0;
}
