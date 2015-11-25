#include<iostream>

struct my_type
{
	my_type()
	{
		std::cout << "konstructor" << std::endl;
	}
	~my_type()
	{
		std::cout << "destructor" << std::endl;
	}
};

struct auto_ptr
{
	my_type* ptr;
	
	auto_ptr():ptr(NULL){}
	
	auto_ptr(my_type* p):ptr(p){}
	
	auto_ptr(auto_ptr& pp)
	{
		ptr = pp.ptr;
		if(pp.ptr != NULL) pp.ptr = NULL;
	}
	
	auto_ptr& operator=(auto_ptr& x)
	{
		if(this != &x)
		{
			if(ptr != NULL) delete ptr;
			ptr = x.ptr;
			x.ptr = NULL;
		}
		return *this;
	}
	
	~auto_ptr()
	{
		if(ptr != NULL) delete ptr;
	}
};

int main()
{
	my_type* p = new my_type;
	auto_ptr a(p);
	auto_ptr b;
	b = a;
	auto_ptr c(b);
	auto_ptr d(new my_type);
	auto_ptr e(new my_type);
	e = e;
	auto_ptr f(new my_type);
	f = e;
	
	return 0;
}