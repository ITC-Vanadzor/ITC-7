#include <iostream>

bool equal_char (void* element_1, void* element_2 ) 
{
    return  (*((char*)element_1) == *((char*) element_2));
}


bool double_compare (void* element_1, void* element_2) 
{
    return (*((double*)element_1) > *((double*) element_2));
}


bool int_1 (void* element_1, void* element_2) 
{
    return (*((int*)element_1) > *((int*) element_2));
}



int search (void* begin, void* end, size_t elementsize, void* element, bool (*compare)(void* , void* )) 
{
    for ( int i = 0 ; begin != end; begin += elementsize,  ++i ) 
    {
        if (compare(begin, element)) 
        { 
            return i;			
        }
    }
    return -1;	
}


int main () {

    char charArray[] = "polivinilacetat";
    char symbol = 'n';

    int index_result = search (charArray, charArray + 14, sizeof(char), &symbol, equal_char );
    std::cout<<"\nElement index equal n is "<< index_result <<std::endl;  

    double doubleArray[] = {5.6, 3.0, 3.0, 3.0, 7.6};
    double compare_num = 6.0;

    index_result = search (doubleArray, doubleArray + 5, sizeof(double), &compare_num, double_compare);
    std::cout<<"\nElement index equal > 6.0 is "<< index_result <<std::endl;	

    int intArray[] = {1, 5, 6, 9, 0};
    int A = 6;

    index_result = search (intArray, intArray + 5, sizeof(int), &A, int_1);
    std::cout<<"\nElement index equal > 6 is "<< index_result <<std::endl;	

    return 0;
}
