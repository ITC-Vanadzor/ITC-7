#include <iostream>
int main()
{
	int qanak=0;
	std::cout<<"greq hyureri qanak@`";
	std::cin>>qanak;
	if(qanak%2==0)
	{
		std::cout<<"ktrvacqneri minimal qanakutyun@ klini` "<<qanak/2<<std::endl;
	}
	else
	{
		std::cout<<"ktrvacqneri minimal qanakutyun@ klini` "<<qanak-1<<std::endl;
	}
	return 0;
}
