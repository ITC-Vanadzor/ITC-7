#include <iostream>



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
      
      
  for(int i=0; i<3; ++i){
 	 for(int j=0; j<3; ++j){
   
     		 std::cout<<Array[i][j]<<" ";
     
      }
      std::cout<<std::endl;
      }
      std::cout<<std::endl;
  Swap(Array);
 
 
     
      return 0;
      }
