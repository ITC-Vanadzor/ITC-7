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
	std::cout << "datark konstruktor 	";
}
Sptr::Sptr(B* y)
    : count(0)
    , x(y)
{
    std::cout << "kostruktor	";
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
    std::cout << "copy 	" << std::endl;
    if (count != 0)
    {
	++(*count);
	std::cout << "count = " << count << std::endl;
    }
}

void Sptr::cleanup()
{
    if (x != 0)
    {
	assert(count != 0);
	if (*count == 1)
	{
	    delete x;
	    x = 0;
	    delete count;
	    count = 0;
	}
	else 
	{
	    --(*count);
	}
    }
}

Sptr& Sptr::operator = (const Sptr& h)
{
    std::cout << "operator = 	";
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

Sptr::~Sptr()
{
    cleanup();	
}
int main()
{
    Sptr a(new B);
    Sptr b(a);
    Sptr c(b);
    Sptr n;
    n = c;
    return 0;
}
