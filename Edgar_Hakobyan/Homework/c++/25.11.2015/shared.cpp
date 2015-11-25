#include<iostream>

struct objeqt 
{
	objeqt()
	{
		std::cout << "konstructor" <<std::endl;
	}
	~objeqt()
	{
		std::cout << "destructor" <<std::endl;
	}
};

struct shared_ptr
{
	objeqt* p;
	static int count;
	shared_ptr(objeqt* my_obj);
	
	shared_ptr(const shared_ptr &my_obj);

	shared_ptr& operator=(shared_ptr &my_obj);
	
	~shared_ptr();
};

int shared_ptr::count = 0;

shared_ptr::shared_ptr(objeqt* my_obj)
{
	p = my_obj;
};

shared_ptr::shared_ptr(const shared_ptr &my_obj)
{
	shared_ptr tmp = new objeqt();
	tmp.p = my_obj.p;
	++count;
};

shared_ptr& shared_ptr::operator=(shared_ptr &my_obj)
{
	count++;
	return my_obj;
};

shared_ptr::~shared_ptr()
{
	if(count == 1)
	{
		delete p;
		count = 0;
		std::cout << "objeqt@ jnjvac e" <<std::endl;
	}
	else
	{
		p = NULL;
		--count;
	}
};



int main()
{
	
	shared_ptr a(new objeqt);
	shared_ptr b(a);
	shared_ptr c(new objeqt);
	c = b;
	
	return 0;
}