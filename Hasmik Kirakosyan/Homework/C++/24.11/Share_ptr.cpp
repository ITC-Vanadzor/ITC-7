#include <iostream>


struct myObject {
   int* count;
   myObject()  {
		std::cout<<"\nObject was created"<<std::endl;
	       }
   ~myObject() {
		 std::cout<<"\n\nObject was deleted"<<std::endl;	
	       }

};


struct shared_ptr {
   int* count;
   myObject* tmp;
// Default constructor
shared_ptr ():  count(new int(1)){
	std::cout<<"Default Constructor"<<std::endl;
   } 
// Constructor
shared_ptr(myObject* x):  count(new int(1)) {
        tmp = x;
	std::cout<<"Constructor | Counter = "<<*count<<std::endl;
   };

// Operator =
shared_ptr& operator= (const shared_ptr& B) {
	if (this != &B) {
		this->tmp = B.tmp;
		this->count = B.count;
		*(this->count)+=1;
		std::cout<<"Operator = function | Counter = "<<*count<<std::endl;
	}
	return *this;
   };

// Copy function
shared_ptr (shared_ptr& B) {
	this->count = B.count;
	*(this->count)+=1;
	std::cout<<"Copy function for shared_ptr object | Counter = "<<*count<<std::endl;
   };

// Destructor
~shared_ptr() {
        if (*count == 1) {
		std::cout<<"\nDestructor for "<<this<<" "<<*count;
		delete this->tmp;
		delete this->count;
		}
	else {
                this->tmp = NULL;
		std::cout<<"\nDestructor for "<<this<<" "<<*count;
		*(this->count)-=1;
	     }
  }



};

int main() {

shared_ptr A(new myObject);
shared_ptr B(A);
shared_ptr C;
C=A;
shared_ptr D(A);

return 0;
}
