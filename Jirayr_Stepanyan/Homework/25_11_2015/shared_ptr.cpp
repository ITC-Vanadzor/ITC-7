#include <iostream>
#include <cassert>
struct B
{
    B()
    { 
	std::cout << "created B" << std::endl;
    }
    ~B()
    {
	std::cout << "deleted B" << std::endl;
    }
};
struct Sptr
{
	int* count;
	B* x;
	Sptr();
	Sptr(B* y);
	Sptr(Sptr& k);
	Sptr& operator = (const Sptr& h);
	~Sptr();
	void cleanup();
};

Sptr::Sptr()
    : count(0)
    , x(0)
{
	std::cout << "default constructor 	" << std::endl;
}

Sptr::Sptr(B* y)
    :x(y)
{
    std::cout << "argument constructor	" << std::endl;
    if (x != 0)
    {
	count = new int(1);
	std::cout << "count = " << *count << std::endl;
    }
}

Sptr::Sptr(Sptr& k)
    : count(k.count)
    , x(k.x)
{
    std::cout << "copy constructor	" << std::endl;
    if (count != 0)
    {
	++(*count);
	std::cout << "count = " << *count << std::endl;
    }
}

Sptr& Sptr::operator = (const Sptr& h)
{
    std::cout << "(=) operator 	" << std::endl;
    if (this == &h)
    {
	return *this;
    }
    cleanup();
    x = h.x;
    count = h.count;
    if (count != 0)
    {
	++(*count);
	std::cout << "count = " << *count << std::endl;
    }
}

void Sptr::cleanup()
{
	std::cout << "cleanup function	" << std::endl;
    if (x != 0)
    {
	assert(count != 0);
	if (*count == 1)
	{
	    delete x;
	    x = 0;
	    delete count;
	    count = 0;
	    std::cout << "deleted x and count	" << std::endl;
	}
	else 
	{
	    --(*count);
	    std::cout << "sub count	" << std::endl;
	    std::cout << "count	= " << *count << std::endl;
	}
    }
}

Sptr::~Sptr()
{
    cleanup();	
}
int main()

{
    Sptr a(new B);
    Sptr b(a);
    Sptr c(b);
    {
        Sptr m;
	m = c;
	Sptr p(m);
    }
    Sptr n;
    n = c;
    return 0;
}
