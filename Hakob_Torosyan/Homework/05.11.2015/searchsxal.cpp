#include <iostream>


int double_compare (void* element_1, void* element_2) {
	
	if(*((double*)element_1) ==  *((double*)element_2))
	return 1;
	if(*((double*)element_1) <  *((double*)element_2))
	return 2;
	if(*((double*)element_1) >  *((double*)element_2))
	return 3;
}

int int_compare (void* element_1, void* element_2) {
	
	if(*((int*)element_1) ==  *((int*)element_2))
	return 1;
	if(*((int*)element_1) <  *((int*)element_2))
	return 2;
	if(*((int*)element_1) >  *((int*)element_2))
	return 3;
}



int search(int* begin, int end, size_t elementsize, void* element, int (*compare)(void* ,void* ))
{
	
	int* mid = begin + elementsize*end / 2;
		
	if (compare(mid,element) == 1){
		return mid;
	}
	if (compare(mid,element) == 2){
		return search(mid + elementsize,  end,  elementsize, element, compare(mid+elementsize, element));
	}	
	if (compare(mid,element) == 3){
		return search(begin, (mid - elementsize), elementsize,  element,  compare(mid-elementsize, element ));
	}	
	return -1;
}

int main () {
	
	double doubleArr [] = {5.6, 5.8, 7.6, 8.0, 9.6};
	double doubleNumber = 7.6;
 	int index_result2 = search (doubleArr, doubleArr + 4, sizeof(double), &doubleNumber, double_compare);
	std::cout << "\n Element index equal  7.6 is " << index_result2 << std::endl;	
	
	int intArr [] = {1, 5, 7, 9, 10, 77, 89};
	int intNumber = 2;
	int index_result3 = search (intArr, intArr + 6, sizeof(int), &intNumber, int_compare);
	std::cout << "\n Element intdex equal 2 is " << index_result3 << std::endl;



return 0;
}
