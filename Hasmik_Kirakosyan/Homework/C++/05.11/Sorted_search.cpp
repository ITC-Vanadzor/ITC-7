#include <iostream>


int comparation_char (void* element_1, void* element_2) {
    if (*((char*)element_1) == *((char*) element_2)) return 1;
       else if (*((char*)element_1) > *((char*) element_2)) return 2;
               else return 3;                              
}


int comparation_double (void* element_1, void* element_2) {
    if (*((double*)element_1) == *((double*) element_2)) return 1;
       else if (*((double*)element_1) > *((double*) element_2)) return 2;
               else return 3;                              
} 


int comparation_int (void* element_1, void* element_2) {
    if (*((int*)element_1) == *((int*) element_2)) return 1;
       else if (*((int*)element_1) > *((int*) element_2)) return 2;
               else return 3;                              
}

int search (void* begin, void* end, size_t elementsize, void* element, int (*compare)(void* , void* )) 
{
    if(*((int*)begin)+*((int*)end)==1) return -1;
    void* middle =(void*) ((*((char*)begin)+*((char*)end))/2);
    
	for ( int i = 0 ; begin != end; begin += elementsize,  ++i )  {
	    
		if (compare(middle, element)==1) { 
				return i;			
		}
		else if (compare(middle, element)==2) {
             return search (begin, middle, elementsize,element, compare);
        }
        else {
             return  search (middle, end , elementsize, element, compare);
             }        
	}

}

int main () {
	
	char charArr[]=" GHJKLMNPQRS";
	char symbol = 'N';	
    int index_result = search (charArr, charArr + 11, sizeof(char),&symbol, comparation_char);
    std::cout<<"\n Element index equal 'N' is "<< index_result <<std::endl;  

	int intArr [] = {2, 3, 4, 5, 6};
	int compare_num = 6;
    index_result = search (intArr, intArr + 4, sizeof(int),  &compare_num, comparation_int);
	std::cout<<"\n\n Element index equal 6 is "<< index_result <<std::endl;
    
    double doubleArr[]={2.4, 3.7, 6.8, 9.0, 10.1};
	double compare_double_num = 6.8;	
    index_result = search (charArr, charArr + 4, sizeof(double), &compare_double_num, comparation_double);
    std::cout<<"\n\n Element index equal 6.8 is "<< index_result <<std::endl;  	


char ch;
std::cin>>ch;

return 0;
}
