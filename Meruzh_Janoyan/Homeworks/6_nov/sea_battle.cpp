// Sea Battle
#include <iostream>

int hashvir_naverin(int **matrix,int n, int m){

	bool flag=0;
	int counter=0;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(matrix[i][j]){
				if(!flag && (!i || !matrix[i-1][j])){
						counter++;
						flag=1;						
				}

			std::cout<<"1 ";
			}
			else{
				flag=0;
				std::cout<<"0 ";
			}
		}
		std::cout<<std::endl;
	}

	return counter;
}



int main() {
	int n=0;
	int m=0;
	std::cout<<"N:"; std::cin>>n;
	std::cout <<"M:"; std::cin>>m;
	
	int **matrix;
	matrix=new int* [n];

	for(int i=0;i<n;++i){//axyusaki stexcum, ev nermucum
		matrix[i]=new int [m];
		for(int j=0;j<m;++j){
			std::cout<<"matrix[ "<<i<<" , "<<j<<" ]="; 
			std::cin>>matrix[i][j];
		}
	}

	int result=hashvir_naverin(matrix,n,m);
	std::cout <<"Naveri qanaky: "<<result<<std::endl;

	delete matrix;

return 0;
}
