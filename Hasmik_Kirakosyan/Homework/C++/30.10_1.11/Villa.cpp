#include <iostream>

int find_min (const int& a,const int& b) {
	 return (a<b)?a:b; 
};

int count_of_between_villas (int min,const int& N, const int& M){
	return (N+M)/2-(min+1);	

};


int main () {
	int N=0, M=0;
	
	do {
    
	std::cout<<"\nM, N are in [1, 100)\n N= ";
	std::cin>>N;
	
	std::cout<<"\n M= ";
	std::cin>>M;
	
    } while (N>=100 || M>=100);

	int count_villas = count_of_between_villas (find_min (N, M), N, M);
	
	std::cout<<"\nVillas between Ashot's and Arman's villas is "<<count_villas<<std::endl;


return 0;
}
