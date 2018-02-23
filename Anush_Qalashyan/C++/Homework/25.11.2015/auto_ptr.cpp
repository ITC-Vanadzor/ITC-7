#include <iostream>


struct auto_ptr
	{
		auto_pt & operator = (auto_ptrauto_ptr& t);
		int* a;
		auto_ptr();
		auto_ptr(auto_ptr* h);
	};

	auto_ptr::auto_ptr()
	{
		std::cout << "---create---" << std::endl;
	}

	auto_ptr::auto_ptr(auto_ptr* h)
	{
		std::cout << "---new--- " << std::endl;
		a = h->a;
		std::cout << "---delete--- " << std::endl;
		h->a = 0;
	}

	auto_ptr& auto_ptr::operator = (auto_ptr& t)
	{
		std::cout << "---(=) new--- " << std::endl;
		a = t.a;
		std::cout << "---(=) delete--- " << std::endl;
		t.a = 0;
	}

int main()
{
	auto_ptr a(new auto_ptr);
	auto_ptr b(a);
	auto_ptr c;
	c = b;
	{
		auto_ptr x;
		x = c;
	}

	return 0;
}
