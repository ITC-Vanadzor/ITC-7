#include <iostream>

bool int_compare(void* element_1, void* element_2)
{
	return (*((int*) element_1) = *((int*) element_2));
}


bool double_compare(void* element_1, void* element_2)
{
	return (*((double*) element_1) = *((double*) element_2));
}


bool char_compare(void* element_1, void* element_2)
{
	return (*((char*) element_1) = *((char*) element_2));
}


int search(int index_in, void* begin, void* end, int elementsize, void* element, bool(*compare)(void*, void*))
{
	for (int i=index_in; begin!=end; begin+elementsize, ++i)
		{
			if (compare(begin, element) )
				{
					return i;
					}
			}
	return -1;	
	}

int main()
{
	int int_array [] = {1, 4, 7, 8, 12, 34};
	double double_array [] = {5.3, 6.1, 9.8, 11.1};
	char char_array [] = { 'a', 'b', 'c', 'd', 'e', 'f'};

	int int_symbol=34;
	int int_index_in;
	if (int_symbol>=8 )
		{
		 	int_index_in=4;
		} else {
			int_index_in=1;
				}
	int int_index_result=search(int_index_in, int_array, int_array+6, sizeof(int), &int_symbol, int_compare);
	std::cout<<"Searching Element's index is:"<<int_index_result<<std::endl;


	int double_symbol=9.8;
	int double_index_in;
	if (double_symbol>=6.1) 
			{
			double_index_in=2;
			} else {
			double_index_in=1;
					}
				
	int double_index_result=search(double_index_in, double_array, double_array+4, sizeof(double), &double_symbol, double_compare);
	std::cout<<"Searching Element's index is:"<<double_index_result<<std::endl;

	int char_symbol='e';
	int char_index_in;
	if (char_symbol>='d' )
			{
			char_index_in=4;
			} else {
			char_index_in=1;
					}
	int char_index_result=search(char_index_in, char_array, char_array+6, sizeof(char), &char_symbol, char_compare);
	std::cout<<"Searching Element's index is:"<<char_index_result<<std::endl;

return 0;
}