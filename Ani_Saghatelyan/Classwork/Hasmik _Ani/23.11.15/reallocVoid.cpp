# include <iostream>
# include <cstdlib>



void* Realloc(void* ptr, size_t oldSize, size_t size)
{

    
	if(ptr==NULL){
	   return malloc(size);
	}
        if(size==0){
              free(ptr);
	     return NULL;
	 }
	 else{
	    char* currentPtr=(char*)malloc(size);
	    if (ptr==NULL) {
	    	return NULL;
	    }
            size_t sizeForCopy=size;
            if(oldSize<size){
                 sizeForCopy=oldSize;
            }
                
		for (size_t i = 0; i < sizeForCopy; ++i) {
		    currentPtr[i]=*((char*)ptr+i);
		} 
		 free(ptr);
     		return currentPtr;   
	 }
       
}
   
   
 int main()
 {
     
     int size;
     std::cout<<"\nEnter Size:"; 
     std::cin>>size;
  
     int *ptr=(int*)malloc(size* sizeof(int));
     if (ptr!=NULL) {
        for(int i=0; i<size; ++i){
       		 std::cin>>ptr[i];
       		 std::cout<<" ";
         }
      }
     
    size_t newSize=12;  
    int *ptr2=(int*)Realloc(ptr,size*sizeof(int), newSize*sizeof(int));
	   
	   for(int i=0; i<newSize; ++i){
	       		 std::cout<<ptr2[i]<<" ";
		 }
   std::cout<<"\n";
   return 0;
 }
   
   
