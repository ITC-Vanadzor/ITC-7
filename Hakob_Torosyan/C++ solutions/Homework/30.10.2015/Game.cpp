#include <iostream>
#include <cmath>

void Number(int &, int &);

int main()
{
	int A = 2, B = 2;
	std::cout << "Please insert value of A wich must be 1<=A<=109 " << std::endl;
	std::cin >> A;
	std::cout << "Please insert quantity of B wich must be 1<=B<=109  " << std::endl;
	std::cin >> B;
	 Number(A, B);
	return 0;
}

void Number(int &a, int &b)
{ 
 	if(a%2 == 0 && b%2 == 0)
 	{
 	std::cout << "Winner is first player " << std::endl;
	}
	 else
	{
 	std::cout << "Winner is second player " << std::endl;
	}
}




