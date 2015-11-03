#include <iostream>
#include <cmath>

void Villa(int, int);

int main()
{
	int N = 1, M = 2;
	int A1 = 1;// the number of home of Ashot
	int A2 = 2;// the number of home of Armen
	std::cout << "Please insert value for N number (where N < 100) ";
	std::cin >> N;
	std::cout << "Please insert value for number M (where M < 100) ";
	std::cin >> M;
	if((N + M)%2 == 0)
        {	
        	Villa(N, M);
        }
        else
	}	
        	std::cout << "Please repeat inputing numbers " << std::endl;
	}
	return 0;
}

void Villa(int N, int M)
{
	//A1 = N + 1;
	//For sum of all homes we will have M + N + 1
	//A2 = (M + N)/2 + 1;
	//For difference of houses of Armen and Ashot we will have |A1 - A2| - 1;
	std::cout << "For difference of houses of Armen and Ashot we will have " << std::abs((N-M)/2) - 1 << std::endl;
}
