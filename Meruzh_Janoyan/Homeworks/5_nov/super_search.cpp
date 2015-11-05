#include <iostream>

bool equal_char (void* element_1, void* element_2 ) {
	return  (*((char*)element_1)-*((char*) element_2));
}

bool equal_double (void* element_1, void* element_2) {
	return (*((double*)element_1) -  *((double*) element_2));
}

bool equal_int (void* element_1, void* element_2) {
	return (*((int*)element_1) -  *((int*) element_2));
}


bool search (void* begin, void* end, int elementsize, void* element, bool (*compare)(void* , void* )) 
{
	bool result=false;
	int length=((char*)end-(char*)begin);
	int half=(length%2)?(length/2)+1:length/2;
	void *tmp=(char*)begin+half;

	if(length<1) return !compare(tmp, element) ;

	if (compare(tmp, element)<0) { 
				result=search(begin,tmp,elementsize,element,compare);			
		}
	else if(compare(tmp, element)>0){
				result=search(tmp,end,elementsize,element,compare);
	}
	else{
		return true;
	}
}


int main () {
	
	char charArr[]="123056789";
	char symbol = '7';
	
	bool result = search (charArr, charArr + 8, sizeof(char), &symbol, equal_char );
	std::cout<<"\n Char result  "<< result <<std::endl;  

	double doubleArr [] = {1.2, 3.4, 3.7, 3.9, 7.5};
	double compare_num = 3.9;
	result = search (doubleArr, doubleArr + 4, sizeof(double), &compare_num, equal_double);
	std::cout<<"\n Double result "<<result <<std::endl;	



return 0;
}
