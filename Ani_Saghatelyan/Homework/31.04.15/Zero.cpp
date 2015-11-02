// The program determines the count of numbers, int which  there is no 2 Nulls
# include <iostream>
#include <cmath>
static int K;
   
   


   int TheQuantityOfNumbers( int n,  int k) {
     
          double quantity= ((k-1)*(pow(k,n-1) -pow(k,n-3)));
          return  quantity;
         }



int main()
{
  int K;
  int N;

   do{     
        
	std::cout<<"Enter K beetween[2,10]\t";
	std::cin>>K;
	
	std::cout<<"Enter N between[2,18-K]\t"; 
	std::cin>>N;
     }while(K<2 || K>10 || N<2 || (N+K)>18);

    

    std::cout<<"The quantity of numbers, in which there is no 2 Nulls in sequence\t"<<TheQuantityOfNumbers(N, K)<<std::endl;
return 0;
}
