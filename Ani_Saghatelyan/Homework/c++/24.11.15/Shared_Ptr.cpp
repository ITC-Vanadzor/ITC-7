# include <iostream>
# include <assert.h>
struct Type
{
   int variable;

   Type()
   {
	std::cout<<"Called "<<this<<" Type constructer \n";
   }
 
    Type(int rhs):variable(rhs)
    {
	std::cout<<"Called "<<this<<" Type constructer \n";
    }
    ~Type()
    {
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
	    Sptr::Sptr()
             :ptr(0)
             ,counter(0)
            { 						 
	     	std::cout<<"Called "<<this<<" DEFAULT Constructer "<<" \n";
	    }
  //************* constructer with one parameter************
	    Sptr::Sptr(Type *rhs)
              :ptr(rhs)
              ,counter(0)
            {
                 std::cout<<std::cout<<"Called "<<this<<" CONSTRUCTER WITH PARAMETER\n";
	         if(rhs!=0)
		{
			 counter=new int(1); 
		         std::cout<<"  Counter "<<*(counter)<<" \n";						 
	     
	       }
	     		
 
	   }
 //********************copy constructer**************	
	    Sptr::Sptr(const Sptr& rhs)
             :counter(rhs.counter)
             ,ptr(rhs.ptr)
            {
		std::cout<<"Called "<<this<<" COPY CONSTRUCTER  \n"; 
	   	
	          if(counter!=NULL)
	          {
			 *(counter)+=1;							
			 std::cout<<" Counter  "<<*(counter)<<" \n";
	          }
	    } 
//***************** Operator =*****************
    const Sptr&  Sptr::operator=(const Sptr& rhs)
    { 
         std::cout<<"OPERATOR  = "<<this<<" \n";	
         if(counter!=rhs.counter)
         {     		
                   cleanup();				
		   ptr=rhs.ptr;
		   counter=rhs.counter;
		   if(counter!=NULL)
		   {
		   	*(counter)+=1;
		   	 std::cout<<" Counter  "<<*(counter)<<" \n";
		   }
           } 
		   	
           return *this;
    }
//***********void cleanup*********************
    void Sptr::cleanup()
    {
	    if(ptr!=0)
	    {    
	          assert(counter!=NULL);
                  if((*counter)==1)
                  {
			  delete ptr;
			  ptr=0;
			  delete counter;
			  counter=0;
		   }
		   else
		   {
		          (*counter)-=1;
		   }
          }
   
    }

 //***********************Destructer*********
	    Sptr::~Sptr()
            {
	         cleanup();
	     	 std::cout<<"Called "<<this<<" destructer \n";
		   
	    }


           
int main()
 {
        Sptr S(new Type);
	Sptr Y;
        Y=S;
        {
        Sptr A(S);
        }
        Sptr X;
       
        
        
          
 
       return 0;
}
