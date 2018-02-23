#include <iostream>
#include <cstdlib>
#include <cstring>

void *my_realloc(void *ptr,size_t size)
{

	void *newptr;

	newptr = malloc(size);
	newptr = memcpy(newptr,ptr,size);
	free(ptr);  

	return newptr;

}
int main()
{
	int* p = (int*)malloc(sizeof(int)*10);
	for(int i=0;i<10;++i) 
	{
		*(p+i) = i;
		std::cout << *(p+i);
	}
	std::cout <<std::endl;
	p = (int*)my_realloc(p,sizeof(int)*15);
	
	
	for(int i=0; i<15; ++i) 
	{
		std::cout << *(p+i);
	}
	std::cout << std::endl;
	free(p);
	return 0;
}