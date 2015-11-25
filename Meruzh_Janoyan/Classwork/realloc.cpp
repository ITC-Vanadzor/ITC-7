//realloc
#include<iostream>
#include <stdlib.h>

void *my_realloc(void *prev,int prev_size,int size){

	if(size>0){
        int n=(size>prev_size)?prev_size:size;
		void *cp=malloc(size);
		void *ptr=cp;
		void *cpprev=prev;

	for(int i=0;i<n;++i){
			*((char*) ptr)=*((char*) prev);
            ptr+=1;
			prev+=1;
			}
	free(cpprev);

	return cp;
	}
	else{
		free(prev);
		return NULL;
	} 
}
int main()
{
 int *p=(int*)malloc(sizeof(int)*10);

	for(int i=0;i<10;++i) {
			*(p+i)=i;
			std::cout<<*(p+i);
	}
	std::cout<<std::endl;
	p=(int*)my_realloc(p,sizeof(int)*10,sizeof(int)*5);
 	if(p!=NULL) {
	for(int i=0;i<5;++i) {
			std::cout<<*(p+i);
	}
	std::cout<<std::endl;
 }
	free(p);

return 0;
}
