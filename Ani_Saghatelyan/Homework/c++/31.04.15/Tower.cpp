//The programm determines  the quantity of cubes , which will be moved 
# include <iostream>

 int SumOfCubes( int* tower,  const int& towersQuantity ){
     int sum=0;
      for(int i=0; i<towersQuantity; ++i){
 
          sum+=*(tower+i);
		}
	return sum;
    }

int QuantityOfCubes(  int*  tower,const  int& eachTowerCube,const int& towersQuantity){
   int cubes=0;

   for(int i=0; i<towersQuantity; ++i){

        if(tower[i]>eachTowerCube){

         	 cubes+=tower[i]-eachTowerCube;
		}
	}
	return cubes;
}
   


int main(){
    int QuantityOfTowers=-1;
	 do{ 
 		std::cout <<"Enter the  (positive number) quantity of towers\t";
                std::cin >> QuantityOfTowers;
               } while ( QuantityOfTowers <= 0 ) ;
         int Towers[15]={};

             for( int i=0 ; i < QuantityOfTowers ;  ++i ) {
                int cubes=0;
                std::cout << "Enter the quantity of cubes in\t" << i << "-th  tower \n " ;
                std::cin >> cubes;
                 Towers[i]=cubes;
              }
    int eachTowerCube=SumOfCubes(Towers, QuantityOfTowers )/QuantityOfTowers;
        if(SumOfCubes(Towers, QuantityOfTowers )%QuantityOfTowers!=0){
              std::cout<<"The quantity of all cubes inputed by you can't make equivalent  towers\n";
             }
   
    int quantityOfCubes=QuantityOfCubes(Towers, eachTowerCube,QuantityOfTowers);
    std::cout<<"The quantity of cubes, which will be moved is\t"<<quantityOfCubes<<std::endl;

return 0;
}
                
    
            
