# include <iostream>
   
/*int Quantity( int **Array, int n){  // gets errors for function  about parameters 
  int quantity=0;     
   for(int i=0; i<n; ++i){
         for(int j=0; j<n; ++j){
                if(Array[i][j]==1 && (i==0 || Array[i-1][j]==0 ) ){
                    while(Array[i][j]==1 && j!=n-1){
                       ++j; 
                     } 
                    quantity++;
                    std::cout<<" i "<<i<<" j "<<j<<  "  quantity "<<quantity<<std::endl;
                 }         
         }
   } 

    return quantity;
}*/


int main()
{

int N;
do{
  std::cout<<"Enter N\t";
  std::cin>>N;

}while(N<2);

int Array[N][N];
   for(int i=0; i<N; ++i){
      for(int j=0; j<N; ++j){
   	 do{
   	    std::cout<<"Enter '1' if in ("<<i<<","<<j<<")  cell is an  boat, or '0' if there isn't boat\t";
   	    
   	  }while(Array[i][j]<0 || Array[i][j]>1);
        }
      
    }

int quantity=0;     
   for(int i=0; i<N; ++i){
         for(int j=0; j<N; ++j){
                if(Array[i][j]==1 && (i==0 || Array[i-1][j]==0 ) ){
                    while(Array[i][j]==1 && j!=N-1){
                       ++j; 
                     } 
                    quantity++;
                    std::cout<<" i "<<i<<" j "<<j<<  "  quantity "<<quantity<<std::endl;
                 }         
         }
   } 

 


                  
 // int quantity=Quantity(Array, N);           
    
std::cout<<"The quantity of boats  in the  board is\t"<<quantity<<std::endl;

return 0;
}
