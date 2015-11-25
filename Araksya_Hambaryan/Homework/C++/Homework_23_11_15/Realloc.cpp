#include <iostream>
#include <cstdlib>
void* realloc2(void* OldArr, int NewSize)
{
    void* NewArr;
    if (NewSize ==0) {
	return NULL;
    }
    if(OldArr==NULL){
	free(OldArr);
	return malloc(NewSize);
    } else{
	NewArr = malloc (NewSize);
	for(int i = 0; i < NewSize/sizeof(int); ++i)
	{
	    *((int*)NewArr+i) = *((int*)OldArr+i);
	}

	free(OldArr);
    }
    return NewArr;
}
int main()  {
    int* x = (int*) malloc (4 * sizeof(int));
    for (int i=0; i<4; ++i)
    {
	x[i] = i + 1;
    }
    for(int i = 0; i < 4; ++i)
    {
	std::cout << "x["<< i << "]= "<< x[i] << std::endl;
    }
    int* y = (int*)realloc2(x, 5 * sizeof(int));
    y[4] = 9;
    for(int i = 0; i < 5; ++i)
    {
	std::cout << "y[" << i << "]= " <<  y[i] << std::endl;
    }
    free(y);

    return 0;
}
