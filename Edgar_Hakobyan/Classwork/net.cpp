#include <iostream>

int main()
{
	char c[]= ">--->>--><<<<--<<>>>>>__>>><>>>>><<<<";
	char *tox=c;
	
	std::cout<<tox<<std::endl;
	int count=0;
	while(*(tox+4) != '\0')
	{
		if(*tox == '>' && *(tox+1) == '>' && *(tox+2) == '-' && *(tox+3) == '-' && *(tox+4) == '>')
		{
			++count;
			tox+=5;
		}
		else if(*tox == '<' && *(tox+1) == '-' && *(tox+2) == '-' && *(tox+3) == '<' && *(tox+4) == '<')
		{
			++count;
			tox+=5;
		}
		else
		{
			++tox;
		}
	}
	std::cout<<"count = " << count <<std::endl;
	return 0;
}
