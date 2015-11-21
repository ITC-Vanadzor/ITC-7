#include <iostream>

int main()
{
	char c[]= ">--->>--><<<<--<<>>>>>__>>><>>>>><<<<";
	char *ch=c;

	std::cout<<ch<<std::endl;
	int count=0;
	std::cin>>count;

while(*(ch+4) != '\0')
{
	if(*ch == '>' && *(ch+1) == '>' && *(ch+2) == '-' && *(ch+3) == '-' && *(ch+4) == '>'){
			++count;
	}else if(*ch == '<' && *(ch+1) == '-' && *(ch+2) == '-' && *(ch+3) == '<' && *(ch+4) == '<'){
			++count;
	}
	++ch;
}
std::cout<<"count = " << count <<std::endl;


return 0;
}
