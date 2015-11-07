#include <iostream>
// Segmentation fault :(((

int Compare_int (void*Element1, void* Element2) {
    if (*((int*)Element1) == *((int*)Element2)) {
	return 0;
    } else {
	if (*((int*)Element1) > *((int*)Element2)) { 
	    return 1;
	} else {
	    return -1;
	}
    }
}
int Compare_double (void*Element1, void* Element2) {
    if (*((double*)Element1) == *((double*)Element2)) {
	return 0;
    } else {
	if (*((double*)Element1) > *((double*)Element2)) { 
	    return 1;
	} else {
	    return -1;
	}
    }
}
int Compare_char (void*Element1, void* Element2) {
    if (*((char*)Element1) == *((char*)Element2)) {
	return 0;
    } else {
	if (*((char*)Element1) > *((char*)Element2)) { 
	    return 1;
	} else {
	    return -1;
	}
    }
}
int search(void*begin, void* end, size_t element_size, void* element, int (*compare)(void*, void*)) {
    int count = 0;
    for (int i = 0; begin != end; begin += element_size, ++i) {
	++count;
    }
    void* mijin;
    if (count%2==0) {
	mijin = (void*) ((int*) begin + count*element_size/2);
    } else {
	mijin = (void*) ((int*) begin + (count-1)*element_size / 2);
    }
    if (compare(mijin, element) < 0) {
	search(begin, mijin, element_size, element, compare);
    } else {
	if (compare(mijin, element) > 0) {
	    search(mijin, end , element_size, element, compare);
	} else {
	    return count;
	}
    }
    return -1;
}

int main () {
    int IntArray[] = {5, 6, 12, 15, 18, 25, 28, 35};
    double DoubleArray[] = {1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1};
    char CharArray[] = "abcdefgh";
    char Type;
    std::cout<< "Mutqagreq pntrvox popoxakani tip@` (D) Double, (I) int, (C) char ";
    std ::cin >> Type;
    int index_result;

    if (Type == 'D') {
	for (int i = 0; i<8; ++i) {
	    std::cout << DoubleArray[i] << "\t";
	}
	double double_x;
	std:: cout << "\ndouble_x= ";
	std::cin >> double_x; 
	index_result = search(DoubleArray, DoubleArray + 8, sizeof(double), &double_x, Compare_double);
    }
    if (Type == 'I') {
	for (int i = 0; i<8; ++i) {
	    std::cout << IntArray[i] << "\t";
	}
	int int_x;
	std:: cout << "\nint_x= ";
	std::cin >> int_x; 
	index_result = search(IntArray, IntArray + 8, sizeof(int), &int_x, Compare_int);
    }
    if (Type == 'C') {
	for (int i = 0; i<8; ++i) {
	    std::cout << CharArray[i] << "\t";
	}
	char char_x;
	std:: cout << "\nchar_x= ";
	std::cin >> char_x; 
	index_result = search(IntArray, IntArray + 8, sizeof(char), &char_x, Compare_char);
    }
    std::cout << "/n Element index is " << index_result << std::endl;
    return 0;
}


