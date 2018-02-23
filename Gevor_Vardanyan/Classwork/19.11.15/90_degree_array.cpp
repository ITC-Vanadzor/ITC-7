#include <iostream>
#include <stdlib.h>

int main()
{
	int array[50][50] ;
	
	std::cout<<"Input N:";
	int n=0;
	std::cin>>n;
	if(n>50 || n<3) return 0;

	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			array[i][j]=rand()%99+1;
			std::cout<<array[i][j]<<" ";
		}
		std::cout<<std::endl;
}
	std::cout<<std::endl;

	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			std::cout<<array[n-1-j][i]<<" ";
		}
	std::cout<<std::endl;
	}

return 0;
}
