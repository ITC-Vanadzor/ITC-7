#include <iostream>
#include <cstdlib>

struct B {
  B()
  {
    std::cout << "Created B " << std::endl;
  }
  ~B()
  {
    std::cout << "Deleted B " << std::endl;
  }
};

struct share_ptr
{
	B* Ptr;
        int* counter;
 	share_ptr()
	  :Ptr(NULL), counter(new int(1))
	{  
		std::cout << "Gives 1 value to counter " << *counter << std::endl;
		*counter = 1;
	};
share_ptr& operator = (share_ptr & k)
  {        
  	if(Ptr!=k.Ptr)
        {
           	std::cout << "Created new pointer "<< Ptr << std::endl;
		counter = k.counter;
		++(*counter);
	}
	 else
	{
		std::cout << "Wrong seting " << std::endl;
	}
   }
 share_ptr(share_ptr& a)
  {
	       	std::cout << "Created new pointer "<< Ptr << std::endl;
		counter = a.counter;
		++(*counter);
  };

void  dekrement(int* count, B* ptr)
{
  --(*count);
  if(*count == 0)
    {
      delete ptr;
      delete count;
      std::cout << "Deleted pointer " << std::endl;
    }
  	std::cout << "Deleted last pointer " << std::endl;
};
  ~share_ptr()
  {
    dekrement (counter, Ptr);
  };
};
 


int main()
{
  	share_ptr a;
  	a.Ptr = new B;
  	std::cout << a.Ptr <<" before " << std::endl;
  	share_ptr d(a);
  	std::cout << a.Ptr << " after " << std::endl;
  	share_ptr e(d);
  	share_ptr f(e);
 	share_ptr c;
  	c = f;
	c = c;
  	return 0;
}



