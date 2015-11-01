// The program determines the count of numbers, int which  there is no 2 Nulls
# include <iostream>
#include <cmath>
static int K;
   
   


   int TheQuantityOfNumbers(int n, int k) {
      if(n==0){
           return 0;
              }
  
      else if(n == 1){
             return k;// ete mianish e tiv@, apa voroneli qanakutyun@ klini k hat
             }

     else   if(n == 2 ){
             return (pow(k,n)-1);//ete erknish tver en, voroneli qanakutyun@ klini erknish bolor tver@ bacarutyamb `00
                      }
      else {
            return  pow(k-1,n-1)*TheQuantityOfNumbers(n - 1,k) + pow(k-1,n-2)*TheQuantityOfNumbers(n - 2,k);// ete verjanum e 0-ov apa dra naxord tiv@ petq e lini cankacats tiv [1,K] mijakayqic,  isk erb tiv@ verjanum e kamayakan [1,K] tvov, apa naxord@ karox e linel [0,K] mijakayqic cankacats tiv
           }
}



int main()
{
//int K;
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
