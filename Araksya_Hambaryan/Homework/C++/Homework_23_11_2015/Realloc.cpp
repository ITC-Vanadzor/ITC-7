#include <iostream>
#include <cstdlib>


void* realloc2(void* OldArr,size_t OldSize, size_t NewSize)
{
    if (NewSize == 0) {
	return NULL;
    }
    if (OldArr == NULL){
	return malloc(NewSize);
    }
    	void* NewArr;
	NewArr = malloc (NewSize);
	int min = (OldSize < NewSize ? OldSize : NewSize);
	for (int i = 0; i < min; ++i)
	{
	    *((char*)NewArr+i) = *((char*)OldArr+i);
	}

	free(OldArr);
    
    return NewArr;
}
int main()  {
    int Oldsize;
    std::cout << "Old size = ";
    std::cin >> Oldsize;
    int* x = (int*) malloc (Oldsize * sizeof(int));
    for (int i = 0; i < Oldsize; ++i)
    {
	x[i] = i + 1;
    }
    for (int i = 0; i < Oldsize; ++i)
    {
	std::cout << "x["<< i << "]= "<< x[i] << std::endl;
    }
    int Newsize;
    std::cout << "New size = ";
    std::cin >> Newsize;
    int* y = (int*)realloc2(x, Oldsize * sizeof(int), Newsize * sizeof(int));
    for (int i = 0; i < Newsize; ++i)
    {
	std::cout << "y[" << i << "]= " <<  y[i] << std::endl;
    }
    free(y);

    return 0;
}
