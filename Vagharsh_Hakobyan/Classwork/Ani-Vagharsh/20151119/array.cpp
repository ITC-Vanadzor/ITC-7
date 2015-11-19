#include <iostream>


void Print(int Array[3][3]){
        
  for(int i=0; i<3; ++i){
 	 for(int j=0; j<3; ++j){
   
     		 std::cout<<Array[i][j]<<" ";
     
      }
      std::cout<<std::endl;
      }
      std::cout<<std::endl;
  }

void Swap(int Array[3][3]){
   for(int i=0; i<3; ++i){
  	for(int j=2; j>=0; --j){
   
     	 std::cout<<Array[j][i]<<" ";
     
            }
      std::cout<<std::endl;
      }
      
  }



int main()
{

int Array[3][3];

  for(int i=0; i<3; ++i){
  	for(int j=0; j<3; ++j){
   
	      std::cout<<"Enter Array[" <<i<<"] ,["<<j<<"]\n";
    	      std::cin>> Array[i][j];
     		 }
      }
      

  Swap(Array);
  std::cout<<endl;
  Print(Array);
 
 
     
      return 0;
      }
