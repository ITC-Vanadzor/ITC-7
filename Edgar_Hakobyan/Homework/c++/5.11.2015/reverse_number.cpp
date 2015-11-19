#include <iostream>
int reverse(int number)
{
	int himq=1;
	while(number / (himq *10))
	{
		himq *= 10;
	}
	while(number != 0)
	{
		int reverse_number = (number % 10) * himq;
		return reverse(number/10) + reverse_number;
	}
}
int main()
{
	int n;
	std::cout<<"greq tiv: ";
	std::cin>>n;
	int reverse_n=reverse(n);
	std::cout<<"tiv@ shrjac klini: "<<reverse_n<<std::endl;
	return 0;
}