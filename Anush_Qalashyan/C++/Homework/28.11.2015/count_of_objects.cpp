# include <iostream>

struct A
{
        
	A()
	{
		static int a = 1;
		std::cout<< a << std::endl;
		++a;
	};
};

int main()
{
	
	 A a;
	 A b;
	 A c;
	 A d;
     // A e;

return 0;
}
