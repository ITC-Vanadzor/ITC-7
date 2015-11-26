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
    int old;
    std::cout << "Old size = ";
    std::cin >> old;
    int* x = (int*) malloc (old * sizeof(int));
    for (int i = 0; i < old; ++i)
    {
	x[i] = i + 1;
    }
    for (int i = 0; i < old; ++i)
    {
	std::cout << "x["<< i << "]= "<< x[i] << std::endl;
    }
    int New;
    std::cout << "New size = ";
    std::cin >> New;
    int* y = (int*)realloc2(x, old * sizeof(int), New * sizeof(int));
    for (int i = 0; i < New; ++i)
    {
	std::cout << "y[" << i << "]= " <<  y[i] << std::endl;
    }
    free(y);

    return 0;
}
