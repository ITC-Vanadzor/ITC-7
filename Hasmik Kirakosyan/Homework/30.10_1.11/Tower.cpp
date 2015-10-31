#include <iostream>


int count_of_overplus_cubes (int cubes_in_tower, int avarage_value) {
   	return (cubes_in_tower>avarage_value)? cubes_in_tower-avarage_value: 0;
}


int main () {

	int n; 
	std::cout<<"\nPlease input towers number :";
	std::cin>>n;
	
	int cubes[n];
	int cubes_sum=0;
	 for (int  i=0; i<n; ++i) {
		std::cout<<"\n How many cubes are in tower N"<<i+1<<" :";
		std::cin>>cubes[i];
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
	
	

