#include <iostream>

int main()
{    //In start we will give value of dimension for example it will be 4
	const int dimension=4;
	int massive[dimension], number_of_combinations=1;
	int member_of_massive;

	std::cout << " We will have "; 
	//With this cycle we will give number of combinations 
	for(int n = 1; n <=dimension; n++)
	{
		number_of_combinations = number_of_combinations * 2;
	}
	std::cout << number_of_combinations << " number of variants" << std::endl;
	std::cout << "Now insert members of massive ";

	for(int k = 0; k < dimension; k++)
	{		
		std::cin >> member_of_massive;
		massive[k] = member_of_massive;	
		
	}
	
	std::cout << std::endl;
	std::cout << 0 << std::endl;
	//With this cycle we will transform number from 10 dimensional to 2 dimensional and 
	//with cycle, wich located inside this cycle we will give every possible subsets
	//for imported values
	for( int i = 0; i < number_of_combinations; i++)
	{
		int temporary_value = i,  two_dimensional_value = 0, p = 1;
		
		while(temporary_value!=0)
		{
			two_dimensional_value = two_dimensional_value +  p * (temporary_value%2);
			p = p * 10;
			temporary_value = temporary_value/2;
		}
	
		for(int j = dimension; j >=1; j--)
		{
			if(two_dimensional_value%10 == 1)
			{
				cout << massive[j-1] << " ";			
			}
			two_dimensional_value/= 10;
			
			if(two_dimensional_value == 0) 
				break;
			
		}
		std::cout << std::endl;			
	}
		
	return 0;
}


