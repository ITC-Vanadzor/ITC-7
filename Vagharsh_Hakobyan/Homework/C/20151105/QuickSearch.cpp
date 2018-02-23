#include <iostream>

bool double_less (void* element_1, void* element_2) {
     return (*((double*)element_1) <  *((double*) element_2));
}

bool double_equal (void* element_1, void* element_2) {
     return (*((double*)element_1) ==  *((double*) element_2));
}

bool double_greater (void* element_1, void* element_2) {
     return (*((double*)element_1) >  *((double*) element_2));
}

int search (void* begin, void* end, size_t elementsize, void* element, bool (*compare)(void* , void* ))
{
    void* i = begin; void* j = end;
    void* middle=(i+j)/2;
    if (compare(middle, element))
       {
       return i;
       }


}

int main () {
    double doubleArr [] = {3.1, 3.5, 5.7, 6.8, 7.6};
    double compare_num = 6.8;
    index_result = search (doubleArr, doubleArr + 4, sizeof(double), &compare_num, double_equal);
    std::cout<<"\n Element index equal > 6.0 is "<< index_result <<std::endl;
    return 0;
}