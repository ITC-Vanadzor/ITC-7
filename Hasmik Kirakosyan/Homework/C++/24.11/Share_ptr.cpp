#include <iostream>


struct myObject {
   int* count;
   myObject()  {
		std::cout<<"Object was created"<<std::endl;
		}
   ~myObject() {
		 std::cout<<"Object was deleted"<<std::endl;	
	       }

};


struct shared_ptr {
   int* count;
   myObject* tmp;
// Default constructor
shared_ptr (): tmp(new myObject), count(new int(1)){
	std::cout<<"Default Constructor"<<std::endl;
   } 
// Constructor
shared_ptr(myObject* x): tmp(new myObject), count(new int(1)) {
        tmp = x; 
	std::cout<<"Constructor "<<*count<<std::endl;
   };

// Operator =
shared_ptr operator= (shared_ptr& B) {
	this->tmp = B.tmp;
	this->count = B.count;
	*(this->count)+=1;
	std::cout<<"Operator = function "<<*count<<std::endl;
	return *this;
   };
// Copy function
shared_ptr (shared_ptr& B) {
	this->count = B.count;
	*(this->count)+=1;
	std::cout<<"Copy function for shared_ptr object "<<*count<<std::endl;
   };

// Destructor
~shared_ptr() {
        if (*count == 1) {
		delete this->tmp;
		delete this->count;
		}
	else {
                this->tmp = NULL;
		*(this->count)-=1;
	     }
  }



};

int main() {
myObject* t = new myObject;


shared_ptr A(t);
shared_ptr B(A);
shared_ptr C;
C=A;
shared_ptr D(A);

return 0;
}
