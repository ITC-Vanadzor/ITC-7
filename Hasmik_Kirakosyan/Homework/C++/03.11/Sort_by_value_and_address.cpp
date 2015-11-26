#include <iostream>

// Function that sort array by value
void sort_by_value( int* ptr[]) {
  std::cout<<"\nBefore sorting by value"<<std::endl;
  for(int i=0; i<5; ++i){
               std::cout<<" "<<*ptr[i]<<std::endl;
  }
               std::cout<<std::endl;  
  
  for(int i=4; i>0; --i){
  	for(int j=0; j<i; ++j){
  	   if(*ptr[j]>*ptr[j+1]){
                std::swap(*ptr[j], *ptr[j+1]);
       }
    }
  }
  
  std::cout<<"\nAfter sorting by value"<<std::endl;      
  for(int i=0; i<5; ++i){
               std::cout<<" "<<*ptr[i]<<std::endl;
  }
}

// Function that sort array by address
void sort_by_address( int * ptr[]) {
     
  std::cout<<"\nBefore sorting by address"<<std::endl;   
  for(int i=0; i<5; ++i){
               std::cout<<" "<<ptr[i]<<std::endl;
  }
               std::cout<<std::endl;
             
  for(int i=4; i>0; --i){
  	for(int j=0; j<i; ++j){
  	   if(ptr[j]>ptr[j+1]){
              std::swap(ptr[j], ptr[j+1]);
       }
    }
  }
  
  std::cout<<"\nAfter sorting by address"<<std::endl;      
  for(int i=0; i<5; ++i){
               std::cout<<" "<<ptr[i]<<std::endl;
  }
  std::cout<<"\n"<<std::endl; 
   
}

int main()
{

    int *ptr[5]={}; 
    int a[5];
 
    for (int i = 0; i < 5; ++i) {
             std::cout<<" a["<<i+1<<"] = ";
             std::cin>>a[i];
             ptr[4-i]=&a[i];
    }  
   
   sort_by_value(ptr);
   std::cout<<std::endl;
   sort_by_address(ptr);  
                
  return 0;
}
  
