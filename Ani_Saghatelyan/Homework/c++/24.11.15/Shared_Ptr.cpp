# include <iostream>
# include <assert.h>
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
    void cleanup();	 
  	
 };
 //*************default constructer************
	    Sptr::Sptr():ptr(NULL),counter(NULL){ 						 
	     	std::cout<<"Called "<<this<<" DEFAULT "/*<<"  Counter "<< *(counter)*/<<" \n";
	    }
  //************* constructer with one parameter************
	    Sptr::Sptr(Type *rhs):ptr(rhs),counter(NULL){
	         if(counter!=0){
	         counter=new int(1); 						 
	     
	     	}
	     		std::cout<<"Called "<<this<<" CONSTRUCTER WITH PARAMETER"<</*"  Counter "<<*(counter)<<*/" \n";
	    }
 //********************copy constructer**************	
	    Sptr::Sptr(const Sptr& rhs):counter(rhs.counter),ptr(rhs.ptr){ 
	   	
	          if(counter!=NULL)
	          {
			 *(counter)+=1;							
			 std::cout<<"Called "<<this<<" COPY CONSTRUCTER  "<<" Counter  "<<*(counter)<<" \n";
	          }
	    } 
//***************** Operator =*****************
    const Sptr&  Sptr::operator=(const Sptr& rhs){ 	
         if(counter!=rhs.counter){// it has already been = to other object, which has been  pointed to that pointer of heap-memory  			          			
                   cleanup();				
		   ptr=rhs.ptr;
		   counter=rhs.counter;
		   if(counter!=NULL)
		   {
		   	*(counter)+=1;
		   	 std::cout<<"OPERATOR  = "<<this<<" Counter  "<<*(counter)<<" \n";
		   }
           } 
		   	
           return *this;
    }
    void Sptr::cleanup()
    {
	    if(ptr!=0)
	    {    
	          assert(counter!=NULL);
                  if((*counter)==1)
                  {
			  delete(ptr);
			  ptr=0;
			  delete(counter);
			  counter=0;
		    }
		   else {
		              (*counter)-=1;
		    }
          }
   
    }
 //***********************Destructer*********
	    Sptr::~Sptr(){
	    cleanup();
	     	 std::cout<<"Called  destructer \n";
		   
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
