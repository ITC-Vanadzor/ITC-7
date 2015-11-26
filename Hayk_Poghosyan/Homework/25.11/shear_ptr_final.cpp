#include <cassert>
struct A
{
	int* ptr;
	int *pt;
	A();
	A(int*);
	A(const A&);
	~A();
	void cleanup();
	A& operator = (const A& h);
};



A::~A()
{
	if (*ptr == 1)
	{
		delete pt;
	}

	--*ptr;

}

A::A(const A & F)
{
	pt = F.pt;
	ptr = F.ptr;
	if (ptr != 0)
	{
		++(*ptr);
	}
}


A::A(int* t)
{
	ptr = new int;
	*ptr = 0;
	pt = t;

	if (pt != 0)
	{
		ptr = new int(1);
	}
}

A::A()
	:ptr(0)
	, pt(0)
{
}
void A::cleanup()
{
	if (ptr != 0)
	{
		assert(pt != 0);
		if (*pt == 1)
		{
			delete ptr;
			ptr = 0;
			delete pt;
			pt = 0;
		}
		else
		{
			--(*pt);
		}
	}
}

A& A::operator = (const A& h)
{
	if (this == &h)
	{
		return *this;
	}
	cleanup();
	ptr = h.ptr;
	pt = h.pt;
	if (pt != 0)
	{
		++(*pt);
	}
}

int main()
{
	int*p2 = new int;
	int*p1 = new int;
	A a(p1);
	A b(a);
	A c(p2);
	{
		A x(c);
	}
	return 0;
}