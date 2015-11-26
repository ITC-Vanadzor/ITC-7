# include <iostream>
# include <cstdlib>

void* Realloc(void* ptr,size_t prev_size,  size_t size) {
// Set new array with new_size and copy old array in new one 
 
     size_t min_size = (prev_size<size)? prev_size:size;
     void* ptr2;

	if(ptr == NULL){
	   	return malloc(size);
	}
	if(size == 0)  {
        	free(ptr);
	     	return NULL;
	}
	else {
	    	ptr2=(char*)malloc(size);
		for (size_t i = 0; i <= min_size*sizeof(size_t); ++i) {
			*(char*)(ptr2+i) = *(char*)(ptr+i);
		}   
	}	

     free(ptr);
     return ptr2;   
}
   
   
 int main() {

     int n;
// Input size of current array
     do {
     std::cout<<"\nCurrent size: "; 
     std::cin>>n;
     } while (n < 0);

int *ptr = (int*) malloc(n* sizeof(int));

//  Input old array elements
         std::cout<<"\nEnter elements of array "<<std::endl;
     	if (ptr != NULL) {
        	for (int i = 0; i < n; ++i) {
			std::cout<<" arr["<<i+1<<"] = ";
       		 	std::cin>>ptr[i];
         	}
     	 }


// Input new size for realloc
    size_t new_size;

	do  {
		std::cout<<"\nNew size: ";
		std::cin>>new_size;
   	} while (new_size < 0);

    	// Realloc function call
    	int *new_arr = (int*)Realloc(ptr, n ,  new_size);


	// Type new array elements	   
    	std::cout<<"\nElements of array with new size "<<std::endl;
    	for (int i = 0; i < new_size; ++i){
	       		 std::cout<<new_arr[i]<<" ";
  	}

   std::cout<<"\n";
   return 0;
 }
   
   
