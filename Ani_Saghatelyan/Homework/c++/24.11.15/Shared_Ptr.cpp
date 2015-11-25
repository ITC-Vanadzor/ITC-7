# include <iostream>
struct Type{
   int variable;

   Type(){
	std::cout<<"Called "<<this<<" Type constructer \n";
   }
 
    Type(int rhs):variable(rhs){
	std::cout<<"Called "<<this<<" Type constructer \n";
   }
    ~Type(){
	std::cout<<"Called "<<this<<" Type destructer \n";
   }
};
   

struct Sptr{
    Type* ptr;
    int*  counter;
    Sptr();
    Sptr(Type *rhs);
    Sptr(const Sptr& rhs);
    ~Sptr();
    const Sptr& operator=(const Sptr& rhs);
    Sptr Test(Sptr rhs);	 
  	
 };
 //*************default constructer************
	    Sptr::Sptr():ptr(new Type),counter(new int(1)){ 						 
	     	std::cout<<"Called "<<this<<" DEFAULT "<<"  Counter "<< *(counter)<<" \n";
	    }
  //************* constructer with one parameter************
	    Sptr::Sptr(Type *rhs):ptr(rhs),counter(new int(1)){ 						 
	     	std::cout<<"Called "<<this<<" CONSTRUCTER WITH PARAMETER"<<"  Counter "<<*(counter)<<" \n";
	    }
 //********************copy constructer**************	
	    Sptr::Sptr(const Sptr& rhs){ 
	   	 ptr=rhs.ptr;
	         counter=rhs.counter;
		 *(counter)+=1;							
		 std::cout<<"Called "<<this<<" COPY CONSTRUCTER  "<<" Counter  "<<*(counter)<<" \n";
	    } 
//***************** Operator =*****************
    const Sptr&  Sptr::operator=(const Sptr& rhs){ 	
         if(counter!=rhs.counter){// it has already been = to other object, which has been  pointed to that pointer of heap-memory  										
		   ptr=rhs.ptr;
		   counter=rhs.counter;
		   *(counter)+=1;
           } 
		    std::cout<<"OPERATOR  = "<<this<<" Counter  "<<*(counter)<<" \n";	
           return *this;
    }
 //***********************Destructer*********
	    Sptr::~Sptr(){
	     	 std::cout<<"Called "<<this<<" destructer "<<*(counter)<<" \n";
		   if(*(counter)==1){
			  delete(ptr);
			  delete(counter);
		    }
		   else {
		              *(counter)-=1;
		    }
	    }
//*************Void Test**********
Sptr Sptr::Test(Sptr rhs){
  Sptr X(new Type);
  return X;
  }
           
int main(){
        Sptr S(new Type);
	Sptr Y;
        Y=S;
        Sptr A;
        Y.Test(A);
        
             
 
return 0;
}
