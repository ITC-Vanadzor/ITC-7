#include <iostream>

struct Type {
    Type() {
	std::cout << "Created" <<std::endl;
    }
    ~Type() {
	std::cout << "Deleted" << std::endl;
    }
};

struct shared_p{
    Type* ptr;
    int *count;
    shared_p();
    shared_p(Type*);
    shared_p(const shared_p&);
    const shared_p& operator = (const shared_p&);
    ~shared_p();
};

shared_p :: shared_p()
: count (0), ptr(0)
{}

shared_p :: shared_p(Type* a)
{
    ptr=a;
     count = new int;
    *count = 0;
    std::cout << "  count = " << *count <<std::endl;
}

shared_p :: shared_p(const shared_p& a)
{
    ptr= a.ptr;
    count = a.count;
    ++(*count);
    std::cout << "  count = " << *count <<std::endl;

}

const shared_p& shared_p::operator = ( const shared_p& a)
{
    if (this == &a) {
	return *this;
    } else {
	ptr = a.ptr;
	count=a.count;
	++(*count);
	}
	std::cout << "  count = " << *count <<std::endl;

	return a;
}

shared_p :: ~shared_p()
{
    std::cout << " Deleted count= " << *count << std::endl; 
    if (*count == 0) {
	delete count;
	delete ptr;
    } else {
	--(*count);
   }
}



int main () {
    shared_p A1(new Type);
    shared_p A2(A1);
    shared_p A3;
    A3 = A2;
    shared_p B1(new Type);
    shared_p B2 = B1;
    return 0;
}
