//Hanoy tower
#include <iostream>
//Hanoy function, which help us to do transportations with recursion method 
// Function takes like argument the numbers of rings and names of pins 
void Hanoy(int number, char from, char to, char free)
{
	if(number > 0)
	{
		Hanoy(number-1, from, free, to);
		std::cout<<"\n Take  "<<number<<"ring from "<<from<<" pin and put to "<<to<<" pin";      
		Hanoy(number-1,  free, to, from);
    }
}

void main()   
{ 
	int number;// the "number" is quantity of pins
	std::cout << "Please import number of rings ";
	std::cin >> number;
        Hanoy(number, 'A', 'C', 'B');
        std::cout<<endl;
}
