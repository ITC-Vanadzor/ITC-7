# include <iostream>
# include <cstdlib>



void* Realloc(void* ptr, size_t size)
{

     void* ptr2;
	if(ptr==NULL){
	   return malloc(size);
	}
	 if(size==0){
              free(ptr);
	     return NULL;
	 }
	 else{
	    ptr2=(char*)malloc(size);
		for (size_t i=0; i<=size*sizeof(size_t); ++i) {
			*(char*)(ptr2+i)=*(char*)(ptr+i);
		}   
	 }
     free(ptr);
     return ptr2;   
}
   
   
 int main()
 {
     //std::static_assert(sizeof(char));
     int n;
     std::cout<<"\nN: "; 
     std::cin>>n;
  
     int *ptr=(int*)malloc(n* sizeof(int));
     if (ptr!=NULL) {
        for(int i=0; i<n; ++i){
       		 std::cin>>ptr[i];
       		 std::cout<<" ";
         }
      }
     
    size_t newsize=8;  
    int *ptr2=(int*)Realloc(ptr, newsize);
	   
	   for(int i=0; i<newsize; ++i){
	       		 std::cout<<ptr2[i]<<" ";
		 }
   std::cout<<"\n";
   return 0;
 }
   
   
