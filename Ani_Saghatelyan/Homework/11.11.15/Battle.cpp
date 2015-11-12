// The AREAIJ isn't correct
# include <iostream>
 static int imax=0;
 static  int imin=0;
 static  int jmax=0;
 static  int jmin=0;
 static  int Area=0;
 static  const int N=4;
 static int Array[N][N];
 

void Determine( int i, int j){
       
          Array[i][j]=2;
          Area++;
          
          
             if(j>=jmax && Array[i][j+1]==1){
                   jmax++;
      		 Determine(i, j+1);
               }     
               if(j<=jmin && Array[i][j-1]==1){
                  jmin--;
                  Determine(i, j-1); 
                } 
             
                if(i>=imax && Array[i+1][j]==1){
                  imax++;
                  Determine(i+1, j);
                   }
           
                 if(i<=imin && Array[i-1][j]==1){
                        imin--;
                        Determine(i-1,j);
                         }
				
                   
        }


int main()
{

 
   for(int k=0; k<N; ++k){
      for(int p=0; p<N; ++p){
   	 Array[k][p]=false;
        }
      
    }
   Array[0][0]=1;
   Array[1][1]=1;
   Array[1][0]=1;
  // Array[2][3]=1;
 //  Array[3][0]=1;
  // Array[3][1]=1;

int quantity=0;     


   for(int i=0; i<N; ++i){
         for( int j=0; j<N; ++j){
                    if(Array[i][j]){
                        imax=i;
		        imin=j;
                        Area=0;
                        jmax=j;
			jmin=j;
                        
                        Determine(i,j);
                        int AreaIJ=(imax-imin+1)*(jmax-jmin+1);
                         std::cout<<" i "<< i<<" j "<<j<<std::endl;
                         std::cout<<" AreaIJ  "<<AreaIJ<<std::endl;
		         std::cout<<"  Area "<<Area<<std::endl;
                         for(int k=0; k<N; ++k){
      for(int p=0; p<N; ++p){
   	 std::cout<<Array[k][p];
        }
    std::cout<<std::endl;
      
    }
                        if( Area==AreaIJ  ){
                            quantity++;
                             }
                       }
                  
                   }         
         }     
std::cout<<"The quantity of boats  in the  board is\t"<<quantity<<std::endl;

return 0;
}
