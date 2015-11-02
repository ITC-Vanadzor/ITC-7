// determines the Sum of max and min
# include <iostream>

void  MinOrMax(int* number,  const int &quantityNumbers, int &min, int &max){

	min=number[0];
        max=number[1];
        
	int currentNumberofMin=0;
        int currentNumberofMax=1;
		while(currentNumberofMin<quantityNumbers){
 		  if(min > number[currentNumberofMin]) 
                      {
                       min =number[currentNumberofMax];
                      } 
   
                  currentNumberofMax+=2;
                  currentNumberofMin+=2;
		}
 	
             }


  int Sum(const int& minimum,const int& maximum){
     int sum=minimum+maximum;
     return sum;
    } 

int main()
{


int quantityOfNumbers=-1;
	do{

   	 std::cout<<"Enter the quantity of Numbers\t";
   	 std::cin>>quantityOfNumbers;
  	}while(quantityOfNumbers<=1);

   int Numbers[100]={};

  for(int i=0; i<quantityOfNumbers; ++i){
      int number;
      std::cout<<"Enter Number\t";
      std::cin>>number;
      Numbers[i]=number;
    }
 
    int min;
    int max;
    MinOrMax(Numbers, quantityOfNumbers, min, max);
    std::cout<<"min\t"<<min<<std::endl;
    std::cout<<"max\t"<<max<<std::endl;
    int sum= Sum(min, max);
   std::cout<<"The sum of min and max will be\t"<< sum<< std::endl;
return 0;
}
       


