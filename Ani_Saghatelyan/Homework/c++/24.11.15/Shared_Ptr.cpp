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
        *(this->counter)=1;
    }
  	 //***************** operator =*****************
    Sptr& operator=(Sptr& rhs){ 	
         if(this->counter!=rhs.counter){// it has already been = to other object, which has been  pointed to that pointer of heap-memory  										
		   this->ptr=rhs.ptr;
		   this->counter=rhs.counter;
		   *(this->counter)+=1;
           } 
		    std::cout<<"Operator= "<<this<<"  "<<*(counter)<<" \n";	
           return *this;
    }
      	
 	 //********************copy constructer**************	
    Sptr( Sptr& rhs):ptr(rhs.ptr){ 
        this->counter=rhs.counter;
        *(this->counter)+=1;							
        std::cout<<"Called "<<this<<" copy constructer  "<<*(counter)<<" \n";
    } 
  	 //***********************Destructer*********
    ~Sptr(){
     	 std::cout<<"Called "<<this<<" destructer "<<*(counter)<<" \n";
           if(*(this->counter)==1){
		  delete(this->ptr);
		  delete(this->counter);
            }
           else {
                      *(this->counter)-=1;
            }
    }
 };
    
           
int main(){
        Sptr S;
	Sptr X(S);
	Sptr Y;
        Y=S;
        Sptr P(X);
        P=S;
        
 
return 0;
}
