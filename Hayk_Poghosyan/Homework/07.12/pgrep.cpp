#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include <string.h>


int main()
{
std::string name,str;

std::cin>>name;



for(int id=1;id<5000;++id)
{


char tmp[5];
tmp=std::to_string(id);
char road[]="/proc/";
strcat(road,tmp);
strcat(road,"comm/");
std::ifstream fin;
fin.open(road,std::ifstream::in);
fin >> str;
std::cout<<str;
if(str==name)
	{
		std::cout<<id;
		exit(1);
	}
fin.close();
}

std::cout<<"there is no process"<<name;
return 0;
}
