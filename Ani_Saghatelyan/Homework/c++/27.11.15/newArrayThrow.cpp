#include <iostream>

struct Type 
{
	static int count;
	int  x;
        Type();
        ~Type();
        
	
};

Type::Type() 
        {
		++count;
		std::cout<<"Object  "<<this<<" Constructor\t"<<count<<std::endl;
	        if(count==3)
		{
			throw 1;
		}
	}
Type::~Type() 
        {
		--count;
		std::cout<<"Object  "<<this<<" Destructor\t"<<count<<std::endl;
	}

int Type::count = 0;


int main() 
{      
        int n=5;
	Type* Array = new Type[n];
	for (int i = 0; i<n; i++)
        {
		Array[i].x = i;

        }

delete []Array;
return 0;
}
