#include <iostream>
// begin -pointer to array first element 
// end  -pointer to array last element
// element - searching element 
// compare - if function is true, return array element value

bool isEqual (void* a) {  // Function Equal 5.5
             int*  temp= reinterpret_cast<int*>(a);
             return (*temp==5);
     }
bool isMoreThan (void* a)  {  // Function for finding is the number >7
             int*  temp= reinterpret_cast<int*>(a);
             return (*temp>7);
     }   


int search (void* begin, void* end, int elementSize,  bool(*compare)(void* element)) {
    
    int* i = reinterpret_cast<int*>(begin);
    int* ending = reinterpret_cast<int*>(end);
 
    int arr_size=ending-i; //  Find the size of array by end address and begin addres
    for (int j=1; j<=arr_size; i+=elementSize, j++) {
        if (compare(i)) {
                              return j;                              
        }
    }
}

int main () {
    int a[4]={1,8,20,6};
    int b[7];
    std::cout<<"Please, input 7 integer elements of the second array ";
    for (int i=0; i<7; ++i) {
        std::cin>>b[i];
    }
    
    
    bool(*functionEqual)(void*);
    functionEqual = isEqual;
    
    bool(*functionMoreThan7)(void*);
    functionMoreThan7 = isMoreThan;
    
    std::cout<<"First element index that is more than 7 is : "<<search (&a, &a[3], sizeof(int), functionMoreThan7);
    std::cout<<"\n\n First element index that is equal 5.5 is "<<search (&b, &b[6], sizeof(double), functionEqual);
    
    
 char ch;
 std::cin>>ch;
 return 0;   
}
