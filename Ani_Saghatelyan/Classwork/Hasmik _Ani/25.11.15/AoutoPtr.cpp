#include <iostream>


struct myObject {

   myObject()  {
		std::cout<<"\nObject was created"<<std::endl;
		}
   ~myObject() {
		 std::cout<<"Object was deleted"<<std::endl;	
	       }

};


struct Auto_ptr {
   myObject* tmp;
   
// Default constructor
	Auto_ptr () {
		std::cout<<"Default Constructor "<<this<<std::endl;
	   } 
// Constructor
	Auto_ptr(myObject* rhs)  {
		tmp = rhs; 
		std::cout<<"Constructor "<<this<<std::endl;
	   };

// Operator =
	Auto_ptr& operator= (Auto_ptr& rhs) {
		if(this!=&rhs){
			tmp=rhs.tmp;
			std::cout<<"Operator = function | Null  previous pointer "<<tmp;
			rhs.tmp=NULL;
                        std::cout<<" "<<rhs.tmp<<std::endl;
		}
		return *this;
	   };
// Copy function
	Auto_ptr (Auto_ptr& rhs) {
		tmp=rhs.tmp;
		std::cout<<"Copy function | Null previous pointer "<< this <<" "<<tmp;
		rhs.tmp=NULL;
                std::cout<<" "<<rhs.tmp<<std::endl;
		};
// Destructor
	~Auto_ptr() {
	      
		    delete tmp;
	  std::cout<<"Destructor | Deleting tmp "<<this<<std::endl;
	  }
};

int main() {
	Auto_ptr A(new myObject);
	Auto_ptr B(A);
	Auto_ptr C;
	C=B;
	Auto_ptr D(C);

	return 0;
}
