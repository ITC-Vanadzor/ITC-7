# include <iostream>

struct Type
{
        static int x;
	Type()
	{
                
       		std::cout<<"Object  "<<this<<" Constructor\t   Count of objects is:"<<++x<<std::endl;
	};

	~Type()
	{
		std::cout<<"Object  "<<this<<" Destructor\t  Count of objects is:"<<--x<<std::endl;
	};
};

int Type::x=0;

int main()
{
	
 Type a;
 Type b;
 Type c;
return 0;
}
