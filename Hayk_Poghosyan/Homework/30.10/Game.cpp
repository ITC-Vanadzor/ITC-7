//Xax ynkuyzner
#include<iostream>

int main()
{
	int A = 0; 
	int B = 0;
	do
	{
		std::cout << "A=";
		std::cin >> A;
		std::cout << "B=";
		std::cin >> B;

	} while (A < 1 || B < 1 || A>109 || B>109);

	if (A % 2 == 0 && B % 2 == 0)
	{
		std::cout << "Khaxti 2-rd xaxacox@";
	}
	else
	{
		std::cout << "Khaxti 1-in xaxacox@";
	}

	return 0;
}