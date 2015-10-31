// The programm determines the count of sorting rooks in chest providing, that these rooks won't meet each other
#include<iostream>

int factorial(int n)
{
	if (n == 1){
		return 1;
	}
	else 
	{
		return n*factorial(n - 1);
	}
}

int CountOfSorting( int Chestsize, int  RooksCount){
	int countOfSorting=Chestsize*Chestsize;
	  if(RooksCount>1){		  
		 return  countOfSorting*CountOfSorting( Chestsize-1,  RooksCount-1);
	    }
	  else{
			return countOfSorting;
	    }
}
	


int main()
{
	int countOfRooks = -1;
	int SizeofCest = -1;
		do{
			std::cout << "Enter the size of chest  beetween (1,8) N*N\t";
			std::cin >> SizeofCest;
			std::cout << "Enter the count of rooks  between (1,SizeofCest)\t";
			std::cin >>countOfRooks;
		
			} while (countOfRooks  <= 0 || countOfRooks > SizeofCest || SizeofCest <= 0 || SizeofCest > 8);
	
	 int answer= CountOfSorting(SizeofCest,countOfRooks)/factorial(countOfRooks);

	 std::cout << "The count of sorting rooks in our chest will be\t"<<answer <<std::endl;
	  
	 return 0;
}