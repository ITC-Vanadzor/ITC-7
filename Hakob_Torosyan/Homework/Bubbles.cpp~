//The game about bubbles, which playing user and computer
#include <iostream>

int main()
{
//needful variables
	int number_of_bubbles, max_pop_bubbles, insert_pop_bubbles;
	std::cout << "Please import number of bubbles to start the game. " << endl;
	std::cin >> number_of_bubbles;
	std::cout << "Thank you, now import " << endl;  
	std::cout << "the maximum number of bubbles, which can except at every turn. ";
	std::cin >> max_pop_bubbles;
    std::cout << "If you want to do first spet, import first number, else import 0 " << endl;
	std::cin >> insert_pop_bubbles;
	if( insert_pop_bubbles != 0 )
	{
	number_of_bubbles = number_of_bubbles - insert_pop_bubbles;
	std::cout << "As a result we will have " << number_of_bubbles << " bubbles " << endl;
while((max_pop_bubbles+1) < number_of_bubbles)
	 {
		if( number_of_bubbles%(max_pop_bubbles + 1) == 0 )
		{
		std::cout << "Computer will except " << max_pop_bubbles<< " bubbles" <<endl;
		number_of_bubbles = number_of_bubbles - max_pop_bubbles;
		std::cout << "As a result we will have " << number_of_bubbles << " bubbles " << endl;
		}
		else
		{
			std::cout << "Computer will except " << 1<< " bubbles" <<endl;
			number_of_bubbles = number_of_bubbles - 1;
			std::cout << "As a result we will have " << number_of_bubbles << " bubbles " << endl;
		}
		if( (max_pop_bubbles + 1) > number_of_bubbles )
			break;
		else
		{
			std::cout << "Except next quantity:  ";
			std::cin >> insert_pop_bubbles;
			number_of_bubbles = number_of_bubbles - insert_pop_bubbles;
			std::cout << "As a result we will have " << number_of_bubbles << " bubbles " << endl;
		
		}
	}
	if( (max_pop_bubbles+1) >= number_of_bubbles )
	  {	
		std::cout << "Computer will except " << number_of_bubbles - 1 << " bubbles " << endl;
		number_of_bubbles = number_of_bubbles - (number_of_bubbles - 1);
		std::cout << "As a result we will have " << number_of_bubbles << " bubbles " << endl;
		std::cout << "You lose..." << endl;
	  }

     }

else
{
	std::cout << "First step will do the computer " << endl;
	while((max_pop_bubbles+1) < number_of_bubbles)
	{
		if( number_of_bubbles%(max_pop_bubbles + 1) == 0 )
		{
		std::cout << "Computer will except " << max_pop_bubbles<< " bubbles" <<endl;
		number_of_bubbles = number_of_bubbles - max_pop_bubbles;
		std::cout << "As a result we will have " << number_of_bubbles << " bubbles " << endl;
		}
		else
		{
			std::cout << "Computer will except " << 1<< " bubbles" <<endl;
			number_of_bubbles = number_of_bubbles - 1;
			std::cout << "As a result we will have " << number_of_bubbles << " bubbles " << endl;
		}
		if( (max_pop_bubbles + 1) > number_of_bubbles )
			break;
		else
		{
			std::cout << "Except next quantity:  ";
			std::cin >> insert_pop_bubbles;
			number_of_bubbles = number_of_bubbles - insert_pop_bubbles;
			std::cout << "As a result we will have " << number_of_bubbles << " bubbles " << endl;
		
		}
	}
	if( (max_pop_bubbles+1) >= number_of_bubbles )
	{	
		std::cout << "Computer will except " << number_of_bubbles - 1 << " bubbles " << endl;
		number_of_bubbles = number_of_bubbles - (number_of_bubbles - 1);
		std::cout << "As a result we will have " << number_of_bubbles << " bubbles " << endl;
		std::cout << "You lose..." << endl;
	}
}
 
	return 0;
}

