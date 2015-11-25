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
    
   	//*************default constructer************
    Sptr():ptr(new Type),counter(new int(1)){ 						 
     	std::cout<<"Called "<<this<<" Sptr constructer "<<*(counter)<<" \n";
       // *(this->counter)=1;
    }
    
    	//************* constructer with one parameter************
    Sptr(Type *rhs):ptr(rhs),counter(new int(1)){ 						 
     	std::cout<<"Called "<<this<<" Sptr constructer  with one parameter"<<*(counter)<<" \n";
       // *(this->counter)=1;
    }
    
  	 //***************** operator =*****************
    const Sptr& operator=(const Sptr& rhs){ 	
         if(counter!=rhs.counter){// it has already been = to other object, which has been  pointed to that pointer of heap-memory  										
		   ptr=rhs.ptr;
		   counter=rhs.counter;
		   *(counter)+=1;
           } 
		    std::cout<<"Operator= "<<this<<"  "<<*(counter)<<" \n";	
           return *this;
    }
      	
 	 //********************copy constructer**************	
    Sptr(const Sptr& rhs){ 
    ptr=rhs.ptr;
       counter=rhs.counter;
        *(counter)+=1;							
        std::cout<<"Called "<<this<<" copy constructer  "<<*(counter)<<" \n";
    } 
  	 //***********************Destructer*********
    ~Sptr(){
     	 std::cout<<"Called "<<this<<" destructer "<<*(counter)<<" \n";
           if(*(counter)==1){
		  delete(ptr);
		  delete(counter);
            }
           else {
                      *(counter)-=1;
            }
    }
 };
    
           
int main(){
        Sptr*k=new Sptr;
        Type* t =new Type;
        Sptr S(t);
	Sptr X(S);
	Sptr Y;
        Y=S;
        Sptr P(X);
        P=S;
             
 
return 0;
}
