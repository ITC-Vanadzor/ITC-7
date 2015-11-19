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





bool Big(void* a, void* b){// more than 7

    int*   Aint=reinterpret_cast < int* > (a);
   int*   Bint=reinterpret_cast < int* > (b);
     return(*Aint>*Bint);
}

bool Equival(void* a, void* b){// equival to 'n'

    char*  Adouble=reinterpret_cast < char* > (a);
    char*  Bdouble=reinterpret_cast < char* > (b);
      return(*Adouble==*Bdouble);
      
}

bool Small(void* a, void* b){// less than 3.6

    float* Afloat=reinterpret_cast < float* > (a);
    float* Bfloat=reinterpret_cast < float* > (b);
     return(*Afloat<*Bfloat);
     
}


 int Search(void* array,  void * arrayEnds, size_t sizeOfElements, void* element, bool (*Compare)(void*, void*)){

 
	for ( int i = 0 ; array != arrayEnds; array+= sizeOfElements,  ++i )  {
		if (Compare(array, element)) { 
				return i;			
		}
	}
	return -1;	   
  
}		
   

int main()
{

   int ArrayInt[6]={3,5,1,7,9,11};
   Print(ArrayInt,6);  
   int valueInt=7;
   int answerInt=Search(ArrayInt, ArrayInt+5, sizeof(int), &valueInt,Big);
   std::cout<<"The index of element, which is more than 7 is\t"<<answerInt<<std::endl;

 
   float ArrayFloat[6]={1.6,2.8,5.7,6.8,0.2,9.7};
   Print(ArrayFloat,6);  
   float valueFloat=3.6;
   int answerFloat=Search(ArrayFloat, ArrayFloat+5, sizeof(float), &valueFloat,Small);
   std::cout<<"The index of element, which is more  less than 3.6 is\t"<<answerFloat<<std::endl;
 
  char ArrayChar[]="Elen";
  Print(ArrayChar,5);
  char valueChar = 'n';
  int answerChar=Search(ArrayChar, ArrayChar+5, sizeof(char), &valueChar,Equival);
  std::cout<<"The index of element, which is equival to 'n' is\t"<<answerChar<<std::endl; 

return 0;
}
