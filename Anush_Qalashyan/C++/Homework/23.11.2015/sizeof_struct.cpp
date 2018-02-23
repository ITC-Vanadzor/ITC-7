#include <iostream>

int main() 

{
struct A
	{
		double a; // 8 bytes
		   int b; // 4 bytes
		  char c; // 1 bytes
		  bool d; // 1 bytes 
	};

struct B
	{
		   int b; // 4 bytes 
		double a; // 8 bytes
		  char c; // 1 bytes 
		  bool d; // 1 bytes 
	};

struct C
	{
		  char c; // 1 bytes 
		   int b; // 4 bytes 
		double a; // 8 bytes
		  bool d; // 1 bytes
	};

struct D
	{
		   int a1; // 4 bytes
		  char a2; // 1 bytes
		 float a3; // 4 bytes
		double a4; // 8 bytes
		  bool a5; // 1 bytes
	};

	
	std::cout << "A = " << sizeof(A) << std::endl;
	std::cout << "B = " << sizeof(B) << std::endl;
	std::cout << "C = " << sizeof(C) << std::endl;
	std::cout << "D = " << sizeof(D) << std::endl;

return 0;
}




