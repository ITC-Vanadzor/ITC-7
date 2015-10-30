#include <iostream>

int find_min (int a, int b) {
	 return (a<b)?a:b; 
};

int count_of_between_villas (int min, int N, int M){
	return (N+M)/2-(min+1);	

};


int main () {
	int N=0, M=0;
	
	std::cout<<"\n N= ";
	std::cin>>N;
	
	std::cout<<"\n M= ";
	std::cin>>M;

	int min = find_min (N, M);
	int count_villas = count_of_between_villas (min, N, M);
	
	std::cout<<"\nVillas between Ashot's and Arman's villas is "<<count_villas<<std::endl;

return 0;
}
