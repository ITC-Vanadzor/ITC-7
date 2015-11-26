#include <iostream>

// New type define by me
struct myObject {

    myObject()  
    {
	std::cout<<"\nGeneral object was created"<<std::endl;
    }
    ~myObject() 
    {
	std::cout<<"\nGeneral object was deleted"<<std::endl;	
    }

};


struct Auto_ptr {
    
    myObject* tmp;

    // Default constructor
    Auto_ptr ()
	: tmp(0)
    {
	std::cout<<"\nDefault Constructor | Address of this object : "<<this<<std::endl;
    } 
    // Constructor
    Auto_ptr(myObject* object)
	: tmp(object)
    {
	std::cout<<"\nConstructor | Address of this object : "<<this<<std::endl;
    }

    // Operator =
    Auto_ptr& operator= (Auto_ptr& baseObj) 
    {
	if (this != &baseObj) 
	{
	    delete tmp;
	    tmp = baseObj.tmp;
	    std::cout<<"\nOperator = function | Previous pointer to be NULL "<<this<<std::endl;
	    baseObj.tmp = NULL;
	}
	return  *this;
    }

    // Copy function
    Auto_ptr (Auto_ptr& baseObj) 
	: tmp(baseObj.tmp)
    {
	std::cout<<"\nCopy function | Previous pointer to be NULL "<<this<<baseObj.tmp<<std::endl;
	baseObj.tmp = NULL;

    }
    
    // Destructor
    ~Auto_ptr() 
    {
	std::cout<<"\nDestructor | Deleting Auto_ptr type objects "<<this<<std::endl;
	delete tmp;
    }
};

int main() {

    Auto_ptr A(new myObject);
    Auto_ptr C(new myObject);
    C = A;
    Auto_ptr ff;
    Auto_ptr B(A);
    C = B;
    std::cout << "All deleted " << std::endl;
    Auto_ptr D(C);

    return 0;
}
