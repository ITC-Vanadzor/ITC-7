#include <iostream>
#include <cstdlib>

struct my_type {
	int a;
};
struct sPtr {
	my_type *pointer;
	int      counter;
    	sPtr();
	~sPtr();
};

sPtr::sPtr()
	{
		std::cout << " Create new object " << std::endl;
		counter++;
	}
sPtr::~sPtr()
	{
		std::cout << "Delete object " << std::endl;
		counter--;
	}


int main() {
    


return 0;
}
