# include <iostream>

struct Type
{
        
	Type()
	{
                static int x=0;
       		std::cout<<"Object  "<<this<<" Constructor\t   Count of objects is:"<<++x<<std::endl;
	};

	~Type()
	{
		std::cout<<"Object  "<<this<<" Destructor\n";
	};
};

int main()
{
	
 Type a;
 Type b;
 Type c;
return 0;
}
