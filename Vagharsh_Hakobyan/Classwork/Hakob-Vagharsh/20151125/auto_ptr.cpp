//auto_ptr function
#include <iostream>

struct auto_ptr
{
  int* ptr;

 auto_ptr()
  {
    ptr=NULL;
    std::cout << ptr << std::endl;
  };
  auto_ptr& operator = (auto_ptr & a)
  {
    ptr=a.ptr;
    std::cout << "Created and gived "<<ptr <<" pointer to the next object " << std::endl;
    a.ptr = NULL;
    std::cout << a.ptr << std::endl;
    std::cout << "Gived old objects pointer NULL " << std::endl;
  }
  auto_ptr(auto_ptr& a)
  {
    ptr=a.ptr;
    std::cout << "Created and gived "<<ptr <<" pointer to the next object " << std::endl;
    a.ptr = NULL;
    std::cout << a.ptr << std::endl;
    std::cout << "Gived old objects pointer NULL " << std::endl;
  };
  ~auto_ptr()
  {
    std::cout << ptr << std::endl;
    //ptr==NULL;
    delete ptr;
    std::cout << "Deleted " << std::endl;
  };
};

int main()
{
  auto_ptr a;
  auto_ptr b;
  a.ptr = new int;
  std::cout << a.ptr <<" before " << std::endl;
  auto_ptr d(a);
  std::cout << a.ptr << " after" << std::endl;
  auto_ptr e(d);
  auto_ptr f(e);
  auto_ptr c;
  c = f;
  return 0;
}
