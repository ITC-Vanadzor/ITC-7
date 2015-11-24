#include <iostream>

struct objType {
  int a;
  int b;
};

struct operator_plus {
	int a;
	int b;
	operator_plus operator+ (const objType& A) {
		this->a += A.a;
		this->b += A.b;
		return *this;
	}
	
};


int main() {
operator_plus A;
A.a=3;
A.b=2;
objType B;
B.a=7;
B.b= 8;
A+B;
std::cout<<"D = A+B | D.a = "<<A.a<<" D.b = "<<A.b<<std::endl;


return 0;
}
