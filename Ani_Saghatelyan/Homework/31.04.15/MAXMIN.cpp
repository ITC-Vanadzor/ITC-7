// determines the Sum of max and min
# include <iostream>

int Min(int* number, int quantityNumbers){

	int min=*(number);
	int currentNumber=0;
		while(currentNumber<quantityNumbers){
 		  if(min > *(number+currentNumber)) 
                      {
                       min =*(number+currentNumber);
                      } 
                  currentNumber+=2;
		}
 	return min;
  }

int Max(int* number, int quantityNumbers){

	int max=*(number+1);
	int currentNumber=1;
		while(currentNumber<quantityNumbers-1){
 		  if(max < *(number+currentNumber)) 
                      {
                       max =*(number+currentNumber);
                      } 
                  currentNumber+=2;
		}
 	return max;
  }

  int Sum(int minimum, int maximum){
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
 
   int min=Min(Numbers,quantityOfNumbers );
    std::cout<<"min\t"<<min<<std::endl;
   int max=Max((Numbers),quantityOfNumbers);
    std::cout<<"max\t"<<max<<std::endl;
   int sum= Sum(min, max);
   std::cout<<"The sum of min and max will be\t"<< sum<< std::endl;
return 0;
}
       


