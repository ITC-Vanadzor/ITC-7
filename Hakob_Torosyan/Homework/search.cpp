include <fstream> 
#include <iostream> 
#include <string.h> 

int main(){ 
	ifstream input("input.txt"); 
	char buffer[1024]; 
	char search[20]=""; 

	std::cout<<"Input search string : ";
	std::cin>>search;

	while(input.getline(buffer,1024)) { 
	if(strstr(buffer, search)) 
	std::cout << buffer << std::endl; 
	} 

	return 0; 
} 
