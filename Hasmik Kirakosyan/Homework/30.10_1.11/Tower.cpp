#include <iostream>


int count_of_overplus_cubes (int cubes_in_tower,int avarage_value) {
   	return (cubes_in_tower>avarage_value)? cubes_in_tower-avarage_value: 0;
}


int main () {

	int n; 
	do {
	std::cout<<"\nPlease input towers number n (n ->[1,50]):";
	std::cin>>n;
    } while (n<1 || n>50);
	
	int cubes[n];
	int cubes_sum=0;
	 for (int  i=0; i<n; ++i) {
        do {
		std::cout<<"\n How many cubes are in tower N. Input number in [1,100]"<<i+1<<" :";
		std::cin>>cubes[i];
        } while (cubes[i]<1 || cubes[i]>100);
		cubes_sum+=cubes[i];
   	}
 	
	int cubes_in_one_tower = cubes_sum / n;
	int step=0;
	for (int i=0; i<n; ++i) {
		step+=count_of_overplus_cubes (cubes[i], cubes_in_one_tower);	
	}
	
	std::cout<<"\n Minimum number of steps to have equal counts of cubes in each tower is "<<step<<std::endl;
	

return 0;
}
	
	

