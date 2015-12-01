#include <iostream>
#include <assert.h>

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

shared_ptr ():  count(0), tmp(0) {
	std::cout<<"Default Constructor"<<std::endl;
   } 
// Constructor

shared_ptr(myObject* x):  count(0), tmp(x) {
	if (x != 0) {
		this->count = new int(1);
	}

	 std::cout<<"Constructor | Counter = "<<*count<<std::endl;
   }

// Operator =

const shared_ptr& operator= (const shared_ptr& B)  {

	if (this != &B) {

		cleanup();
		this->tmp = B.tmp;
		this->count = B.count;
		if (this->count != 0) {
			*(this->count)+=1;
			std::cout<<"Operator = function | Counter = "<<*count<<std::endl;
		}
	}
	return *this;
   };

// Copy function

shared_ptr (const shared_ptr& B): count(B.count), tmp(B.tmp) {
	if (this->count != NULL) {
		*(this->count) += 1;
		std::cout<<"Copy function for shared_ptr object | Counter = "<<*count<<std::endl;
  	}
 };

//  If tmp != NULL clear tmp and count, else decrement for *counter

void cleanup () {
		if (tmp != NULL) {
			assert(count != NULL);
			if (*count == 1) {
				delete tmp;
				tmp = NULL;
				delete count;
				count = NULL;
			}
			else {
				*count-=1;
			}
		}
}

// Destructor

~shared_ptr () {
		std::cout<<"\nDestructor for "<<this<<" | "<<*count<<std::endl;
  		cleanup();
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
