#include <iostream>

void summeringRooms (int , int );

int main()
{
	int numberOfSteps, numberOfAngles;
	std::cout << "Please import number of steps ";
	std::cin >> numberOfSteps;
	std::cout << "Please import number of Angles ";
	std::cin >> numberOfAngles;
	summeringRooms(numberOfAngles, numberOfSteps);
	return 0;
}

void summeringRooms (int angles, int steps)
{
	int sum = angles;
	int dif = 3;
	int step = 2;
	--steps;
	while(steps > 0)
	{
		sum = sum + angles * step - dif;
		++step;
		dif+=2;
		--steps;
	}
	 std::cout << "For sum of rooms we will have " << sum << std::endl;
}
