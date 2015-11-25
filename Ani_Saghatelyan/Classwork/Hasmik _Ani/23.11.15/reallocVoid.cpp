# include <iostream>
# include <cstdlib>



void* Realloc(void* ptr, size_t oldSize, size_t size)
{

     void* currentPtr;
	if(ptr==NULL){
	   return malloc(size);
	}
        if(size==0){
              free(ptr);
	     return NULL;
	 }
	 else{
	    urrentPtr=(char*)malloc(size);
            size_t sizeForCopy=size*sizeof(size_t);
            if(oldSize<size){
                 sizeForCopy=oldSize*sizeof(size_t);
            }
                
		for (size_t i=0; i<= sizeForCopy; ++i) {
		    *(char*)(urrentPtr+i)=*(char*)(ptr+i);
		}   
	 }
     free(ptr);
     return ptr2;   
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
    int *ptr2=(int*)Realloc(ptr,size, newSize);
	   
	   for(int i=0; i<newSize; ++i){
	       		 std::cout<<ptr2[i]<<" ";
		 }
   std::cout<<"\n";
   return 0;
 }
   
   
