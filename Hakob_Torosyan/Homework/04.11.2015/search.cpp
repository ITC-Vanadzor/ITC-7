#include <iostream>

bool equal_char (void* element_1, void* element_2 ) {
	return  (*((char*)element_1) == *((char*) element_2));
}

bool double_compare (void* element_1, void* element_2) {
	return (*((double*)element_1) >  *((double*) element_2));
}

bool int_compare (void * element_1, void * element_2) {
	return (*((int*)element_1) == *((int*)element_2));
}

int search (void* begin, void* end, size_t elementsize, void* element, bool (*compare)(void* , void* )) 
{
	for ( int i = 0; begin != end; begin += elementsize,  ++i )  {
		if (compare(begin, element)) { 
				return i;			
		}
	}
	return -1;	
}


int main () {
	
	char charArr[]="linuxubuntu";
	char symbol = 'n';
	int index_result1 = search (charArr, charArr + 10, sizeof(char), &symbol, equal_char);
	std::cout << "\n Element index equal n is " << index_result1 << std::endl;  

	double doubleArr [] = {5.6, 3.0, 3.0, 3.0, 7.6};
	double compare_num = 6.0;
 	int index_result2 = search (doubleArr, doubleArr + 5, sizeof(double), &compare_num, double_compare);
	std::cout << "\n Element index equal > 6.0 is " << index_result2 << std::endl;	
	
	int intArr [] = {1, 5, 89, 7, 10, 77, 12};
	int intNumber = 2;
	int index_result3 = search (intArr, intArr + 6, sizeof(int), &intNumber, int_compare);
	std::cout << "\n Element intdex equal 2 is " << index_result3 << std::endl;



return 0;
}
