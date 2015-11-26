#include <iostream>

struct objType {
  int a;
  int b;
};

struct operator_plus {
	int a;
	int b;
	operator_plus operator+ (const objType& A) {
		operator_plus tmp;
		tmp.a=this->a+ A.a;
		tmp.b=this->b+ A.b;
		return tmp;
	}
	
};


int main() {
operator_plus A;
A.a=3;
A.b=2;
objType B;
B.a=7;
B.b= 8;

std::cout<<" A.a ="<<A.a<<" A.b ="<<A.b<<std::endl;
std::cout<<" B.a ="<<B.a<<" B.b ="<<B.b<<std::endl;
operator_plus C;
C=A+B;
std::cout<<"C = A+B | C.a = "<<C.a<<" D.b = "<<C.b<<std::endl;


return 0;
}
