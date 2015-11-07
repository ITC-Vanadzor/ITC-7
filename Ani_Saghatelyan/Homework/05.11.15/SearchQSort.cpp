//using quickSort  to find the index of element in the Sorted array
# include <iostream>

void Print(int array[], int n){// prints array of type int
   for(int i=0; i<6; ++i){
       std::cout<<array[i]<<"  ";
      }
    std::cout<<std::endl;
  }

void Print(float array[], int n){// prints array of type float
   for(int i=0; i<6; ++i){
       std::cout<<array[i]<<"  ";
      }
    std::cout<<std::endl;
  }

void Print(char array[], int n){ // prints array of type char
   for(int i=0; i<6; ++i){
       std::cout<<array[i]<<"  ";
      }
    std::cout<<std::endl;
  }


int EquivalInt(void* a, void* b){// function works for type  'int' 

    int*   Aint=reinterpret_cast < int* > (a);
    int*   Bint=reinterpret_cast < int* > (b);
     if(*Aint-*Bint>0){
                  return 1;
                     }
     else if(*Aint-*Bint==0){
                  return 0;
                      }
     else if(*Aint-*Bint<0){
                 return -1;
                     }
                
}

int EquivalChar(void* a, void* b){// function works for type  'char'

    char*  Achar=reinterpret_cast < char* > (a);
    char*  Bchar=reinterpret_cast < char* > (b);
      if(*Achar-*Bchar>0){
                  return 1;
                     }
     else if(*Achar-*Bchar==0){
                  return 0;
                      }
     else if(*Achar-*Bchar<0){
                 return -1;
                     }
      
}

int EquivalFloat(void* a, void* b){// function works for type 'float'

    float* Afloat=reinterpret_cast < float* > (a);
    float* Bfloat=reinterpret_cast < float* > (b);
      if(*Afloat-*Bfloat>0){
                  return 1;
                     }
     else if(*Afloat-*Bfloat==0){
                  return 0;
                      }
     else if(*Afloat-*Bfloat<0){
                 return -1;
               }                  
     
     
}


 int Search(void* array,  void * arrayEnds,size_t sizeOfElements,  void* element, int (*Compare)(void*, void*)){
//warnings about this line,,  
 void* pivot;
 int k=((char*)arrayEnds-(char*)array)/2;// the IP of middle element
 pivot=(char*)array+k;
   
 int answer=Compare(pivot, element);
  if (answer==0) {

       for ( int i = 0 ; array != pivot; array= (char*)array+sizeOfElements, ++i ) {
         
				return i;			
		}
          }
  if(k<1){
             return -1;
             }
   else if(answer==-1) { 
       return  Search(array, pivot, sizeOfElements, &element, Compare) ;			
	     }
   else if(answer==1){
     return  Search(pivot, arrayEnds, sizeOfElements, &element,Compare) ;			
		}

}		
   

int main()
{

   int ArrayInt[6]={1,3,5,7,9,11};
   Print(ArrayInt,6);  
   int valueInt=7;
   int answerInt=Search(ArrayInt, ArrayInt+5, sizeof(int), &valueInt,EquivalInt);
   std::cout<<"The index of element, which is equival to 7 is\t"<<answerInt<<std::endl;

 
   float ArrayFloat[6]={1.3,2.0,5.3,6.4,9.8,10.8};
   Print(ArrayFloat,6);  
   float valueFloat=9.8;
   int answerFloat=Search(ArrayFloat, ArrayFloat+5, sizeof(float), &valueFloat,EquivalFloat);
   std::cout<<"The index of element, which is equival to 9.8 is\t"<<answerFloat<<std::endl;
 
  char ArrayChar[]="Elen";
  Print(ArrayChar,5);
  char valueChar = 'l';
  int answerChar=Search(ArrayChar, ArrayChar+5, sizeof(char), &valueChar,EquivalChar);
  std::cout<<"The index of element, which is equival to 'n' is\t"<<answerChar<<std::endl; 

return 0;
}
