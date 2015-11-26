#include <iostream>
#include <cstdlib>

int min(int oldsize, int newsize)
{
    if (oldsize < newsize)
    {
	return oldsize;
    } else {
	return newsize;
    }
} 

int* Realloc(int* ptrmem, int oldsize, int newsize)         //ptrmem=pointermemory
{
    if (ptrmem == NULL)
    {
	return (int*) malloc (newsize * sizeof(int));
    } 
	if (newsize == 0)
	{
	    return 0;
	} 
	    int* newmem = (int*) malloc (newsize *  sizeof(int));      //newmem=newmemory
	    for (int i=0; i < min(oldsize, newsize); ++i)
	    {
		newmem[i]=ptrmem[i];
	    }
	    free(ptrmem);
	    return newmem;
}

int main()
{
    int array[5];
for (int i = 0; i < 5; ++i) {
std::cin >> array[i];
}
int newsize = 20; 
    int * newmem = Realloc(array, 5, newsize);
for (int i = 0; i < 20; ++i) {
std::cout << newmem[i] << "   ";
}

    return 0;
}
