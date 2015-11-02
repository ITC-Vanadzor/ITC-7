#include <iostream>
#include <cmath>

int Number(int, int, int);

int main()
{
	int A = 2, B = 2, maxPopQuantity = 2;
	std::cout << "Please insert value of A wich must be 1<=A<=109 " << std::endl;
	std::cin >> A;
	std::cout << "Please insert quantity of B wich must be 1<=B<=109  " << std::endl;
	std::cin >> B;
	std::cout << "For number of winner we will have " << Number(A, B, maxPopQuantity) << std::endl;
	return 0;
}
int Number(int a, int b, int maxPop)
{ 
	int sum = a + b;
	int flag = 0;
	while(sum > 0)
	{
		if(sum%(maxPop+1) == 0)
		{			
			sum = sum - 1;
			flag = 1;
		}
		else
		{
			sum = sum - sum%(maxPop+1);
			flag = 1;			
		}
		if(sum == 0)
		break;
		
		if(sum%(maxPop+1) == 0)
		{			
			sum = sum - 1;
			flag = 2;
		}
		else
		{
			sum = sum - sum%(maxPop+1);
			flag = 2;			
		}
		
	}
	
	return flag;
}




