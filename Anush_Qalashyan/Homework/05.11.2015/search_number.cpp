#include <iostream>

bool int_1 (void* element1, void* element2) 
{
    return (*((int*)element1) == *((int*) element2));
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


int main () 
{

    int intArray[] = {2, 3, 8, 20, 25};
    std::cout << "{2, 3, 8, 20, 25}" << std::endl;
    int search_number ;
    std::cout << "search number = " ;
    std::cin >> search_number;	
    int index_result = search (intArray, intArray + 5, sizeof(int), &search_number, int_1);
    std::cout<< "index result = " << index_result <<std::endl;	

    return 0;
}
