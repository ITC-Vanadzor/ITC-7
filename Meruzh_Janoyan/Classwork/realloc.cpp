//realloc
#include<iostream>
#include <stdlib.h>

void *my_realloc(void *old,int old_size,int new_size){

	if(new_size>0){
        int n=(new_size>old_size)?old_size:new_size;
		char *new_p=(char*)malloc(new_size);

	for(int i=0;i<n;++i){
			new_p[i]=*((char *)old+i);
			}
	free(old);
	return (void*)new_p;
	}

    free(old);
    return NULL;
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
