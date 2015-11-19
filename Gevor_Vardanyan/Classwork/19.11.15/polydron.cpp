#include <iostream>
#include <cstring>
int main()
{
	char ch[]= "aabassabaa";
	
	std::cout<<ch<<std::endl;
	int n = strlen(ch);
	bool flag=true;
	for(int i = 0; i <= n/2; ++i)
	{
	if(ch[i] != ch[n-1-i]){
			flag=false;
			break;
	}
	
	}
	if(flag ){
		std::cout<<"Is Polindrom "<<std::endl;
		ch[n-1]='\0';
		std::cout<<ch<<std::endl;
	}else{
		std::cout<<"Isn't Polindrom "<<std::endl;
	}
	
	
return 0;
}
