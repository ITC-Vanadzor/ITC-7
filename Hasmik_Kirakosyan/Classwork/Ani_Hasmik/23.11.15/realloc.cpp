# include <iostream>
# include <cstdlib>

int* Realloc(int* ptr, int size){
int* ptr2;
	if(ptr==NULL){
	   ptr2=(int*)malloc(size);
	}
	 if(size==0){
	     ptr2=NULL;
	 }
	 else{
	    ptr2=(int*)malloc(size);
		for (int i=0; i!=size; ++i) {
			ptr2[i]=ptr[i];
		}   
	 }
     free(ptr);
     return ptr2;   
}
   
   
 int main()
 {

     int n;
     std::cout<<"\nN: "; 
     std::cin>>n;
  
     int *ptr=NULL; //(int*)malloc(n* sizeof(int));
     if (ptr!=NULL) {
        for(int i=0; i<n; ++i){
       		 std::cin>>ptr[i];
       		 std::cout<<" ";
         }
      }
     
    int newsize=4;  
    int *ptr2=Realloc(ptr, newsize);
	   
	   for(int i=0; i<newsize; ++i){
	       		 std::cout<<ptr2[i]<<" ";
		 }
   std::cout<<"\n";
   return 0;
 }
   
   
