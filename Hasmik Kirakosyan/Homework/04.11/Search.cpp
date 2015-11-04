#include <iostream>
// begin -pointer to array first element 
// end  -pointer to array last element
// element - searching element 
// compare - if function is true, return array element value

bool isEqual (void* a) {  // Function Equal 6.0
             double*  temp= reinterpret_cast<double*>(a);
             return (*temp==6.0);
     }
bool isMoreThan (void* a)  {  // Function for finding is the number >7
             int*  temp= reinterpret_cast<int*>(a);
             return (*temp>7);
     }   


int search (void* begin, void* end, int elementSize,  bool(*compare)(void* element)) {
    
    double* i = reinterpret_cast<double*>(begin);
    double* ending = reinterpret_cast<double*>(end);
 
    int arr_size=(int(end)-int(begin))/elementSize;
    std::cout<<"\n Array size : "<<arr_size;  //  Find the size of array by end address and begin addres
    for (int j=1; j<=arr_size; i+=1, j++) {
        if (compare(i)) {
                              return j;                              
        }
    }
}

int main () {
    int a[4]={1,8,20,6};
    double b[7];
    std::cout<<"Please, input 7 double elements of the second array ";
    for (int i=0; i<7; ++i) {
        std::cin>>b[i];
    }
    
    
    bool(*functionEqual)(void*);
    functionEqual = isEqual;
    
    bool(*functionMoreThan7)(void*);
    functionMoreThan7 = isMoreThan;
    
    std::cout<<"\n\n First element index that is equal 6.0 is "<<search (&b, &b[7], sizeof(double), functionEqual)<<std::endl;
    
    std::cout<<"\nArray of ints ";
    for (int i=0; i<4; ++i) {
        std::cout<<" "<<a[i];
    }
    std::cout<<"\nFirst element index that is more than 7 is : "<<search (&a, &a[4], sizeof(int), functionMoreThan7);
    
    
 char ch;
 std::cin>>ch;
 return 0;   
}
