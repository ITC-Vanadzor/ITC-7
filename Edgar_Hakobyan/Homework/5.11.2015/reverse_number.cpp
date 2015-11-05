#include <iostream>
int reverse_number;
int reverse(int number)
{
	if(number>0)
	{
		reverse_number = ( (reverse_number * 10) + (number%10) );
		reverse(number/10);
	}
	return reverse_number;
}
int main()
{
	int n;
	do
	{
		std::cout<<"greq tiv: ";
		std::cin>>n;
	}
	while(n<0);
	int reverse_n=reverse(n);
	std::cout<<"tiv@ shrjac klini: "<<reverse_n<<std::endl;
	return 0;
}