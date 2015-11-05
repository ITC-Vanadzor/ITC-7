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

void Print(double array[], int n){ // prints array of type int
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

bool Equival(void* a, void* b){// equival to 5.5;

    double*  Adouble=reinterpret_cast < double* > (a);
    double*  Bdouble=reinterpret_cast < double* > (b);
      return(*Adouble==*Bdouble);
      
}

bool Small(void* a, void* b){// less than 3.6

    float* Afloat=reinterpret_cast < float* > (a);
    float* Bfloat=reinterpret_cast < float* > (b);
     return(*Afloat<*Bfloat);
     
}


bool Search(void* array,  void * arrayEnds, int sizeOfElements, void* element, bool (*Compare)(void*, void*)){

  

    if ( sizeOfElements == sizeof(int) ) { 

         int* IntArray = reinterpret_cast < int* > (array) ;// The type of array from void* gets int*
         int* first=reinterpret_cast < int* > (array); 
         int* last=reinterpret_cast < int* > (arrayEnds);

          for ( int i=0 ; first < last ; ++first, ++i ) {

               if ( Compare ( first, element)) {
  
                   std::cout << " That element is\t " << i << "-th  element in array, which is = " << IntArray[i] << std::endl ;
                   break;
             }
                
         }
       }
  if ( sizeOfElements == sizeof(float) ) { // The type of array from void* gets float*

         float* floatArray = reinterpret_cast < float* > (array) ;
         float* first=reinterpret_cast < float* > (array); 
         float* last=reinterpret_cast < float* > (arrayEnds);

          for ( int i=0 ; first < last ; ++first, ++i ) {

               if ( Compare ( first, element)) {
  
                   std::cout << " That element is\t " << i << "-th  element in array, which is = " << floatArray[i] << std::endl ;
                   break;
               }
                
             }
         }
     if ( sizeOfElements == sizeof(double) ) {// The type of array from void* gets double*

         double* DoubleArray = reinterpret_cast < double* > (array) ;
         double* first=reinterpret_cast < double* > (array); 
         double* last=reinterpret_cast < double* > (arrayEnds);

          for ( int i=0 ; first < last ; ++first, ++i ) {

               if ( Compare ( first, element)) {
  
                   std::cout << " That element is\t " << i << "-th  element in array, which is = " << DoubleArray[i] << std::endl ;
                   break;
             }
                
         }
       }    
  
}		
   

int main()
{

   bool (*Compare[3])(void*, void*);

   int ArrayInt[6]={3,5,1,7,9,11};
   Print(ArrayInt,6);  
   Compare[0]=&Big;
   Search(ArrayInt, ArrayInt+5, sizeof(int), reinterpret_cast < int* > (7), Compare[0]);

   float ArrayFloat[6]={1.6,2.8,5.7,6.8,0.2,9.7};
   Print(ArrayFloat,6);
   Compare[1]=&Small;
  //Search(ArrayFloat, ArrayFloat+5, sizeof(float), reinterpret_cast < float* > (3.6), Compare[1]);
   Print(ArrayFloat,6);
 
   double  ArrayDouble[6]={-3.8,5.5,5.7,2.1,3.56,0.008};
   Print(ArrayDouble,6);
   Compare[2]=&Equival;
  // Search(ArrayDouble, ArrayDouble+5, sizeof(double), reinterpret_cast < double* > (5.5),Compare[2]);
   Print(ArrayDouble,6);


return 0;
}
