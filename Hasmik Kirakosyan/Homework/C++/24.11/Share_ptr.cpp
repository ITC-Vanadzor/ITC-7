#include <iostream>


struct myObject {
   int* count;
   int a;
   myObject()  {
		std::cout<<"Object was created"<<std::endl;
		count=&a;
		}
   ~myObject() {
		 std::cout<<"Object was deleted"<<std::endl;	
	       }

};

struct shared_ptr {
   int* count;
   myObject* tmp;
   shared_ptr(myObject* x) {
	count=x->count;
	//std::cout<<a<<"count from construtor"<<std::endl;
        tmp = x; 
   };

    
   shared_ptr& operator= ( shared_ptr& B) {
	(*count)++; 
	//std::cout<<*count<<" count from = operator "<<std::endl;
	return B;
   };

   shared_ptr (const shared_ptr& B) {
	shared_ptr tmp_obj =new myObject();
        tmp_obj.tmp=B.tmp;
	(*count)++;
	//std::cout<<*count<<"count from copy "<<std::endl;
   };

~shared_ptr() {
        if (*count == 0) {
		delete tmp;
		//std::cout<<"\nObject was deleted ";
		}
	else {
                tmp = NULL;
		(*count)--;
	     }
  }



};

int main() {
myObject* t = new myObject;

shared_ptr A(t);
shared_ptr B(A);
shared_ptr C=A;


return 0;
}
