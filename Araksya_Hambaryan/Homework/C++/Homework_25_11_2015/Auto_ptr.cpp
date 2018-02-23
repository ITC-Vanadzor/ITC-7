#include <iostream>
struct A
{
    int* ptr;	
    A();
    A(int*);
    A(A&);
    const A& operator = (A&);
    ~A();
};

const A& A::operator = (A& F)
{
    if (this != &F)
    {
	if (ptr != NULL) {
	    delete ptr;
	}
	ptr = F.ptr;
	F.ptr = NULL;
    }
    return *this;
}

A::A()
: ptr(0)
{}
A::A(int* t)
{
    ptr = t;
    *ptr = 51;
}

A::A(A & F)
{
    ptr = F.ptr;
    F.ptr = NULL;
}

A::~A()
{ 
	delete ptr;
}
int main () 
{
    int*R = new int;
    A a(R);
    std::cout<<"a.ptr= " << a.ptr << "\n*a.ptr=  " << *a.ptr << std::endl;
    A b(a);
    std::cout<<"\na.ptr= " << a.ptr << "\nb.ptr=  " << b.ptr << "\n*b.ptr=  " << *b.ptr<< std::endl;
    A c(new int);
    c=b;
    c=c;
    {
	A x(c);
    }
    std::cout<<"\n\nend a.ptr= " << a.ptr << "\nb.ptr=  " << b.ptr << "\nc.ptr=  " << c.ptr<< std::endl;

    return 0;
}
