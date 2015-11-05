#include <iostream>
//kisat :((( 

void Equal(void*, void*);
void Greater(void*, void*);
void Less (void*, void*);
//int search(void*b, void* e, int elemrnt_size, void* element, bool (compare[])(void*, void*)) 
int main () {
    int IntArray[9] = {6, 5, 12, 1, 0, -5, 8, -2};
    double DoubleArray[9] = {1.1, 0, 5.13, -6.73, 2, 4.05, 7, -1.39};
    std::cout << "Int Array`  ";
    for (int i=0; i< 9; ++i) {
	std::cout << IntArray[i] << "\t";
    }
    std::cout << "\nDouble Array`  ";
    for (int i=0; i< 9; ++i) {
	std::cout << DoubleArray[i]<< "\t";
    }

    void* b;
    void* e;
    bool fquit=false;
    void* element;
    int element_size;
    char Type;
    std::cout<< "Mutqagreq pntrvox popoxakani tip@` (D) Double, (I) int ";
    std ::cin >> Type;
    if (Type=='D') {
	double double_x;
	element = (double*)&double_x;
	element_size = sizeof(double_x);
	b=(double*)DoubleArray;
	e=(double*)(DoubleArray+9);
    }
    if (Type=='I') {
	int int_x;
	element = (int*)&int_x;
	element_size = sizeof(int_x);
	b=(int*)intArray;
	e=(int*)(IntArray+9);
    }
    bool (*compare) (void*, void*);

    char Operator;
    std::cout << "Pahanjvox gorcoxutyun@ (>, <, kam =)`  ";
    std::cin >> Operator;
    if (Operator == '>') {
	compare = Greater;
    }
    if (Operator == '<') {
	compare = Less;
    }
    if (Operator == '=') {
	compare = Equal;
    }
    // search(b,e,element_size,element, compare);
    return 0;
}

bool  Equal(void* a, void* b){
    return (*a== *b);
}
bool  Greater(void* a, void* b){
    return (*a > *b);
}
bool  Less (void* a, void* b){
    return (*a < *b);
}


