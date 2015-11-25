#include <iostream>
struct A
{
    int* ptr;	
    A();
    A(int*);
    A(A&);
    const A& operator =(A&);
   ~A();
};

const A& A::operator=(A& F)
{
if(this!=&F)
{
    delete ptr;
    ptr=F.ptr;
    F.ptr=NULL;
}
	return *this;

}

A::~A()
{
       delete ptr;

}

A::A(A & F)
{
    ptr=F.ptr;
    F.ptr=NULL;
}


A::A(int* t)
{
    ptr=t;
    *ptr=51;
}

A::A()

{
}

int main () 
{
    int*R=new int;
    A a(R);
    A b(a);
    A c(new int);
    c=b;
    c=c;
    {
	A x(b);
    }
    return 0;
}
