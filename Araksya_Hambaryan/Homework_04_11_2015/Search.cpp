#include <iostream>


bool Equal_int (void*Element1, void* Element2) {
    return (*((int*)Element1) == *((int*)Element2));
}
bool Equal_double (void*Element1, void* Element2) {
    return (*((double*)Element1) == *((double*)Element2));
}
bool Less_int (void*Element1, void* Element2) {
    return (*((int*)Element1) < *((int*)Element2));
}
bool Less_double (void*Element1, void* Element2) {
    return (*((double*)Element1) < *((double*)Element2));
}
bool Greater_double (void*Element1, void* Element2) {
    return (*((double*)Element1) > *((double*)Element2));
}
bool Greater_int (void*Element1, void* Element2) {
    return (*((int*)Element1) > *((int*)Element2));
}

int search(void*begin, void* end, size_t element_size, void* element, bool (*compare)(void*, void*)) {
    for (int i = 0; begin != end; begin += element_size, ++i) {
	if (compare(begin, element)) {
	    return i;
	}
    }
    return -1;
}

int main () {
    int IntArray[] = {6, 5, 12, 1, 0, -5, 8, -2};
    double DoubleArray[] = {1.1, 0.0, 5.13, -6.73, 2.0, 4.05, 7.0, -1.39};
    char Type;
    std::cout<< "Mutqagreq pntrvox popoxakani tip@` (D) Double, (I) int ";
    std ::cin >> Type;
    char Operator;
    std::cout << "Pahanjvox gorcoxutyun@ (>, <, kam =)`  ";
    std::cin >> Operator;
    int index_result;

    if (Type == 'D') {
	double double_x;
	std:: cout << "double_x= ";
	std::cin >> double_x; 
	if (Operator == '>') {
	    index_result = search(DoubleArray, DoubleArray + 8, sizeof(double), &double_x, Greater_double);
	}
	if (Operator == '<') {
	    index_result = search(DoubleArray, DoubleArray + 8, sizeof(double), &double_x, Less_double);
	}
	if (Operator == '=') {
	    index_result = search(DoubleArray, DoubleArray + 8, sizeof(double), &double_x, Equal_double);
	}
    }
    if (Type == 'I') {
	int int_x;
	std:: cout << "int_x= ";
	std::cin >> int_x; 
	if (Operator == '>') {
	    index_result = search(IntArray, IntArray + 8, sizeof(int), &int_x, Greater_int);
	}
	if (Operator == '<') {
	    index_result = search(IntArray, IntArray + 8, sizeof(int), &int_x, Less_int);
	}
	if (Operator == '=') {
	    index_result = search(IntArray, IntArray + 8, sizeof(int), &int_x, Equal_int);
	}
    }
    std::cout << "/n Element index is " << index_result << std::endl;
    return 0;
}


