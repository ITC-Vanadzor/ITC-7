//Auto_Ptr
#include <iostream>
#include <cstdlib>


struct auto_ptr
{
	int* Ptr;
 	auto_ptr()
	{  
	std::cout << Ptr << std::endl;
	};
	auto_ptr& operator = (auto_ptr & k)
	{
		Ptr=k.Ptr;
    		std::cout << "Created and gived "<< Ptr <<" pointer to the next object " << std::endl;
    		k.Ptr = NULL;
    		std::cout << k.Ptr << std::endl;
    		std::cout << "Gived old objects pointer NULL " << std::endl;
 	}
  	auto_ptr(auto_ptr& a)
  	{
    		Ptr=a.Ptr;
    		std::cout << "Created and gived "<<Ptr <<" pointer to the next object " << std::endl;
    		a.Ptr = NULL;
    		std::cout << a.Ptr << std::endl;
    		std::cout << "Gived old objects pointer NULL " << std::endl;
  	};
  	~auto_ptr()
  	{
    	
    		delete Ptr;
    		std::cout << "Deleted " << std::endl;
  	};
};

int main()
{
  	auto_ptr a;
  	a.Ptr = new int;
  	std::cout << a.Ptr <<" before " << std::endl;
  	auto_ptr d(a);
  	std::cout << a.Ptr << " after " << std::endl;
  	auto_ptr e(d);
  	auto_ptr f(e);
 	auto_ptr c;
  	c = f;
  	return 0;
}
