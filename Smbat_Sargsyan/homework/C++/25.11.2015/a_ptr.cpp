#include <iostream>
struct object {
object() { std::cout << "Created" << std::endl;}
~object() { std::cout <<"Deleted" << std::endl;}
};
struct auto_ptr {
 object* ptr;
 auto_ptr();
 ~auto_ptr();
 auto_ptr(object* s);
 auto_ptr(auto_ptr& h) {
 ptr=h.ptr;
 h.ptr=0; 
}
 auto_ptr& operator = (auto_ptr& f) {
		if (this != &f) { 
                   if(ptr!=0) {  delete ptr; }
		
		       ptr= f.ptr;
                       f.ptr=0;
                }
		return *this;
         }
 };
 auto_ptr::auto_ptr(object*s) {
 ptr=s;
} 
 auto_ptr::auto_ptr() {} 
 auto_ptr::~auto_ptr() { 
 std::cout << "Delete " << std::endl;
 if(ptr!=0) {
 delete ptr; 
 }
} 

int main() { 
 auto_ptr x(new object);
 x=x;
 auto_ptr a(x);
 std::cout << a.ptr << std::endl;
 std::cout << x.ptr << std::endl;
 auto_ptr c(new object);
 c=a;
 std::cout << c.ptr << std::endl;
{
   auto_ptr h(c);
   std::cout << h.ptr << std:: endl;
}
return 0;
}
