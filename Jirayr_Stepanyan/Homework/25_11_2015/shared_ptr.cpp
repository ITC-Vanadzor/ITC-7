#include <iostream>
#include <cstdlib>
static int count = 0;
struct sptr
{
	int* x;
	sptr(int* y);
	~sptr();
};
sptr::sptr(int* y)
	:x(y)
{
	std::cout << "stexceci" << std::endl;
	++count;
}
sptr::~sptr()
{
	std::cout << "jnjeci" << std::endl;
	if(count == 0)
	{
		delete x;
	}
	else
	{
		--count;
	}
}
int main()
{
	sptr* a = new int;
	sptr b(a);
	std::cout << count << std::endl;
	delete a;

   return 0;
}
