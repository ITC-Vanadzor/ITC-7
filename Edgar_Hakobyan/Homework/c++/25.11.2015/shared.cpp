#include <iostream>
#include <cassert>

struct objeqt 
{
	objeqt()
	{
		std::cout << "stexcvec objeqt: " <<std::endl;
	}
	~objeqt()
	{
		std::cout << "jnjvec objeqt: " <<std::endl;
	}
};

struct shared_ptr
{
	objeqt* p_object;
	int* count;
	shared_ptr();
	
	shared_ptr(objeqt* my_obj);
	
	shared_ptr(shared_ptr &my_obj);

	shared_ptr& operator=(const shared_ptr &my_obj);
	
	void cleanup();
	
	~shared_ptr();
};
shared_ptr::shared_ptr():count(0),p_object(0)
{
	std::cout << "datark konstructor: " << std::endl;
}

shared_ptr::shared_ptr(objeqt* my_obj):count(0),p_object(my_obj)
{
	std::cout << "konstructor " << std::endl;
	if(p_object != 0)
	{
		count = new int(1);
		std:: cout << " count = " << count << std::endl;
	}
};

shared_ptr::shared_ptr(shared_ptr &my_obj):count(my_obj.count),p_object(my_obj.p_object)
{
	std::cout << "copy " << std::endl;
	if(count != 0)
	{
		++(*count);
		std::cout << "count = " << count << std::endl;
	}
};

void shared_ptr::cleanup()
{
	if(p_object != 0)
	{
		assert(count != 0);
		if(*count == 1)
		{
			delete p_object;
			p_object = 0;
			delete count;
			count = 0;
		}
		else
		{
			--(*count);
		}
	}
}

shared_ptr& shared_ptr::operator=(const shared_ptr &my_obj)
{
	std::cout << "operator " << std::endl;
	if(this == &my_obj)
	{
		return *this;
	}
	cleanup();
	p_object = my_obj.p_object;
	count = my_obj.count;
	if(count != 0)
	{
		++(*count);
		std::cout << "count = " << *count << std::endl;
	}
};

shared_ptr::~shared_ptr()
{
	cleanup();
};



int main()
{
	
	shared_ptr a(new objeqt);
	shared_ptr b(a);
	shared_ptr c;
	c = b;
	
	return 0;
}
