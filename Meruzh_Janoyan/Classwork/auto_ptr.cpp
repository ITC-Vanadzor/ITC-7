#include<iostream>
struct my_type{
	my_type(){
		std::cout<<"Creted my_type"<<std::endl;
	}
	~my_type(){
		std::cout<<"Deleted my_type"<<std::endl;
	}
};




struct auto_ptr {
my_type* ptr;

	auto_ptr():ptr(NULL){}
      
	auto_ptr(my_type *ekac_p):ptr(ekac_p){}

	auto_ptr(auto_ptr &ekac_o){
		ptr= ekac_o.ptr;
		if(ekac_o.ptr!=NULL) {
			 ekac_o.ptr=NULL;
		}
	}

	auto_ptr &operator=(auto_ptr &x){
		if(this!=&x){
		if(ptr!=NULL) delete ptr;		
		ptr=x.ptr;
		x.ptr=NULL;
		}
		return *this;
	}
	
	~auto_ptr(){
		if(ptr!=NULL) delete ptr;
	}


};

int main()
{
	my_type *p=new my_type;	
	auto_ptr a(p);	
	auto_ptr b;
	b=a;
	auto_ptr c(b);
	auto_ptr d(new my_type);
	auto_ptr q(new my_type);

	q=q;
	auto_ptr j(new my_type);
	j=q;





return 0;
}
