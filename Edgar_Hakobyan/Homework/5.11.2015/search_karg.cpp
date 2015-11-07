#include <iostream>

int int_equal(void* mijin, void* element)
{
	if ( (reinterpret_cast<int*>(mijin) ) == (reinterpret_cast<int*>(element) ) ) return 0;
	if ((reinterpret_cast<int*>(mijin) ) <  (reinterpret_cast<int*>(element) ) ) return 1;
	return 2;
}

int double_equal(void* mijin, void* element)
{
	if ((reinterpret_cast<double*>(mijin) ) == (reinterpret_cast<double*>(element) ) ) return 0;
	if ((reinterpret_cast<double*>(mijin) ) < (reinterpret_cast<double*>(element) )) return 1;
	return 2;
}


int search(void* begin, void* end, size_t element_size, void* element, int (*compare)(void*,void*) )
{
	void* mijin = (void*) ((*((char*)begin)+*((char*)end))/2);
	for( int i = 0 ; begin != end; begin += element_size,  ++i )
	{
		if(compare(mijin, element) == 0) 
		{
			return i;
		}
		if(compare(mijin, element) == 1) 
		{
			search(mijin, end, element_size, element, compare);
		}
		else
		{
			search(begin, mijin, element_size, element, compare);
		}
	}
}

int main()
{
	int index;
	
	int int_array[] = {2, 4, 9, 7, 9, 10};
	int int_compare_number = 9;
	index = search(int_array, int_array+5, sizeof(int), &int_compare_number, int_equal);
	std::cout<<"9-in havasar elementi index@: "<<index;
	
	double double_array[] = {1.5, 2.6, 7.6, 8.2, 9.4};
	double double_compare_number = 8.2;
	index = search(double_array, double_array + 4, sizeof(double), &double_compare_number, double_equal);
	std::cout<<"8.2-in havasar elementi index@: "<<index;
	return 0;
}